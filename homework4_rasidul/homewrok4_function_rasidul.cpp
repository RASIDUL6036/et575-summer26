/*
Md Rasidul 
June 21, 2026
Homework 4 : Lottery Application 
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int ARRAYSIZE = 5;

// function 1
void winningDigits(int arr[]){

    srand(time(0));

    for(int i = 0; i<ARRAYSIZE; i++){
        arr[i] = rand()%19 + 1;
    }
}

// function 2
void userTicket(int arr[]){

    for(int i = 0; i<ARRAYSIZE; i++){

        do{
            cout<<"Enter number "<<i+1<<" (1 - 19): ";
            cin>>arr[i];

        }while(arr[i] < 1 || arr[i] > 19);
    }
}

// function 3
void checkRepeatWinning(int arr[]){

    for(int i = 0; i<ARRAYSIZE; i++){

        for(int j = i+1; j<ARRAYSIZE; j++){

            while(arr[i] == arr[j]){
                arr[j] = rand()%19 + 1;
            }
        }
    }
}

void checkRepeatTicket(int arr[]){

    for(int i = 0; i<ARRAYSIZE; i++){

        for(int j = i+1; j<ARRAYSIZE; j++){

            while(arr[i] == arr[j]){

                cout<<"Repeated number found. Enter another number: ";
                cin>>arr[j];

                while(arr[j] < 1 || arr[j] > 19){
                    cout<<"Enter another number (1 - 19): ";
                    cin>>arr[j];
                }
            }
        }
    }
}

// function 4
int checkWinner(int win[], int ticket[]){

    int count = 0;

    for(int i = 0; i<ARRAYSIZE; i++){
    for(int j=0 ;j<ARRAYSIZE; j++){

        if(win[i] == ticket[j]){
            count++;
        }
    }
    }
    return count;
}

// function 5
void printResult(int win[], int ticket[], int match){

    cout<<"\nWinning digits = ";

    for(int i = 0; i<ARRAYSIZE; i++){
        cout<<"\t"<<win[i];
    }

    cout<<"\nUser ticket = ";

    for(int i = 0; i<ARRAYSIZE; i++){
        cout<<"\t"<<ticket[i];
    }

    cout<<"\nMatch numbers = "<<match<<endl;
}