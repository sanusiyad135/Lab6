//typing upper case to lower case
//library
#include<iostream>
using namespace std;
//declaring function
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
	//declaring variable
	char inputChar;
	cout<<"give the alphabet in upper case"<<endl;
	//reading value
	cin>>inputChar;
	//type casting
	int s=int(inputChar);
	int f=toLower(s);
	//displaying result
	cout<<"lower case of the entered alphabet is "<<char(f+32)<<endl;
	return 0;
}
