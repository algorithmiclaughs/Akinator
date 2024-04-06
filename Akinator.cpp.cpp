#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;
int main(){

int a;
string b;

cout<<">>Whats your name?";
sleep(1);
cout<<"\n>>";
getline(cin,b);
sleep(2);
cout<<"\nGuessing...";
sleep(5);
cout<<"\nhmm.....";
sleep(5);
cout<<"\nIt's though.....";
sleep(5);
cout<<"\nyour name is >> "<<b;
cin>>a;
return 0;
}
