#include <iostream>
using namespace std;

void sum(int ,int);
void sub(int, int);
void mul(int, int);
void divison(int,int);

int main(){
	int a,b;
	cout<<"Enter a :";
	cin>>a;
	cout<<"Enter b :";
	cin>>b;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	divison(a,b);
return 0;
}

	void sum(int a,int b)
	{
		int sum1;
		sum1=a+b;
		cout<<"Sum is:"<<sum1<<endl;	
	}
	void sub(int a,int b)
	{
		int sub1;
		sub1=a-b;
		cout<<"Sub is:"<<sub1<<endl;	
	}
	void mul(int a,int b)
	{
		int mul1;
		mul1=a*b;
		cout<<"Mul is:"<<mul1<<endl;	
	}
	void divison(int a,int b)
	{
		int div1;
		div1=a/b;
		cout<<"Div is:"<<div1<<endl;	
	}
