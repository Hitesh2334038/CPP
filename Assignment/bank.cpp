#include <iostream>
using namespace std;
class Banking{
		
	public :
		char branch[20];
		int accountno;
		char name[20];
		int cbalance=10000;
		int balance1;
		int damount;
		int amount;
		int balance2;
	public :
		void getinfo()
			
			{
				cout<<"=============Welcome To CDAC Chennai Bank============="<<endl;
				cout<<"******Enter information********"<<endl;
				cout<<"Enter Branch name of CDAC Chennai"<<endl;
				cin>>branch;
				cout<<"Enter Account no : "<<endl;
				cin>>accountno;
				cout<<"Enter Your Name : "<<endl;
				cin>>name;
				
			}
		void deposit()
			{       
  				cout<<"Enter Deposite Amount : "<<endl;
				cin>>damount;
				 balance1=cbalance+damount;
				cout<<"After Deposite Availabel Balance is : "<<balance1<<endl;
			}
		void withdrawal()
			{       
  				cout<<"Enter Withdrawal Amount : "<<endl;
				cin>>amount;
				 balance2=cbalance-amount;
				cout<<"After Withdrawal Availabel Balance is : "<<balance2<<endl;
			}
		void display()
			{	cout<<"======================"<<name<<"INFORMATION ============================"<<endl;
				cout<<"Branch Name       :"<<branch<<endl;
				cout<<"Name              :"<<name<<endl;
				cout<<"Account no        :"<<accountno<<endl;
				cout<<"Deposite Amount   :"<<balance1<<endl;
				cout<<"Withdrawal Amount :"<<balance2<<endl;
				
			}


};
int main(){
	Banking b;
	b.getinfo();
	b.deposit();	
	b.withdrawal();
	b.display();
	
}
