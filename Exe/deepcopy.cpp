#include<iostream>
using namespace std;
class bank{
	private :
		int loanamount;
		int intrest;
	public 	:
		bank():loanamount(),intrest(){}
		
		bank(int x,int y):loanamount(x),intrest(y){}
			
		bank(bank &i):loanamount(i.loanamount),intrest(i.intrest){}
		
		void display()
		{
			cout<<"Loanamount is :"<<loanamount<<" "<<"intrest applied on this ammount is :"<<intrest<<endl;
		}



};
int main(){
	int lamount,intrest;
	cout<<"Enter the loanamount and intrest"<<endl;
	cin>>lamount>>intrest;
	bank b;
	bank b1(lamount,intrest);
	bank b2(b1);
	b1.display();
	b2.display();
}
	
