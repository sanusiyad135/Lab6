//sum of odd numbers
//library
#include<iostream>
using namespace std;
//declaring function
int sumOddNum(int a,int b)
{
	int sum=0;
	//looping
	for(int i=a;i<b;i++)
{
	//giving condition for odd
	 if(i%2!=0&&i>a)
	//adding
	{  sum=sum+i; }
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
	cout<<"the sum of odd numbers is "<<sumOddNum(a,b)<<endl;
return 0;}
