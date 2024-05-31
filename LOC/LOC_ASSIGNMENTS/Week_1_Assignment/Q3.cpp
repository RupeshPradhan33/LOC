/* 3. Write a program that takes a number as input and prints the sum of its 
digits using a do-while loop. */

 
#include <iostream>
using namespace std;
int main(){
    int n, s = 0 ;
    cout << "Enter a positive number: ";
    cin >> n;
    do {
        s = s + n % 10;
        n = n / 10;

    }while (n > 0);
    cout << "Sum of a digit of a numbers is "<< s << endl ;

    return 0;
}
