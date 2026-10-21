#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile;
	inputFile.open("dat_hw5_prob1.txt");
	double testScore;
	double sum=0;
	double lowest;
	int counter = 0;
	char letterGrade;
	inputFile >> testScore;
	lowest = testScore;
	sum = testScore;
	counter++;
	while (inputFile >> testScore) {
		if (testScore < lowest) {
			lowest = testScore;
		}
		sum += testScore;
		counter++;
	}
	sum = sum-lowest;
	sum = sum / (counter-1);
	if (sum >= 90) {
		letterGrade = 'A';
	}
	else if (sum >= 80) {
		letterGrade = 'B';
	}
	else if (sum >= 70) {
		letterGrade = 'C';
	}
	else{
		letterGrade = 'D';
	}
	cout << "The average is " << sum << endl;
	cout << "The Letter Grade is " << letterGrade;
	inputFile.close();

	return 0;
}