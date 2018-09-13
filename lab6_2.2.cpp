//include library
#include<iostream>
using namespace std;
//creating function
void sum(int&,int&,int&);
int main(){
int i,j,k;
cout<<"enter the first no:";
cin>>i;
cout<<"enter the second no:";
cin>>j;
sum(i,j,k);
cout<<"sum of your numbers is:"<<k;
return 0;
}
void sum(int& i,int& j,int& k){
k=i+j;

}


