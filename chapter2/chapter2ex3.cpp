# include <iostream>
using namespace std;
void sentence1(void);
void sentence2(void);
int main(void)
{	
	
	sentence1();
	sentence1();
	sentence2();
	sentence2();
	
	cin.get();
	return 0;
}

void sentence1(void)
{
	cout<<"Three blind mice"<<endl;
}

void sentence2(void)
{
	cout<<"see how they run"<<endl;
}