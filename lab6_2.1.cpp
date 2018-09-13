//include library
#include<iostream>
using namespace std;
//define a fuction which takes two int parameters and adds them and returns to output
int sum(int a,int b){
                    int c=a+b;
return c;}

int main(){
          //define variables
          int a,b,y;
//ask user to assign values to the variables(arguements)
cout<<"Type your first no:";
cin>>a;
cout<<"Type your second number:";
cin>>b;
y=sum(a,b);//y=f(x)
cout<<"The sum of your numbers is:"<<y<<"\n";
//closing the function
return 0;
}
