/*
Md Rasidul 
June 16, 2026
Lab 16 function file
*/

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

// exercise a
// pointer vs reference video

void exercisea(){

    int* ptr;              // declare pointer variable
    int var = 7;           // declare integer variable var
    int foo = 21;          // declare integer variable foo

    ptr = &var;            // ptr stores address of var
    ptr = &foo;            // ptr stores address of foo

    int& ref = var;        // ref is reference of var

    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"var = "<<var<<endl;
    cout<<"foo = "<<foo<<endl;
    cout<<"ref = "<<ref<<endl;
}

// example 1: intro to pointer

void intropointer(){

    // declare variable
    int num = 12;
    char sym ='#';
    string n = "Peter";

    // declare pointer without initial values
    int* ptrint;
    char* ptrchar;
    string* ptrstring;

    // check a pointer info
    cout<<ptrint<<endl;

    // initialize a pointer with a location of a variable
    ptrint = &num;
    ptrchar = &sym;
    ptrstring = &n;

    // print pointer
    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;

    // use * to access the value in the pointer location
    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;
}

// example 2

void a(string v){
    cout<<"A = "<<v<<endl;
    v = "updated A";
}

void b(string& v){
    cout<<"B = "<<v<<endl;
    v = "updated B";
}

void c(string* v){
    cout<<"C = "<<*v<<endl;
}

// example 3
void introarray(){

    // declare an array with size 3
    int scores[3];

    // use squared brackets [] to access to each element in the array
    // each element is organized by the index number starting from zero
    // left-most
    cout<<scores<<endl;
    cout<<"first element = "<<scores[0]<<endl;

    // assign values to each element in an array
    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout<<"first element = "<<scores[0]<<endl;

    // initializing an array
    char symbols[5] = {'$', '#', '@', '!', 'G'};
    cout<<"3rd symbol = "<<symbols[2]<<endl;

    // the size of an array in a square brackets [], can be ignored
    // if the array with initial values
    string names[] = {"Peter", "Annie"};
    cout<<"2nd name "<<names[1]<<endl;

    // loop through each element in an array symbol
    for(int i = 0; i<5; i++){
        cout<<symbols[i]<<endl;
    }

    // use loop to find the average of scores array
    float avgscore = 0, sumscores = 0;

    for(int i = 0; i<3; i++){
        sumscores += scores[i];
    }

    avgscore = sumscores/3.0;

    cout<<"The average score is = "<<avgscore<<endl;
}

// example 4: passing an array into a function
// an array can be declared as parameter using []
// bracket --> int arrayname[]
// or you can pass the array into pointer --> int *arrayname
// for example, we are going to define a function to
// print each element in an array

void printelements(int sizearray, int arr[]){

    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }

    cout<<endl;
}

// update values in an array

void updatearray(int sizearray, int arr[]){

    for(int i = 0; i<sizearray; i++){
        arr[i] += 1;
    }
}

// count adult age 21+

int countadult(int sizearray, int arr[]){

    int count = 0;

    for(int i = 0; i<sizearray; i++){

        if(arr[i] >= 21){
            count++;
        }
    }

    return count;
}

// exercise b
// fill array function
// fill an array of size 10 with random integers between 1 and 9 inclusive

void fillarray(int arr[], int sizearray){

    srand(time(0));

    for(int i = 0; i<sizearray; i++){
        arr[i] = rand()%9 + 1;
    }
}

// count even numbers function
// count and return the number of even numbers in the array

int counteven(int arr[], int sizearray){

    int count = 0;

    for(int i = 0; i<sizearray; i++){

        if(arr[i] % 2 == 0){
            count++;
        }
    }

    return count;
}