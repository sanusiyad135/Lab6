//include library
#include<iostream>
using namespace std;
//define a function to find out sum of two numbers
int sum(int a,int b){
int c=a+b;
return c;}
//we are going to define two functions which will find out maximum between two functions and returns to output
int maximum(int a,int b){
                        if(a>b)
                        {return a;}
                        else
                        return b;}

//define function to minimum
int minimum(int a,int b){
                        if(a>b)
                        {return b;}
                        else
                        return a;}
//usage of function
int main(){
           //define variables
           int a,b,x,y;{
                      //ask user to use a function
                      cout<<"We have three functions sum,maximum&difference,among them which function you want to use:";
cout<<"if you want sum, press 1"<<"\n"<<"if you want maximum,press 2"<<"\n"<<"if you want minimum, press 3"<<"\n";
cin>>x;
if(x==1){
cout<<"enter your first number:";cin>>a;
cout<<"enter the second number:";cin>>b;
y=sum(a,b);}
cout<<"sum of the numbers is:"<<y;
if(x==2){
cout<<"enter your first number:";cin>>a;
cout<<"enter the second number:";cin>>b;
y=maximum(a,b);
cout<<"The maximum between the numbers is:"<<y;}
if(x==3){
cout<<"enter your first number:";cin>>a;
cout<<"enter the second number:";cin>>b;
y=minimum(a,b);
cout<<"The minimum between the numbers is:"<<y;}}
//closing the function
return 0;
}
