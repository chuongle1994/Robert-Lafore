/*
A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone . Create two structure variables of type phone . Initialize one, and have the user
input a number for the other one. Then display both numbers.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct student{
	int student_id, age, grade;
};

int main(){
	student student1;


	
	cout << "Enter your student_id, age, grade: ";
	cin >> student1.student_id >> student1.age >> student1.grade;
	cout << "Your student_ID: " << student1.student_id;
	cout << " \nYour age: " << student1.age;
	cout << "\nYour grade: " << student1.grade << endl;
	return 0;
}
