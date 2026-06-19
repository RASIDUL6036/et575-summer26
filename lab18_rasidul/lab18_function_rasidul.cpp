/*
Md Rasidul
june 18,2026
lab18,console filure and file
*/

#include<iostream>
#include<fstream>
using namespace std;

// example 1: console failure
void checknumber(){
int num;

cout<<"Enter a number: ";
cin>>num;

if(cin.fail())
cout<<"Error! mismatched data type!"<<endl;
else
cout<<"Entered number = "<<num<<endl;

// reset the cin status
cin.clear();
cin.ignore(10000, '\n');

cout<<"--- END OF FUNCTION ---"<<endl;
}

// example 2: validate a data type
float validatenumber(){
float n;

do{
cout<<"Enter a number: ";
if(!(cin>>n)){
cout<<"Invalid data type!"<<endl;
cin.clear();
cin.ignore(10000, '\n');
}
else{
break;
}
}while(true);

return n;
}

// example 3: input and output files
void iofiles(){
// declare the objects to handle files
// input file object 'fin'
ifstream fin;
// output file object 'fout'
ofstream fout;

// read file 'samplefile.txt'
// use the 'fin' object along with the 'open' method to open the txt file
fin.open("samplefile.txt");

// declare a variable 'line' to temporary store each line of 'samplefile.txt'
string line;

/*
    while loop to go through each line in the txt file.
    for each line, we are going to use the getline() method to read and hold each line of the txt file
    in variable 'line'
    */
int linecounter = 1;
while(getline(fin, line)){
cout<<"Line "<<linecounter<<" = \t"<<line<<endl;
linecounter++;
}

// close the file
fin.close();
}

// example 4: write file
// writing a file with an 'open' method, c++ will automatically
// create the file if it doesn't exist
// if the file exists, then c++ will overwrite file
void writefile(){
// output file object 'fout'
ofstream fout;

fout.open("outputfile.txt");

// to write in a file, we use the output file object fout
fout<<"Good Morning!"<<endl;
for(int n = 3; n>0; n--){
fout<<n<<endl;
}
fout<<"End of file"<<endl;

fout.close();
}

// example 5: appending data to an existing file
// fout.open() we need to add the argument ios::app
void appendfile(string filename){
// output file object 'fout'
ofstream fout;

fout.open(filename, ios::app);

fout<<"Student's full name"<<endl;

fout.close();
}

// LAB EXERCISE 1

int operation(int n1, int n2){
char symbol;
int result;
bool valid = false;

do{
cout<<"Enter operation symbol +, -, *, /, %: ";
cin>>symbol;
if(cin.fail()){
cout<<"Invalid data type!"<<endl;
cin.clear();
cin.ignore(10000, '\n');
}
else if(symbol == '+'){
result = n1 + n2;
valid = true;
}
else if(symbol == '-'){
result = n1 - n2;
valid = true;
}
else if(symbol == '*'){
result = n1 * n2;
valid = true;
}
else if(symbol == '/'){
result = n1 / n2;
valid = true;
}
else if(symbol == '%'){
result = n1 % n2;
valid = true;
}
else{
cout<<"Invalid symbol!"<<endl;
}

}while(!valid);

return result;
}

// LAB EXERCISE 2

void createfile(){
ofstream fout;

fout.open("data_user.txt");

fout<<"This is my output file - Md Rasidul Islam.\n";

fout.close();
}

void appendmessage(string message){
ofstream fout;

fout.open("data_user.txt", ios::app);

fout<<message;

fout.close();
}

void overwritefile(string filename, string text){
ofstream fout;

fout.open(filename);

fout<<text;

fout.close();
}