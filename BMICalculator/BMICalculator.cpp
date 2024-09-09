#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float weight, height, bmi;
	cout << "Please enter your weight and height";
	cin >> weight >> height;
	bmi = weight / pow(height, 2);

	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi > 25)
		cout << "Overweight" << endl;
	else
		cout << "Normal weight" << endl;
	cout << "Your bmi is " << bmi;
	system("pause>0");
}