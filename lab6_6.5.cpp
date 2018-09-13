//library
#include<iostream>
using namespace std;
//function that outputs the sum of all even numbers
//declaring function
int sumEvenNum(int a,int b)
{  
  int sum=0;
//looping
 for(int i=a;i<b;i++)
	//condition for even numbers
	{if(i%2==0&&i>a)
	//adding
	{sum=sum+i;}}
	return sum;}
//function that outputs the sum of all odd numbers
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
}return sum;}
//program that outputs the sum of square of odd numbers

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
//sum of square of even numbers
//function that outputs the sum of all even numbers
//declaring function
int sumSquareEvenNum(int a,int b)
{  
  int sum=0;
//looping
 for(int i=a;i<b;i++)
	//condition for even numbers
	{if(i%2==0&&i>a)
	//adding
	{ sum=sum+(i*i);}}
	return sum;}
//driving function
int main(){
	//declaring variables
	int a,b,type;
	//asking user for the numbers
	cout<<"type two integers"<<endl;
	//reading values
	cin>>a;
	cin>>b;
	//asking user which operation
	cout<<"type 1 for sum of even numbers, type 2 for sum of odd numbers,type 3 for sum of squares of odd numbers,type 4 for square of even numbers"<<endl;
	//taking value
	cin>>type;
	//condition for sum of even numbers
	if(type==1){
	 cout<<"output ="<<sumEvenNum(a,b)<<endl;}
	//condition for sum of odd numbers	
	if(type==2){
	 cout<<"output ="<<sumOddNum(a,b)<<endl;}
	//condition for sum of square of oddnumbers
	if(type==3){
	 cout<<"output ="<<sumSquareOddNum(a,b)<<endl;}
	//condition for sum of square of evennumbers
	if(type==4){
	 cout<<"output ="<<sumSquareEvenNum(a,b)<<endl;}
return 0;}
