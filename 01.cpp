#include <iostream> 

class Road {	//��������� ������
public:
	double length;
	int width;
	Road();
};
Road::Road() {		// ���������� ������
	width = 555.5;
	length = 2;
};
int main() {
	using namespace std;
	Road* road;
	road = new Road();
	cout << "Before access: \n";
	cout << "Length: " << road->length << endl;
	cout << "Width: " << road->width << endl;
	road->length = 444.4;
	road->width = 4;
	cout << "\nAfter access: \n";
	cout << "Length: " << road->length << endl;
	cout << "Width: " << road->width << endl;
}
