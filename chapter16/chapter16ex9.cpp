// C++ Primer Plus chapter16ex9.cpp
#include <vector>
#include <list>
#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>

int main()
{
	using namespace std;

	vector<int> vi0;

	vector<int> vi;

	list<int> li;

	for (int i = 0; i < 210000; i++)
	{
		vi0.push_back(rand());
	}

	cout << "The vi0 contains :\n";
/*
	for (auto c : vi0)
		cout << c << " ";

	cout << endl;
*/
	
	vi = vi0;
	li.assign(vi0.begin(),vi0.end());

	/*
	cout << "The vi contains :\n";

	for (auto c : vi)
		cout << c << " ";

	cout << endl;
	*/

	//sorting with STL algorithm
	clock_t starttimewithSTL = clock();
	sort(vi.begin(), vi.end());
	clock_t endtimewithSTL = clock();
	cout << "It takes " << (double)(endtimewithSTL - starttimewithSTL) / CLOCKS_PER_SEC << " seconds to do the following: \
sorting list vi with STL algorithm sort()." << endl;
	
	li.clear();

	//sorting with list method
	li.assign(vi0.begin(), vi0.end());
	clock_t starttimewithmethod = clock();
	li.sort();
	clock_t endtimewithmethod = clock();
	cout << "It takes " << (double)(endtimewithmethod - starttimewithmethod) / CLOCKS_PER_SEC << " seconds to do the following: \
sorting list li with list method sort()." << endl;
	
	//copy the li to vi
	copy(li.begin(), li.end(), std::inserter(vi,vi.begin()));
	
	sort(vi.begin(), vi.end());

	//delete repeated elements
	std::vector<int>::iterator lastunrepeatelemend = unique(vi.begin(), vi.end());
	
	cout << "After Sorting:" << endl;

	/*
	for (vector<int>::iterator element = vi.begin();element != lastunrepeatelemend;element++)
	{
		
		cout << *element << ", ";
	}
	*/

	cout << endl;

	//copy the vi to li
	copy(vi.begin(), lastunrepeatelemend, li.begin());

	clock_t endtime = clock();

	cout << "It takes " << (endtime - starttimewithmethod) / CLOCKS_PER_SEC << " seconds to do the following: \
copy li to vi ,sorting vi and copy vi to li." << endl;
	/*
	//copy the vi to li
	copy(vi.begin(), lastunrepeatelemend, li);

	clock_t endtime = clock();

	cout << "It takes " << (endtime - starttime) / CLOCKS_PER_SEC << " seconds to do the following: \\\
copy li to vi, sorting vi, then copy vi to li." << endl;
	*/


	return 0;

}