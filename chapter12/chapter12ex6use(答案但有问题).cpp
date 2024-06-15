#include <iostream>
#include <ctime>
#include "chapter12ex6.h"

using namespace std;
const int MIN_PER_HR = 60;

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}


int main()
{
	srand(time(0));
	cout << "Case Study:Banck of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue:";
	int qs;
	cin >> qs;
	Queue line(qs);
	Queue line2(qs);
	cout << "Set simulation hours: 100\n";
	int hours = 100;
	long cyclelimit = MIN_PER_HR * hours;
	double perhour = 30;
	double min_per_cust;
	Item temp;
	long turnaway = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	int wait_time2 = 0;
	long line_wait = 0;
	double average_wait = 0;
	{
		min_per_cust = MIN_PER_HR / perhour;
		turnaway = 0;
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		wait_time2 = 0;
		line_wait = 0;
		average_wait = 0;
		while (!line.isempty())
		{
			line.DeleteFirstFromQueue(temp);
		}
		while (!line2.isempty())
		{
			line2.DeleteFirstFromQueue(temp);
		}
		for (int cycle = 0; cycle < cyclelimit; ++cycle) {
			if (newcustomer(min_per_cust)) {
				if (line.isfull() && line2.isfull())
					turnaway++;
				else {
					{
						customers++;
						temp.set(cycle);
						if (line.queuecount() < line2.queuecount())
							line.enqueue(temp);
						else
							line2.enqueue(temp);
					}
				}
				if (wait_time <= 0 && !line.isempty()) {
					line.DeleteFirstFromQueue(temp);
					wait_time = temp.ptime();
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time2 <= 0 && !line2.isempty()) {
					line2.DeleteFirstFromQueue(temp);
					wait_time2 = temp.ptime();
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time > 0)
					wait_time--;
				if (wait_time2 > 0)
					wait_time2--;
				sum_line += line.queuecount() + line2.queuecount();
			}
			if (served > 0)
				average_wait = (double)line_wait / served;
			cout << "第" << perhour - 14 << "次实验的平均等候时间为：" << average_wait << "分钟，每⼩时到达的客户数为：" << perhour << "个。\n";  perhour--;
		}
		while (average_wait > 1);

	}
	return 0;
}