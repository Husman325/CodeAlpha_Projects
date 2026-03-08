#include<iostream>
#include<fstream>
using namespace std;

int main(){

string user,pass;

cout<<"Register username:";
cin>>user;

cout<<"Register password:";
cin>>pass;

ofstream file("users.txt");
file<<user<<" "<<pass;
file.close();

string u,p;

cout<<"Login username:";
cin>>u;

cout<<"Login password:";
cin>>p;

ifstream file2("users.txt");
string su,sp;
file2>>su>>sp;

if(u==su && p==sp)
cout<<"Login Successful";
else
cout<<"Invalid login";

}
