/* 1. Write a program to print the number from 1 to 100, but replace 
multiples of 3 with "fizz" and multiples of 5 with "Buzz". */
 
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
              std::cout << "fizz" << endl;
        }
        else if(i%5==0){
            std::cout << "Buzz" << endl;
        }
        else{
             std::cout << i << endl;
        }
    }
    return 0;
}