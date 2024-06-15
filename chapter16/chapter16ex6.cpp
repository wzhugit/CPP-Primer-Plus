// C++ Primer Plus chapter16ex6.cpp
#include <iostream>
#include <queue>
#include <cstdlib>    //for rand() and srand()
#include <ctime>

const int MIN_PER_HR = 60;         //const variable must be initialized. const变量必须初始化

bool newcustomer(double x);     //is there a new customer?

//This queue will contain Customer items
class Customer
{
private:
	long arrive;           //arrival time for customer
	int processtime;       //processing time for customer

public:
	Customer()
	{
		arrive = processtime = 0;
	}

	void set(long when)
	{
		processtime = std::rand() % 3 + 1;
		arrive = when;
	}

	long when() const
	{
		return arrive;
	}

	int ptime() const
	{
		return processtime;
	}
};

typedef Customer Item;

int main()
{

	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	//setting thing up
	std::srand(std::time(0));        //random initializing of rand()

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue:";
	int qs;
	cin >> qs;
	std::queue<Customer> line;           //line queue holds up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;          //hours of simulation
	cin >> hours;
	//simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;          //# of cycles


	cout << "Enter the average number of customers per hour: ";
	double perhour;             //average # of arrival per hour
	cin >> perhour;
	double min_per_cust;        //average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;         //new customer data
	long turnaways = 0;     //turned away by full queue
	long customers = 0;     //joined the queue
	long served = 0;        //served during thesimulation
	long sum_line = 0;        //cumulative line length
	int wait_time = 0;        //time until autoteller is free
	long line_wait = 0;       //cumulative time in line

	//running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))      //have newcomer
		{
			if (line.size() == qs)
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);      //cycle = tiem of arrival
				line.push(temp);      //add newcomer to line
			}
		}

		if (wait_time <= 0 && (line.size() != 0))
		{
			line.pop();          //attend next customer
			wait_time = temp.ptime();     //for wait_time minutes
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;

		sum_line += line.size();
	}

	//reporting results
	if (customers > 0)
	{
		cout << "Customers accepted:" << customers << endl;
		cout << " customers served:" << served << endl;
		cout << "          turnaways:" << turnaways << endl;
		cout << "average queue size:";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time:"
			<< (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers:\n";

	cout << "Done!\n";

	return 0;
}



//x = average time, in minutes, between customers
//return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}