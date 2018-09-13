//function from  lower case to upper case

//library
#include<iostream>
using namespace std;
//declaring function
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
//driving function
int main(){
	//declaring variable
	char inputChar;
	cout<<"give the alphabet in lower case"<<endl;
	//reading value
	cin>>inputChar;
	//type casting
	int s=int(inputChar);
	int f=toUpper(s);
	//displaying result
	cout<<"upper case of the entered alphabet is "<<char(f-32)<<endl;
	return 0;
}
