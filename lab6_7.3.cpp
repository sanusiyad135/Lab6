//library
#include<iostream>
using namespace std;
//declaring function to change to upper case
char toUpper(int s){
	int p;
	//condition for looping
	for(int i=97;i<=122;i++){
	 //finding the ASCII value
	 if(s==i){
	 //assigning value
	 p=i;}
	}
return p;
}
//declaring functionto change to lower case
char toLower(int s){
	int p;
	//condition for looping
	for(int i=65;i<=90;i++){
	 //finding the ASCII value
	 if(s==i){
	 //assigning value
	 p=i;}
	}
return p;
}
//driving function
int main(){
	//declaring variables
	char inputChar;
	//asking user for the alphabet
	 cout<<"give the alphabet to be changed"<<endl;
	 //reading value
	 cin>>inputChar;
	//type casting
	 
	 
		if(int(inputChar)>=97&&int(inputChar)<=122){
		int s=int(inputChar);
		int f=toUpper(s);
		//displaying result
		 cout<<"upper case of the entered alphabet is "<<char(f-32)<<endl;

		}
		if(int(inputChar)>=65&&int(inputChar)<=90){
		int s=int(inputChar);
		int f=toLower(s);
		 //displaying result
		cout<<"lower case of the entered alphabet is "<<char(f+32)<<endl;}
	return 0;
}
