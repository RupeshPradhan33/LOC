/* 2. Write a program that takes a number as input and
 checks wether it is positive,negative or zero. */
 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter an integer number:";
    cin >> n;
    if (n == 0){
        cout << "The number is zero" << endl;

    }
    else if (n < 0){
        cout << "The number is Negative" << endl;
    }
    else {
        cout << "The number is Positive" << endl;
    }
    return 0;

}