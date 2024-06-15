#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
int main(void)
{
	using namespace std;
	void showvalue(struct box & box1);
	float calculatevolume(float & length, float & width, float & height);

	struct box newbox { "Siemens",20,6,10,0.0};

	/*newbox.height = 20;
	newbox.width = 5;
	newbox.length = 10;*/
	newbox.volume = calculatevolume(newbox.length, newbox.width, newbox.height);

	showvalue(newbox);
	return 0;
}

void showvalue(struct box & box1)
{
	using namespace std;
	cout << "maker value is " << box1.maker<<endl;
	cout << "height value is " << box1.height << endl;
	cout << "width value is " << box1.width << endl;
	cout << "length value is " << box1.length << endl;
	cout << "volume value is " << box1.volume << endl;
}

float calculatevolume(float & length, float & width, float & height)
{
	return length*width*height;
}