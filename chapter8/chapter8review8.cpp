#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;

	float volume = height*width*height;
};

template <typename T>
T max(T b1, T b2);

template <>
box max(box b1, box b2);

int main()
{
	using namespace std;

	


	box box1;
	box box2;
	

	
	
	cout << "Please enter the maker of box1 " << endl;
	cin >> box1.maker;

	cout << "Please enter the height of box1 " << endl;
	cin >> box1.height;

	cout << "Please enter the width of box1 " << endl;
	cin >> box1.width;

	cout << "Please enter the length of box1 " << endl;
	cin >> box1.length;



	cout << "Please enter the maker of box2 " << endl;
	cin >> box2.maker;

	cout << "Please enter the height of box2 " << endl;
	cin >> box2.height;

	cout << "Please enter the width of box2 " << endl;
	cin >> box2.width;

	cout << "Please enter the length of box2 " << endl;
	cin >> box2.length;


	cout << "The box with the greater volume is " << max(box1, box2).maker << endl;
	

	
}


template <typename T>
T max(T b1, T b2)
{
	return b1.volume > b2.volume ? b1 : b2;
}

template <>
box max(box b1, box b2)
{
	return b1.volume > b2.volume ? b1 : b2;
}
