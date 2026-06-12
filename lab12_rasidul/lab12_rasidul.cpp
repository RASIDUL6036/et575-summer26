/*
Md Rasidul
June 11, 2026
lab 12 : nested loops
*/

#include<iostream>
using namespace std;

int main(){
    cout << "\n---- example 1: nested while loop ----- " << endl;
    // one run of the outer loop will have one complete cycle of the inner loop

    int i = 0;

    while(i++ < 3){
        cout << "OUTER loop = " << i << endl;

        int j = 0;
        while(j++ < 5){
            cout << "\t" << j;
        }
        cout << endl;
    }

    cout << "\n---- example 2: nested for loop ----- " << endl;
    // cinema seats arrangment
    // row and seats per row (column)

    int row = 0, seats = 0;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of seats per row: ";
    cin >> seats;

    for(int r = 1; r < row; r++){
        for(int c = 1; c < seats; c++){
            cout << "Row " << r << " seat " << c << "\t";
        }
        cout << endl;
    }

    cout << "\n---- example 3: graphing using nested loops ----- " << endl;

const int GRAPHSIZE = 9;

for(int row = 1; row <= GRAPHSIZE; row++){
    for(int col = 1; col <= GRAPHSIZE; col++){

        if(row == 5 || col == 5){
            cout << "X ";
        }
        else{
            cout << ". ";
        }
    }

    cout << endl;

}

cout << "\n---- example 4: graphing H using nested loops ----- " << endl;

int dimension = 10;

for(int row = 1; row <= dimension; row++){
    for(int col = 1; col <= dimension; col++){

        if((row >= 3 && row <= 8 && col >= 3 && col <= 4) ||
           (row >= 3 && row <= 8 && col >= 7 && col <= 8) ||
           (row >= 5 && row <= 6 && col >= 3 && col <= 8))
            cout << " % ";
        else
            cout << " . ";
    }

    cout << endl;
}

  cout << "\n---- LAB EXERCISE A: number guessing game ----- " << endl;

// create a number guessing game
// user guesses number between 1 and 10

const int GUESS = 5;
int number = 0;

do{
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    // validate the entered number
    while(number < 1 || number > 10){
        cout << "Invalid number. Please enter number between 1 and 10: ";
        cin >> number;
    }

    if(number > GUESS){
        cout << "The entered number is high." << endl;
    }
    else if(number < GUESS){
        cout << "The entered number is low." << endl;
    }
    else{
        cout << "Correct number!" << endl;
    }

}while(number != GUESS);


cout << "\n---- LAB EXERCISE B: graphing using nested loops ----- " << endl;

// generate the following graph
// the size of the graph is a 10-by-10 graph

const int SIZE = 10;

for(int row = 1; row <= SIZE; row++){
    for(int col = 1; col <= SIZE; col++){

        if((row >= 3 && row <= 8 && col >= 3 && col <= 4) ||
           (row >= 3 && row <= 8 && col >= 7 && col <= 8) ||
           (row >= 7 && row <= 10 && col >= 5 && col <= 6)){
            cout << " % ";
        }
        else{
            cout << " . ";
        }
    }

    cout << endl;
}

    return 0;
}