/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.*/

#include<iostream>

using namespace std;

int main(){
	float weight;

	//cout << "Enter the value in gallons: ";
	//cin >> vGallons;
	//cout << "Value in cubic feet: " << (vGallons/7.481) << endl;
	cout<<"Enter your weight in kg: ";
	cin>>weight;
	cout << "Your weight in pounds is: " << (weight*2.20462)<<endl;
	return 0;
}
