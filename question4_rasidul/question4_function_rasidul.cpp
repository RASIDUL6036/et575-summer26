/*
Md Rasidul
june 14,2026
question 4:function
*/
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

const float PI = 3.14159;

// Function 1
int getradius(){
    int radius;

    do{
        cout<<"Enter a radius between 3 and 12: ";
        cin>>radius;
    }while(radius < 3 || radius > 12);

    return radius;
}

// Function 2
int getmultiplier(){
    return rand()%5 + 2;   // 2 to 6
}

// Function 3
float scaledvolume(int radius, int multiplier){
    float volume;

    volume = ((4.0/3.0) * PI * pow(radius,3)) * multiplier;

    return volume;
}

int main(){

    srand(time(0));

    int radius = getradius();

    int multiplier = getmultiplier();

    float volume = scaledvolume(radius, multiplier);

    cout<<"Radius = "<<radius<<endl;
    cout<<"Multiplier = "<<multiplier<<endl;
    cout<<"Scaled Volume = "<<volume<<endl;

    return 0;
}