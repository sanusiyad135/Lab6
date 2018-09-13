//include library
#include<iostream>
using namespace std;
//we are going to define two functions which will find out maximum between two functions and returns to output
int maximum(int a,int b){
                        if(a>b)
                        return a;
                        else
                        return b;}
//now the functions are defined
//using this function for output
int main(){
           //define variables
           int a,b,y;
           //assign valuue to the variables
           cout<<"Enter your first no:"<<"\n";cin>>a;
           cout<<"Enter your second number:"<<"\n";cin>>b;
           //finding the maximum
           y=maximum(a,b);//y=f(x)
           cout<<"Maximum between your numbers is"<<y<<"\n";
//closing the function
return 0;
}
