/*
Md Rasidul
june 9
Lab 10 :loop function
*/
#include <iostream>

using namespace std;

int main(){

    cout<<"\n ---- example 1: for loop as counter"<<endl;

    /*
    // for loop have three main statement
    // for(initial action; boolean expression; update action)
    */

    // use a for loop to print Hello 5 times
    int x;

    for(x = 1; x <= 5; x++){
        cout<<"Hello "<<x<<endl;
    }

    cout<<"End of for loop value of x = "<<x<<endl;


    cout<<"\n ---- example 2: for loop as a counter with different steps"<<endl;

    // print from 1 to 10 Step 2
    for(int x = 1; x<=9; x+=2){
        cout<<x<<"\t";
    }


    cout<<"\n ---- example 3: for loop as a decrement counter with different steps"<<endl;

    // print from 10 to -10 step 3 --> 10 7 4 1 -2 -5 -8
    for(int x = 10; x >= -10; x-=3 ){
        cout<<x<<"\t";
    }

    cout<<endl;


    cout<<"\n ---- example 4: for loop with conditional statement"<<endl;

    int counter = 0;
    int sumpositive = 0;

    for(int x = -20; x<=20; x+=4){

        cout<<x<<"\t";

        if(x%5==0 && x!=0)
            counter++;

        if(x>0)
            sumpositive += x;
    }

    cout<<endl;
    cout<<"numbers that are multipled of 5 = "<<counter<<endl;
    cout<<"Sum of positive numbers = "<<sumpositive<<endl;


    cout<<"\n ---- example 5; while loop as a counter"<<endl;

    // while loop to print from 1 to 5, inclusive

    int n = 1;

    while(n <= 5){
        cout<<n<<"\t";
        n++;
    }

    cout<<endl;


    n = 1;

    while(n++ <= 5){
        cout<<n<<"\t";
    }


    n = 1;

    while(++n <= 5){
        cout<<n<<"\t";
    }


    cout<<"\n ---- example 6: while loop to validate an input"<<endl;

    // while loop to recollect a number
    // accept numbers between 1 and 9

    int number = 0;

    cout<<"Enter a number: ";
    cin>>number;

    while(number < 1 || number > 9){
        cout<<"Enter a new number between 1 and 9 ";
        cin>>number;
    }

    cout<<"Collected number = "<<number<<endl;


    cout<<"\n --------- EXERCISE 1 ---------"<<endl;

    // count down from 21 to -21 by 5
    // Count how many numbers are divisible by 2

    int count = 0;

    for(int x = 21; x >= -21; x -= 5){

        cout<<x<<"\t";

        if(x % 2 == 0){
            count++;
        }
    }

    cout<<endl;
    cout<<"Numbers divisible by 2 = "<<count<<endl;


    cout<<"\n --------- EXERCISE 2 ---------"<<endl;

    // Ask user for a starting number
    // Count up to 30 by 4

    int start;

    cout<<"Enter starting number: ";
    cin>>start;

    for(int x = start; x <= 30; x += 4){
        cout<<x<<"\t";
    }

    cout<<endl;

    return 0;
}