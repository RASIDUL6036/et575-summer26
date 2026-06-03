/*
Md Rasidul Islam
June 2, 2026
Lab 6A: AI Assistant Code Testing
AI Assistant 1: ChatGPT
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Type a word: ";
    cin >> word;

    cout << "The 4th character is: " << word[3] << endl;
    cout << "The length of the word is: " << word.length() << " characters." << endl;

    word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << word << endl;

    word.erase(word.length() - 2, 2);
    cout << "After removing two characters from the end: " << word << endl;

    return 0;
}

/*
--- AI Assistant Used: ChatGPT ---
Q1) Was the code correct?
Yes. The code follows the Lab 5 exercise. It asks the user for a word, prints the 4th character, finds the length, replaces characters, and erases two characters from the end.

Q2) Was it readable and properly commented?
Yes. The code is readable because the variable names are simple and the steps are easy to follow. It has some comments, but more comments could make it better.

Q3) Were you able to explain each line of code?
Yes. I can explain the include files, string variable, cin, cout, length(), replace(), erase(), and return 0.

Q4) Did it use the same programming concepts we learned in class?
Yes. It used string indexing, length(), replace(), erase(), cin, cout, and basic C++ syntax. These are the same concepts from Lab 5.

Q5) Terminal Output:
Type a word: Computer
The 4th character is: p
The length of the word is: 8 characters.
After replacement: C-- $ --uter
After removing two characters from the end: C-- $ --ut
*/