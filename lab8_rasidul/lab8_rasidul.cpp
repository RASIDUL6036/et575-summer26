/*
Md Rasidul Islam
Lab 8: Temperature Converter
Getting Help from AI to Build a Temperature Converter
*/

#include <iostream>
#include <iomanip>    // For std :: setprecision

using namespace std;

// function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius){
return (1.8 * celsius) + 32;
}

// function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit){
return (5.0 / 9.0) * (fahrenheit - 32);
}

// function to convert Celsius to Kelvin
float celsiusToKelvin(float celsius){
return celsius + 273.15;
}

// function to convert Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit){
return (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
} 
int main () {
cout << "\n ----- Lab 8: Temperature Converter -----" << endl;

// declare variables
int choice = 0;
float temperature = 0;
float result = 0;

// display menu
cout << "\nChoose conversion type:" << endl;
cout << "1. Celsius to Fahrenheit" << endl;
cout << "2. Fahrenheit to Celsius" << endl;
cout << "3. Celsius to Kelvin" << endl;
cout << "4. Fahrenheit to Kelvin" << endl;

// collect choice
cout << "\nEnter choice: ";
cin >> choice;

// display result with one decimal place
cout << fixed << setprecision(1);

// conditional statement
if(choice == 1){
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    result = celsiusToFahrenheit(temperature);

    cout << temperature << " C is " << result << " F" << endl;
}
else if(choice == 2){
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;

    result = fahrenheitToCelsius(temperature);

    cout << temperature << " F is " << result << " C" << endl;
}
else if(choice == 3){
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    result = celsiusToKelvin(temperature);

    cout << temperature << " C is " << result << " K" << endl;
}
else if(choice == 4){
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;

    result = fahrenheitToKelvin(temperature);

    cout << temperature << " F is " << result << " K" << endl;
}
else{
    cout << "Invalid choice!" << endl;
}

return 0;

}

/*
Review and Understand Questions

Does the AI code use C++ concepts you’re unfamiliar with? Explain.
    The AI code uses functions, if-else statements, user input, and output formatting. I understand input and output, but functions and setprecision were newer for me. The functions help separate each conversion formula.
Are there any issues or improvements you noticed? Explain.
    One improvement was adding a menu so the user can choose different temperature conversions. Another improvement was using fixed and setprecision(1) so the result prints with one decimal place, like the assignment asks.
What methods did you use to test if the AI code was working as it should? Explain.
    I tested the program using known values. For example, 20 Celsius should be 68 Fahrenheit, 98.6 Fahrenheit should be 37 Celsius, and 0 Celsius should be 273.15 Kelvin. I checked the output to make sure the formulas were correct.
    */