#include<iostream>
using namespace std;
class overload{
	private :
		int a,b,add;
	public 	:
		overload():a(), b(){}
		overload (int x,int y):a(x),b(y){}
		void sum()
			{
				add=a+b;
				cout<<"Addition is : "<<add<<endl;				
			}
		void sum(int a,int b)
			{
			 	add=a+b;
				cout<<"Addition parametrised constructor is : "<<add<<endl;	
			}
		void sum(int a,int b,int c)
			{
			 	add=a+b+c;
				cout<<"Addition parametrised constructor is : "<<add<<endl;	
			}
};
int main(){
	overload o ;
	o.sum();
	o.sum(2,5);
	o.sum(2,5,3);
}

