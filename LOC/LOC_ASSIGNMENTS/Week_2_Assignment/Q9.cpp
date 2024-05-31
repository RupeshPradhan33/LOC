/* 9. Write a C++ program to print the following pattern using loop
 * * * * *
 * * * *
 * * *
 * *
 *  
 * */


 
#include <iostream>
using namespace std;

int main() {

    int rows = 5;

    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}