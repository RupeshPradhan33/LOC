/* 10. Write a C++ program to find the total number of alphabets , digits and
special characters in a string.
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int Alphabets=0,num=0,special=0,space=0;
    cout<<"Enter the string \n";
    gets(str); 
    for(i=0; str[i] != '\0'; i++){
        
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {  
                Alphabets++;
    }else if(str[i]>='0' && str[i]<='9') { 
                num++;
    }
    else if(str[i]==' '){
                space++;
    }
    else{
        special++;
    }
    }
    cout<<"\nAlphabet letters: "<<Alphabets;
    cout<<"\nnumbers: "<<num;
    cout<<"\nSpace: "<<space;
    cout<<"\nSpecial characters: "<<special;
    getch();
    return 0;
}