//C++ Prier Plus chapter10ex4.h
//SALES�����ռ��������
#ifndef SALES_
#define SALES_
namespace SALES
{
	const int QUARTERS = 4;

	class Sales
	{
		private:                     //˽�г�Ա
			double sales[QUARTERS];
			double average;
			double max = 0.0;
			double min = 0.0;
			int totalnum = QUARTERS;    //������Ŀ����
			

		public:                   //��Ա����
			//non-interactive version
			//copies the lesser of 4 or n items from the array ar
			//to the sales member of s and computes and stores the
			//average, maximum, and minimum values of the entered items;
			//remaining elements of sales, if any, set to 0.
			Sales();                                  //Ĭ�Ϲ��캯��

			Sales(double ar[], int n);         //���캯��1

			//display all information in structure s
			void showSales() const;                  //��Ա������������ʾ����


			//interactive version
			void setSales();                         //setSales(Sales &)�Ľ����汾

	};

}




#endif