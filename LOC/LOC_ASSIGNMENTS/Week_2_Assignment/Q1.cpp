/* Q1. Write a c++ program to count the number of occurrences of a number in an array using function. */

#include <iostream>
using namespace std;

int a[5];

 void occurrence(int a[5]) {
    int num, occ=0;
    cout << endl <<  "Enter the number, to check number of occurrence :";
    cin >> num;
    for( int i=0; i<5; i++){
        if ( num == a[i]){
            occ ++;
        }
    }
    cout << "Number of occurrence : " << occ;
    }


int main(){
    cout << "Enter array elements :" << endl;
    for (int i=0; i<5; i++){
        cin >> a[i] ;

    }

    occurrence(a);

    return 0;

}
