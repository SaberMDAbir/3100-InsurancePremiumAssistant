//MD Abir A. Choudhury
//021018
//A3 - HW

#include <iostream>

using namespace std;

int main()
{
	cout << "This program will assist you in calculating the monthly cost of car insurance for a person. \n"; // friendly greeting
	//declare variables
	float baseMonthly = 50.00; //base monthly insurance payment

	//Input
	//Get age
	int age = 0;
	cout << "What is the person's age? \n";
	cin >> age;

	//get # of accidents
	int numAccidents = 0;
	cout << "How many accidents were you in the last 5 years? \n";
	cin >> numAccidents;

	//Processing
	//Calculate Insurance Premium
	if (age < 25) {
		baseMonthly += 100;
	}
	else if (age < 35) {
		baseMonthly += 20;
	}

	//Calculate additional charge for accidents
	if (numAccidents <= 1) {
		cout << "You are forgiven under the accident forgiveness policy. \n";
	}

	else if (numAccidents == 2) {
		baseMonthly += numAccidents * 40;
	}

	else if (numAccidents <= 4) {
		baseMonthly += numAccidents * 60;
	}

	else if (numAccidents >= 5) {
		cout << "We cannot provide you with insurance. \n";
	}

	else {
		cout << "You have entered an invalid number. \n";
	}

	//Output
	cout << "You're monthly insurance payment is " << baseMonthly << endl;

	system("PAUSE");
	return 0;
}