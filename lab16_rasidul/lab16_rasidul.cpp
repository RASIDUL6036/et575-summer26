/*
Md Rasidul 
June 16, 2026
Lab 16: Pointer, Reference and Array
*/

#include <iostream>
#include "lab16_function_rasidul.cpp"

using namespace std;

int main()
{
    // exercise a

    cout<<"\n---- Exercise A: pointer and reference video ----"<<endl;
    exercisea();

    cout<<"\n---- example 1: intro to pointer ----"<<endl;
    intropointer();

    cout<<"\n---- example 2: checking different data ----"<<endl;
    string something = "Hello World!";

    a(something);
    cout<<something<<endl;

    b(something);
    cout<<something<<endl;

    c(&something);
    a(something);

    cout<<"\n---- example 3: intro to array ----"<<endl;
    introarray();

    cout<<"\n---- example 4: print each element in an array ----"<<endl;

    const int s = 4;
    int age[s] = {18,21};

    printelements(s, age);
    updatearray(s, age);
    printelements(s, age);

    int c = countadult(s, age);
    cout<<"Adult 21+ = "<<c<<endl;

    // exercise b

    cout<<"\n---- Exercise B ----"<<endl;

    const int SIZE = 10;
    int numbers[SIZE];

    fillarray(numbers, SIZE);

    cout<<"\nRandom numbers: ";
    for(int i=0; i<SIZE; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<"\nEven numbers = "<<counteven(numbers, SIZE)<<endl;

    return 0;
}