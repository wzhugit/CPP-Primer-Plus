//C++ Primer Plus chapter13ex2.h

//类声明中没有使用动态内存（指针）type *，故可以不用定义 拷贝构造函数 和 赋值运算符
//使用动态内存type *和new/delete时必须定义拷贝构造函数和赋值运算符；
//若没有使用动态内存type *和new/delete则不用定义拷贝构造函数和赋值运算符，依赖合成的版本即可


class Cd       //represents a CD disk
{
private:
	char* performers;     //apply dynamic memory other than fixed-length array
	char* label;
	//double playtime;     //playing time in minutes
	int selections;     //number of selections

	//protected:
	double playtime;     //playing time in minutes


public:
	Cd(const char* authors = "Default Performers", const char* albumlabel = "Default Labels",
		int numselection = 1, double timelen = 100);     //timelen in minutes
	Cd(const Cd& d);
	//Cd();
	virtual ~Cd();
	virtual void Report() const;     //reports all CD data
	Cd& operator=(const Cd& d);



	double ReportPlaytime() const
	{
		return playtime;
	}


	int ReportSelections()
	{
		return selections;
	}
};

class Classic :public Cd
{

private:
	char* works;     //saves the names of all the works


public:
	Classic(const char* nameofworks = "none", const char* artist = "none",
		const char* country = "none", int selections = 0, double playtimeinmin = 0.0);    //selections saves the number of selections
	Classic(const Classic& d);
	//Classic();

	virtual ~Classic();
	virtual void Report() const;     //reports all Classic CD data

	Classic& operator=(const Classic& d);

	char* Reportworks()
	{
		return works;
	}
};