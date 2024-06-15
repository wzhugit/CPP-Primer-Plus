//C++ Prier Plus chapter10ex4.h
//SALES命名空间和类声明
#ifndef SALES_
#define SALES_
namespace SALES
{
	const int QUARTERS = 4;

	class Sales
	{
		private:                     //私有成员
			double sales[QUARTERS];
			double average;
			double max = 0.0;
			double min = 0.0;
			int totalnum = QUARTERS;    //数组项目总数
			

		public:                   //成员函数
			//non-interactive version
			//copies the lesser of 4 or n items from the array ar
			//to the sales member of s and computes and stores the
			//average, maximum, and minimum values of the entered items;
			//remaining elements of sales, if any, set to 0.
			Sales();                                  //默认构造函数

			Sales(double ar[], int n);         //构造函数1

			//display all information in structure s
			void showSales() const;                  //成员函数，用于显示数据


			//interactive version
			void setSales();                         //setSales(Sales &)的交互版本

	};

}




#endif