//tax rate calculation
//library
#include<iostream>
using namespace std;
//declaring function that obtains from the user returns value in calling variable
	void funca(int &unit,int &unitCost,int &taxRate){
	    cout<<"Please enter unit"<<endl;
     	cin>>unit;
	
        cout<<"Please enter unitCst"<<endl;
	    cin>>unitCost;
	    cout<<"Please enter taxRt"<<endl;
	    cin>>taxRate;
}
//function that recieves the unit,taxRt, salesTx,totdue
    void funcb(int unit,int taxRate,int unitCost,int &salesTx,int &totDue){
	
	//calculate salestax and total due
	salesTx=(unitCost*taxRate/100);
	totDue=(unit*(unitCost+salesTx));
}
	void funcd(int unitCost,int units,int taxRate,int salesTax,int totalDue){
	//printing
	cout<<"The unitCost"<<unitCost<<endl;
	cout<<"the unitsPurch ="<<units<<endl;
	
	cout<<"The taxraste ="<<taxRate<<endl;
	
	cout<<"The salestax ="<<salesTax<<endl;
	
	cout<<"The totaldue ="<<totalDue<<endl;
	
}
    //Driver function
	int main(){
	//declaring all variable
	    int unit,unitCost,taxrate,salesTax,totaldue;
		//cal the function
     	funca(unit,unitCost,taxrate);
		funcb(unit,taxrate,unitCost,salesTax,totaldue);
		funcd(unitCost,unit,taxrate,salesTax,totaldue);
return 0;
}
