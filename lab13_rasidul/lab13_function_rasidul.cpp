/*
Md Rasidul
June 10, 2026
lab 13: introduction to function
*/
#include<iostream>
#include<string>

using namespace std;

// example 1: void function.
// void function is a function that doesn't return a value

void printhi(){
    cout<<"Hello Function!"<<endl;
    return; // for a void function, the return is nothing
}

// example 2: void function with parameter
// function that prints a name with a message
// the name is passed to the function
void greeting(string username){
    cout<<"Good morning "<<username<<endl;
}

// example 3: function that returns a value
// returns the double of a number (integer).
// the number is passed to the function as argument
int dbnumber(int n){
    return n*2;
}

// example 4: function that returns the area of a rectangle
// returning value is a float. area rectangle = width * lenght
float arearectangle(float width, float lenght){
    return width * lenght;
}

// example 5: function that checks if a is positive, negative, or zero
string checknumber(int number){
    if(number>0)
        return "positive";
    else if (number < 0)
        return "negative";
    else
        return "zero";
}

// example 6: composition of functions
// function 1: collect and return a positive
// validate that the number is positive before returning it
int positivenumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // recollect n if n is not a positive number
    while(n<=0){
        cout<<"Error! Enter a positive number: ";
        cin>>n;
    }

    return n;
}

// function 2: calculate and return the area of a square
int areasquare(int side){
    int area = side * side;
    return area;
}
// example 7: function calling function
// function 1: returns the sum of two numbers
int addition(int a, int b){
    return a+b;
}

// function 2: returns the triple of the sum of two numbers
int tripleaddition(){
    return 3*(addition(2,3)); // function calling function
}

                                        // lab exercise
             // function 1: collect an integer between 1 and 10 inclusive
int collectnumber(){
    int n;
    cout<<"Enter an integer between 1 and 10: ";
    cin>>n;

    while(n<1 || n>10){
        cout<<"Invalid input! Enter an integer between 1 and 10: ";
        cin>>n;
    }

    return n;
}

// function 2: print all integers from collected number up to 15 inclusive
void printnumbers(int n){
    for(int i=n; i<=15; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

// function 3: count numbers that are not multiples of 3
int countnotmultiple3(int n){
    int count = 0;

    for(int i=n; i<=15; i++){
        if(i%3 != 0){
            count++;
        }
    }

    return count;
}

// function 4: print the final result
void printresult(int n){
    int count = countnotmultiple3(n);

    cout<<"From "<<n<<" up to 15, there are "<<count
        <<" number/s that are not multiplied by 3."<<endl;
}