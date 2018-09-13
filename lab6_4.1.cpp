//include library
#include<iostream>
using namespace std;
//we are going to define two functions which will find out minimum between two functions and returns to output
int minimum(int a,int b){
                        if(a>b)
                        {return b;}
                        else
                        return a;}
//now the functions are defined
//using this function for output
int main(){
           //define variables
           int a,b,y;
           //assign valuue to the variables
           cout<<"Enter your first no:"<<"\n";cin>>a;
           cout<<"Enter your second number:"<<"\n";cin>>b;
           //finding the maximum
           y=minimum(a,b);//y=f(x)
           cout<<"Minimum between your numbers is"<<y<<"\n";
//closing the function
return 0;
}
