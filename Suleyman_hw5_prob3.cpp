#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double x;
	cout << "Enter a number x: ";
	cin >> x;
	double approx=0;
	double fact = 1;
	for (int K = 1;K <= 10; K++) {
		if (K == 1) {
			approx = 1;
		}
		else {
			fact = fact * (K - 1);
			approx = approx + pow(x, K - 1) / fact;
		}
		double diff = exp(x) - approx;
		cout << "K= " << K << ", The difference is: " << diff<<endl;
	}

	return 0;
}