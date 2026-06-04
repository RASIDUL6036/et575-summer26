/*
Md Rasidul
jun3
lab 7:control flow
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    cout << "\n ---- example 1: bool variable" << endl;
    // bool variable to check if a number is positive
    // declare variables
    int n;
    bool checkpositive; // bool values are 0(false) or 1(true)

    // collect number
    cout << "Enter a number: ";
    cin >> n;

    // check if a number is positive
    checkpositive = n > 0;

    // print results
    cout << "Is number " << n << " positive? " << checkpositive << endl;

    // update checkpositive
    checkpositive = 5;

    cout << "updated checkpositive = " << checkpositive << endl;

   

    cout<<"\n-----example 2 : if statement "<<endl;
    // check if n is zero
    int c = 10;
    if(n==0) {
        cout<<" n is zero!";
        c += 20;

    }
    cout<<"\t Updated c = " <<c<<endl;
    cout << "\n ---- example 3: if-else statement" << endl;
// if-else behaves as a ON/OFF switch
// check if a number is even or odd. Even numbers are
// divisible by 2, meaning that when the number is divided by
// 2, the remainder is 0.

if(n % 2 == 0){
    cout << n << " is an EVEN number" << endl;
}
else{
    cout << n << " is an ODD number" << endl;

}
cout << "\n ---- example 4: if-else statement" << endl;
/*
- Ultraviolet: less than 379 nm and greater than or equal to 10 nm
- Blue: 380 nm to 520 nm
- Green: 521 nm to 590 nm
- Red: 591 nm to 740 nm
- Infrared: more than 741 nm
- Any wavelength less than 10 nm is undefined.
*/

// declare variables
int wavelength = 0;
string  emittedlight= "";

// update wavelength
cout << "Enter a wavelength: ";
cin >> wavelength;

//multiway
if(wavelength<379 && wavelength>=10) { emittedlight = "Ul TRAVIOLET" ;}
cout << "\n ---- example 4: if-else statement" << endl;
/*
- Ultraviolet: less than 379 nm and greater than or equal to 10 nm
- Blue: 380 nm to 520 nm
- Green: 521 nm to 590 nm
- Red: 591 nm to 740 nm
- Infrared: more than 741 nm
- Any wavelength less than 10 nm is undefined.
*/


// update wavelength
cout << "Enter a wavelength (nm): ";
cin >> wavelength;

// multiway if-else
if(wavelength < 379 && wavelength >= 10){
    emittedlight = "ULTRAVIOLET";
}
else if(wavelength <= 520 && wavelength >= 380){
    emittedlight = "BLUE";
}
else if(wavelength <= 590 && wavelength >= 521){
    emittedlight = "GREEN";
}
else if(wavelength <= 740 && wavelength >= 591){
    emittedlight = "RED";
}
else if(wavelength > 741){
    emittedlight = "INFRARED";
}
else{
    emittedlight = "UNDEFINED";
}

// print result
cout << wavelength << " nm emits " << emittedlight << " light" << endl;


cout << "\n ----- example 5: conditional operator ---- " << endl;
// conditional operator: three operands --> condition ? expression1 (true) : expression2 (false)

/*
example 3)
if(n % 2 == 0){
    cout << n << " is an EVEN number" << endl;
}
else{
    cout << n << " is an ODD number" << endl;
}
*/

cout << n << ((n % 2 == 0) ? " is an EVEN number" : " is an ODD number") << endl;
cout << "\n ----- example 6: conditional operator ---- " << endl;
// check if n is greater than 10. if n is greater than 10, set the max value to n.
int max = 10;
bool checkmax = false;

// if-else
if (n > max) {
    checkmax = true;
}
else {
    checkmax = false;
}

// conditional operands to check if n is greater than max.
checkmax = n > max ? true : false;
cout<<" Is n greater than 10 ? = "<<checkmax<<endl;

cout << "\n----- example 7: nested conditional statement ----" << endl;

// check if a number, n, is positive (even or odd), negative, or zero
/*
// multiway statement

if (n > 0 && n % 2 == 0) {
    cout << "positive and even number" << endl;
}
else if (n > 0 && n % 2 != 0) {
    cout << "positive and odd number" << endl;
}
else if (n < 0) {
    cout << "negative" << endl;
}
else {
    cout << "zero" << endl;
}
*/

cout << "\n----- example 7: nested conditional statement ----" << endl;

// check if a number, n, is positive, negative, or zero
// nested if statement

if (n > 0) {
    // inner conditional statement
    if (n % 2 == 0)
        cout << "positive and even number" << endl;
    else
        cout << "positive and odd number" << endl;
}
else if (n < 0) {
    if (n % 2 == 0)
        cout << "negative and even number" << endl;
    else
        cout << "negative and odd number" << endl;
}
else {
    cout << "zero" << endl;


cout<<"\n ----- LAB EXERCISE -----"<<endl;
    // declare variables
    float weight = 0;
    float shippingcost = 0;

    // Collect the weight
    cout<<"Enter the weight of the package (lbs): ";
    cin>>weight;

    // Determine shipping cost using multiway if-else
    if(weight <= 0){
        shippingcost = 0;
    }
    else if(weight <= 2){
        shippingcost = 5.00;
    }
    else if(weight <= 5){
        shippingcost = 8.20;
    }
    else if(weight <= 10){
        shippingcost = 10.25;
    }
    else{
        shippingcost = 12.50;
    }

    // Print result
    cout<<"A package of weight "<<weight<<" costs $"<<shippingcost<<endl;

    return 0;
}
