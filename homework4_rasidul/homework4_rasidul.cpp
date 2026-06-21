/*
Md Rasidul Islam
June 21, 2026
Homework 4 : Lottery Application
*/

#include<iostream>
#include "homewrok4_function_rasidul.cpp"

using namespace std;

int main(){

    const int ARRAYSIZE = 5;

    int winning[ARRAYSIZE];
    int ticket[ARRAYSIZE];

    winningDigits(winning);

    userTicket(ticket);

    checkRepeatWinning(winning);

    checkRepeatTicket(ticket);

    int match = checkWinner(winning, ticket);

    printResult(winning, ticket, match);

    return 0;
}