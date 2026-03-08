#include<iostream>
using namespace std;

int main(){

int n;
float grade,credit;
float totalPoints=0,totalCredits=0;

cout<<"Enter number of courses: ";
cin>>n;

for(int i=1;i<=n;i++){

cout<<"Grade: ";
cin>>grade;

cout<<"Credit hours: ";
cin>>credit;

totalPoints+=grade*credit;
totalCredits+=credit;
}

cout<<"CGPA = "<<totalPoints/totalCredits;
}
