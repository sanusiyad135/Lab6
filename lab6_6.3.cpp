//program that outputs the sum of square of odd numbers

//library
#include<iostream>
using namespace std;
//declaring function
int sumSquareOddNum(int a,int b)
{
	int sum=0;
	//looping
	for(int i=a;i<b;i++)
{
	//giving condition for odd
	 if(i%2!=0&&i>a)
	//adding
	{  sum=sum+(i*i); }
}
 return sum;}
//drive function
int main(){
	//declaring variable
	int a,b;
	//asking user for the value
	cout<<"type the upper limit and the lower limit"<<endl;
	//reading values for the variables
	cin>>a;
	cin>>b;
	//Displaying value
	cout<<"the sum of square odd numbers is "<<sumSquareOddNum(a,b)<<endl;
return 0;}
