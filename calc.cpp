#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main(){

bool run = true;
   
   while(run){

    cout << endl << "-------------------------------------------------------------------CALCULATOR-------------------------------------------------------------------" << endl;
    double num1, num2;
    cout << endl << "Enter the first number for calculation:" << endl << endl;
    
    while(!(cin >> num1)){
        cout << endl << "No number detected, please enter the first number for calculation:" << endl << endl;
        cin.clear();
        cin.ignore();
    }

    cout << endl << "Enter the second number for calculation:" << endl << endl;
    
    while(!(cin >> num2)){
        cout << endl << "No number detected, please enter the second number for calculation:" << endl << endl;
        cin.clear();
        cin.ignore();
    }

    cout << endl << "Enter an operation: +, -, /, *:" << endl << endl;
    char op;
    cin >>  op;

    switch(op){
        case '+':  
        cout << endl << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
        case '-':
        cout << endl << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
        case '/':
        if(num2 != 0){
            cout << endl << num1 << " / " << num2 << " = " <<  (num1 / num2) << endl;
        }else{
            cout << endl << "Error: can not divide by 0!" << endl;
        }
        break;
        case '*':
        cout << endl << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
        default:
        cout << endl << "Invalid selection." <<  endl << endl;
        break;
    }

    string key;
    cout << endl << "Enter any key to continue." << endl << endl;
    cin >> key;

   }
  


    return 0;
}