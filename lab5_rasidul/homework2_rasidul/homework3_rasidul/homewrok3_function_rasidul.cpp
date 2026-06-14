/*
Md Rasidul
June 12,2026
Homework 3: function
*/

// homework 3 —— question 1——-
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

// function 1
int rand_point(){
    return rand()%19 - 9;
}

// function 2 calculate 
double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

// function 3 
void print_result(int x1, int y1, int x2, int y2, double dist){
    cout<<fixed<<setprecision(2);
    cout<<"The distance of points ("
        <<x1<<","<<y1<<") and ("
        <<x2<<","<<y2<<") is = "
        <<dist<<endl;
}
// homework 3 function question 3 

bool inOrder(int a, int b, int c){

    return(a > b && b > c);
}
    
int main(){

    srand(time(0));

    int x1 = rand_point();

    int x2 = rand_point();

    int y1 = rand_point();

    int y2 = rand_point();

    double dist = distance(x1, y1, x2, y2);

    print_result(x1, y1, x2, y2, dist);

    int num1, num2, num3;

    cout<<"\nEnter three numbers: ";

    cin>>num1>>num2>>num3;

    if(inOrder(num1, num2, num3))

        cout<<"True - Numbers are in descending order."<<endl;

    else

        cout<<"False - Numbers are not in descending order."<<endl;

    return 0;
}
