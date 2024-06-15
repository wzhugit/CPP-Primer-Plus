//C++ Primer Plus±‡≥Ã¡∑œ∞chapter7ex3.cpp
#include<iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void passboxaddress(struct box * boxaddr)
{
	boxaddr->volume = (boxaddr->height)*(boxaddr->width)*(boxaddr->length);
}

int main()
{
	

	void showmember(char maker[40], float height, float width, float length, box * boxaddr);
	void passboxaddress(struct box * boxaddr);

	struct box * Box;
	struct box str = { "Tello", 10.0, 20.0, 40.0, 0 };
	Box = &str;
	
	showmember(Box->maker,Box->height,Box->width,Box->length, Box);

	return 0;
}

void showmember(char maker[40], float height, float width, float length,struct box * boxaddr)
{
	using namespace std;
	cout << "maker member:" << maker << endl;
	cout << "height member:" << height << endl;
	cout << "width member:" << width << endl;
	cout << "length member:" << length << endl;
	passboxaddress(boxaddr);

	cout << "volume member:" << boxaddr->volume << endl;
}

