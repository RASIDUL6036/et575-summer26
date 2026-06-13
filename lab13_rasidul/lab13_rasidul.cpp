/*
Md Rasidul
June 10, 2026
lab 13: introduction to function
*/

#include<iostream>
#include<string>
#include "lab13_function_rasidul.cpp"

using namespace std;

int main(){
    cout<<"\n ---- example 1: void function "<<endl;
    printhi();
    printhi();
    printhi();

    cout<<"\n ---- example 2: void function with arguments "<<endl;
    greeting("Peter");

    string user = "Annie";
    greeting(user);

    cout<<"\n------ example 3: function that returns a value "<<endl;
    int x = dbnumber(6);
    cout<<x<<endl;

    cout<<"\n------ example 4: function that returns the area of a rectangle "<<endl;
    float a = arearectangle(2.5, 2);
    cout<<"Area rectangle = "<<a<<endl;

    cout<<"\n------ example 5: function with alternative return value ----"<<endl;
    string r = checknumber(0);
    cout<<r<<endl;

    cout<<"\n------ example 6: composition of functions ----"<<endl;
    int side = positivenumber();
    int asquare = areasquare(side);
    cout<<"Area of square = "<<asquare<<endl;

    cout<<"\n------ example 7: function calling function ----"<<endl;
cout<<tripleaddition()<<endl;


    cout<<"\n------ lab exercise ----"<<endl;
    int number = collectnumber();

    cout<<"Numbers from "<<number<<" up to 15: ";
    printnumbers(number);

    printresult(number);

    return 0;
}