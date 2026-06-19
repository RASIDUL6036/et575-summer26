/*
Md Rasidul 
June 18, 2026
lab 18, console failure and file streaming
*/
#include<iostream>
#include "lab18_function_rasidul.cpp"

using namespace std;

int main(){

    cout<<"\n---- example 1: console failure test"<<endl;
    checknumber();

    cout<<"\n---- example 2: console failure test"<<endl;
    float n = validatenumber();
    cout<<n<<endl;

    cout<<"\n---- example 3: read file"<<endl;
    iofiles();

    cout<<"\n---- example 4: write file"<<endl;
    writefile();

    cout<<"\n---- example 5: append data into a file"<<endl;
    string filename = "outputfile.txt";
    appendfile(filename);

    cout<<"\n---- Lab Exercise 1"<<endl;
    int num1 = 12, num2 = 5;
    cout<<"Result = "<<operation(num1, num2)<<endl;

    cout<<"\n---- Lab Exercise 2"<<endl;
    createfile();
    appendmessage("This is appended message.\n");
    overwritefile("newfile.txt", "This is new overwritten file.\n");

    return 0;
}