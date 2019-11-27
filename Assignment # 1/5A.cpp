#include<iostream>
#include<string>
using namespace std;
class Bank{
	private:
	int account;
	public:
	int b;
	Bank(int a){
		account=a;
		{
				cout<<"Welcome to my Bank \n";
}
	statement();
	}
	statement(){
		cout<<"Please Enter 1 for check balance\n";
		cout<<"Please Enter 2 for Deposite balance\n";
		cout<<"Please Enter 3 for widraw balance\n";
		cin>>b;
		query(b);
	}
	
	
	
		
	deposit(){//Function for deposit cash into your account
	int a;
	cout<<"pleasec enter amount\n";
	cin>>a;
	if(a>15000 || a<500)
	{
		cout<<"Please enter value range 500 to 1500\n";
		cout<<"your transection worth\n"<<a<<"cannot be processed";
statement();
	}
	else{
			account+=a;
		cout<<"you deposit Amount of "<<a<<"From your account"<<endl;
		statement();
	}
	
}
		widraw(){//function for your widraw cash
	
	
		int a;
		cout<<"pleasec enter amount you want to Widraw\n";
		cin>>a;
			if(a>5000||a<500)
			{
	        cout<"please ";
	        statement();
			}
			else{
			account=account-a;
			cout<<"you Widraw Amount of "<<a<<"From your account"<<endl;				}
			statement();
			
		}
		checkbalance(){//function for checking balance
			cout<<"your remaining Balance is"<<account<<endl;
			statement();
		}
		query(int b){
		
		
		
	if(b==1){
		checkbalance();
	}
	else if(b==2){
		deposit();
	}
	else if(b==3){
		widraw();
	}
		else{
			cout<<"Please Enter valuefrom range 1 t0 3 ";
		}
	}
};








