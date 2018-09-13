//include library
#include<iostream>
using namespace std;
//creating function
void minimum(int&,int&,int&);
int main(){
int i,j,k;
cout<<"enter the first no:";
cin>>i;
cout<<"enter the second no:";
cin>>j;
minimum(i,j,k);
cout<<"minimum of your numbers is:"<<k;
return 0;
}
void minimum(int& i,int& j,int& k){
if (i>j)
k=j;
else
k=i;

}
