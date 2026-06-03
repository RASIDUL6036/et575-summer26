/*
Md Rasidul 
June 2, 2026
Lab 6B: AI Assistant Code Testing
AI Assistant 2: Gemini
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
string new_word;

cout << "Enter one word: ";
cin >> new_word;

cout << "Original word: " << new_word << endl;

cout << "Fourth character: " << new_word.at(3) << endl;

int word_length = new_word.length();
cout << "Word length: " << word_length << endl;

new_word.replace(1, 3, "-- $ --");
cout << "Word after replace: " << new_word << endl;

new_word.erase(new_word.length() - 2, 2);
cout << "Word after erase: " << new_word << endl;

return 0;
}

/*
--- AI Assistant Used: Gemini ---
Q1) Was the code correct?
Yes. The program works correctly for a word that has at least 4 characters. It completes all the required string method steps.

Q2) Was it readable and properly commented?
Yes. The code is readable because it uses a clear variable name like new_word and word_length. It does not have many comments, but the output messages explain what is happening.

Q3) Were you able to explain each line of code?
Yes. I understand each line. The program stores a word, prints the 4th character using at(3), finds the length, replaces characters, and erases two characters from the end.

Q4) Did it use the same programming concepts we learned in class?
Yes. It used string methods from class, including at(), length(), replace(), and erase(). It also used cin and cout. The at() method was also shown in Lab 5.

Q5) Terminal Output:
Enter one word: Computer
Original word: Computer
Fourth character: p
Word length: 8
Word after replace: C-- $ --uter
Word after erase: C-- $ --ut
*/