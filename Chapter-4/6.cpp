/*
Write a program that first allows the user to specify a type by entering its first letter
( ‘l’ , ‘s’ , ‘m’ , and so on), then stores the type chosen as a value of a variable of type
enum etype , and finally displays the complete word
*/

//author @Nishant

#include<iostream>

using namespace std;
//to define relative name

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main(){
    etype etype1;
    char type;
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type){
        case 'l': etype1 = laborer;
        cout <<"Employee type is laborer";
        break;
        case 's': etype1 = secretary; 
        cout << "Employee type is secretary";
        break;
        case 'm': etype1 = manager; 
        cout << "Employee type is manager";
        break;
        case 'a': etype1 = accountant; 
        cout << "Employee type is accountant";
        break;
        case 'e': etype1 = executive; 
        cout << "Employee type is executive";
        break;
        case 'r': etype1 = researcher;
        cout << "Employee type is researcher";
        break;
        default:
            cout << "Invalid input";
            break;
    }

    cout << endl;
    return 0;
}