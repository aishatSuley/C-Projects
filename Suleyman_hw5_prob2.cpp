#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int rect;
	double width;
	double area = 0.0;
	cout << "how many rectangles do you want?: ";
	cin >> rect;
	width = 1.0 / rect;
	for (int i = 0;i < rect;i++) {
		double x = i * width;
		double height = sqrt(1 - (x * x));
		area += width * height;
	}
	double pi = 4 * area;
	double PI = 3.14159265;
	double diff = PI - pi;
	cout << "The estimated value of pi is: " << pi<< endl;
	cout << "The difference is: " << diff;


	return 0;
}