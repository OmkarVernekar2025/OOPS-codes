/*Write a c++ program to check whether a person is eligible for voting or not using exceptions if eligible then read the personal info
such as name and address  */

#include<iostream>
using namespace std;
void voting(int age)
{
    string name,address;
    if (age<18)
    {
        throw "Not eligible for voting";
    }
    cout<<"Eligible for voting"<<endl;
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter address :";
    cin>>address;

}
int main()
{
 int x;
 cout<<"Enter age :";
 cin>>x;

 try
 {
   voting(x);
   //cout<<"Eligible for voting as age is :"<<z<<endl;
   //cout<<name<<endl;
   //cout<<address<<endl;
 }
 catch(const char*msg)
 {
   cout<<"You are under age "<<msg<<endl;
 }
 return 0;
}
