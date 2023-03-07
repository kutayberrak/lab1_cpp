#include <iostream>
#include <string>
using namespace std;
int main(){
    // QUESTION 1
    string name,id;
    cout<<"What is your name? ";
    cin>>name;
    cout<<"Hello "+name<<endl;
    cout<<"What is your student id? ";
    cin>>id;
    cout<<"Your id is: "+id<<endl<<endl;

    // QUESTION 2
    int var1, var2,sum,diff,prod;
    cout<<"Enter first variable: ";
    cin>> var1;
    cout<<"Enter second variable: ";
    cin>> var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;
    cout<<"Variables are "<<var1<<", "<<var2<<endl;
    cout<<"Summation: "<<sum<<endl;
    cout<<"Difference: "<<diff<<endl;
    cout<<"Multiplication: "<<prod<<endl<<endl;

    // QUESTION 3
    string name1;
    int lab,midterm,final;
    float avarage;
    cout<<"Enter student's name: ";
    cin>>name1;
    cout<<"Enter lab grade: ";
    cin>>lab;
    cout<<"Enter midterm grade: ";
    cin>>midterm;
    cout<<"Enter final grade: ";
    cin>>final;
    cout<<"Name: "<<name1<<endl;
    cout<<"Lab: "<<lab<<endl;
    cout<<"Midterm: "<<midterm<<endl;
    cout<<"Final: "<<final<<endl;
    avarage = (lab*0.25)+(midterm*0.35)+(final*0.40);
    cout<<"Last Score: "<<avarage<<endl<<endl;

    // QUESTION 4
    cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"**"<<endl<<"*";
    return 0;
}