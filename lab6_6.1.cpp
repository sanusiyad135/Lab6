//sum of even and odd
#include<iostream>
using namespace std;

//function that outputs the sum of all even numbers
//declaring function
int sumEvenNumbers(int a,int b)
{  
  int sum=0;
//looping
 for(int i=a;i<b;i++)
	//condition for even numbers
	{if(i%2==0&&i>a)
	//adding
	{ sum=sum+i;}}
	return sum;}
int main(){
	//declaring variables
	int a,b;
	cout<<"give upperlimit and lowerlimit "<<endl;
	//reading value
	cin>>a;
	cin>>b;
	//displaying the result
	cout <<sumEvenNumbers(a,b)<<endl;
return 0;
} 
