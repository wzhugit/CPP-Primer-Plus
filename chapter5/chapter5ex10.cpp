#include<iostream>
#include<string>
int main()
{
	int n;
	using namespace std;
	cout << "Enter number of rows:";
	cin >> n;
	char zifu[100][100];

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1 ; j++)
		{
			zifu[i][j] = '.';
		}

	}

	for (int i = 0; i <= n-1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			zifu[i][n - 1 - j] = '*';
		}

	}

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			cout << zifu[j][i];
		}
		cout << endl;
	}
	cin.get();
	return 0;


}