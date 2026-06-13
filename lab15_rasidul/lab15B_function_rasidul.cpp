/*
Md Rasidul
June 12,2026
lab 15:recursive function, built-function
*/
#include<iostream>

using namespace std;

// example 1: recursive function
// function that calls itself during the execution of the program

void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
}

/*
function    |   int n   |   if(n==1)   |             else
iteration   |           |              |   cout<<(n*2)   |   cheers(n-1)
---------------------------------------------------------------------------
    1       |   n=3     |   false      |   cout<<(3*2)=6 |   cheers(3-1=2)
---------------------------------------------------------------------------
    2       |   n=2     |   false      |   cout<<(2*2)=4 |   cheers(2-1=1)
---------------------------------------------------------------------------
    3       |   n=1     |   true       |   cout<<"STOP"
*/

// example 2: recursive function to find the summation of a number
// for example, summation of 5, 5+4+3+2+1+0 = 15

int summation(int n){
    // recursive case
    if(n != 0){
        return (summation(n-1) + n);
    }
    // base case
    else{
        return 0;
    }
}

// example 3: use recursive function to validate a number
// use recursive case to recollect a number if it is not positive

int getpositive(){
    int num;

    cout<<"Enter a number ";
    cin>>num;

    // base case
    if(num>0){
        return num;
    }
    // recursive case
    else
        return getpositive();
        
}

// example 4: built-in function
// program to calculate the hypotenusa of a right triangle
// function to calculate the the hypotenuse
#include<cmath>

float hypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2,2));
}

// function to print result
void printresult(int side1, int side2, float hyp){
    cout<<"The hypotenusa of a right triangle with sides "
        <<side1<<" and "<<side2<<" is "<<hyp<<endl;
    return;
}

// example 5: random numbers
#include<cstdlib>
#include<time.h>



void randomnumber(){
    srand(time(0));
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
}


// example 6: random number between -5 and 10, inclusive
int random_neg5_10(){
    srand(time(0));
    return (-5 + rand()%16);
}
// example 7: function calling function

int addition(int a, int b){
    return a+b;
}

int tripleaddition(){
    return 3*(addition(2,3));
}

// Exercise A
// global constant variable
const float gravity = 9.8;

// random number function
// generates random number between 1 and 100 inclusive

int randomtime(){
    int num = rand()%100 + 1;
    return num;
}

// falling distance function
// distance = 0.5 * gravity * time^2

float fallingdistance(int time){
    float distance = 0.5 * gravity * pow(time, 2);
    return distance;
}

// output function

void output(int time, float distance){
    cout<<"The falling distance in "<<time<<" seconds is "
        <<distance<<" meters."<<endl;
}