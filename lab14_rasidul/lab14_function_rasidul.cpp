/*
Md Rasidul
June 2026
Lab Experiment: Function calling function
*/

#include<iostream>
using namespace std;

int inputMarks(){
    int mark;

    cout<<"Enter marks: ";
    cin>>mark;

    while(mark < 0 || mark > 100){
        cout<<"Invalid marks. Enter marks again: ";
        cin>>mark;
    }

    return mark;
}

int totalMarks(int m1, int m2, int m3){
    return m1 + m2 + m3;
}

float calculatePercentage(int m1, int m2, int m3){
    return (totalMarks(m1, m2, m3) / 300.0) * 100;
}

char determineGrade(float percentage){
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 80)
        return 'B';
    else if(percentage >= 70)
        return 'C';
    else if(percentage >= 60)
        return 'D';
    else
        return 'F';
}

void displayResult(int m1, int m2, int m3, char grade){
    cout<<"With marks "<<m1<<", "<<m2<<", "<<m3<<", the GRADE is "<<grade<<endl;
}

int main(){
    int m1, m2, m3;
    float percentage;
    char grade;

    m1 = inputMarks();
    m2 = inputMarks();
    m3 = inputMarks();

    percentage = calculatePercentage(m1, m2, m3);
    grade = determineGrade(percentage);

    cout<<"Percentage = "<<percentage<<endl;
    displayResult(m1, m2, m3, grade);

    return 0;
}