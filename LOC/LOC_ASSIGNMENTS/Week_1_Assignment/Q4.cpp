/* 4. Write a c++ program to enter two numbers and perform all 
arithmetic operations using switch case.  */


 
#include <iostream>
using namespace std;

int main(){
    char op ;
    float num1, num2;
    cout << "Enter two numbers :"<< endl;
    cin >> num1 >> num2; 
    cout << "Enter an operator (+, -, *, /) : ";
    cin >> op;
    switch (op) {
        case '+':
        cout << "sum of two number is : " << num1 + num2 ;
        break;
        case '-':
        cout << "substraction  of two number is : " << num1 - num2 ;
        break;
        case '/':
        cout << "division of two number is : " << num1 / num2 ;
        break;
        case '*':
        cout << "multiplication of two number is : " << num1 * num2 ;
        
    }
    return 0;
}
