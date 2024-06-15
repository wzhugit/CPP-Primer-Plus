//C++ Primer Plus chapter18ex2.cpp
#include <iostream>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};

private:
	Info* pi;

public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& cp) noexcept;
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv) noexcept;
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

Cpmv::Cpmv()
{
	pi = new Info;
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	std::cout << "String constructor called.\n";
}

Cpmv::Cpmv(const Cpmv& cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Copy constructor called.\n";
}
Cpmv::Cpmv(Cpmv&& mv) noexcept
{
	pi = new Info;
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi = nullptr;
	std::cout << "Move constructor called.\n";
}

Cpmv::~Cpmv()
{
	delete pi;
	std::cout << "Destructor called.\n";
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	std::cout << "Copy assignment operator called.\n";

	if (this == &cp)
		return *this;

	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}


Cpmv& Cpmv::operator=(Cpmv&& mv) noexcept
{
	std::cout << "Move assignment operator called.\n";

	if (this == &mv)
		return *this;

	delete pi;
	pi = new Info;
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi = nullptr;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	std::cout << "Plus operator called.\n";
	Cpmv sum;
	sum.pi->qcode = pi->qcode + obj.pi->qcode;
	sum.pi->zcode = pi->zcode + obj.pi->zcode;
	return sum;
}
void Cpmv::Display() const
{
	std::cout << "qcode: " << pi->qcode << std::endl;
	std::cout << "zcode: " << pi->zcode << std::endl << std::endl;
}


int main()
{
	using std::cout;
	Cpmv temp;
	cout << "Object 0:\n";
	temp.Display();

	Cpmv temp1("number one", "number two");
	cout << "Object 1:\n";
	temp1.Display();

	Cpmv temp2(temp);
	cout << "Object 2:\n";
	temp2.Display();

	cout << "Object 3 = Object 1:\n";
	Cpmv temp3;
	temp3 = temp1;
	cout << "Object 3:\n";
	temp3.Display();
	cout << "Object 1:\n";
	temp1.Display();

	cout << "Object 4 = move(Obejct 3):\n";
	Cpmv temp4;
	temp4 = std::move(temp3);
	cout << "Object 4:\n";
	temp4.Display();
	cout << "Object 3:\n";
	temp3.Display();

	cout << "Obejct 5 = Object 3 + Obejct 4:\n";
	Cpmv temp5 = temp3 + temp4;
	cout << "Obejct 5:\n";
	temp5.Display();

	return 0;
}