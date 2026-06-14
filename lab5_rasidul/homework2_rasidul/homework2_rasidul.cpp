/*
Md Rasidul Islam
June 12,2026
Homework 2: Loops mechanism
*/

#include<iostream>
using namespace std;

int dimension = 10;

int main(){

    cout<<"\n----- Question 1 -----"<<endl;

    int number;

    do{
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>number;

        if(number < 10){
            cout<<number<<" is invalid. Enter a number greater than or equal to 10: "<<endl;
        }

    }while(number < 10);

    cout<<number<<" is a valid number!"<<endl;


    cout<<"\n----- Question 2 -----"<<endl;

    int num1, num2;
    int minimum, maximum;

    cout<<"Enter number 1: ";
    cin>>num1;

    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 < num2){
        minimum = num1;
        maximum = num2;
    }
    else{
        minimum = num2;
        maximum = num1;
    }

    cout<<"RESULT = ";

    while(minimum <= maximum){
        cout<<minimum<<" ";
        minimum++;
    }

    cout<<endl;


    cout<<"\n----- Question 3 -----"<<endl;

    for(int row = 1; row <= dimension; row++){

        for(int col = 1; col <= dimension; col++){
 // simple heart shape using % symbol 
            if((row == 3 && (col == 4 || col == 6)) ||
               (row == 4 && (col == 3 || col == 4 || col == 6 || col == 7)) ||
               (row == 5 && (col >= 3 && col <= 7)) ||
               (row == 6 && (col >= 4 && col <= 6)) ||
               (row == 7 && col == 5)){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }

        cout<<endl;
    }

    return 0;
}