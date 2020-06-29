#include <iostream>
using namespace std;
void getvalue();
void swap(int * ,int *);

int main()
{	
int a,b;
getvalue();



}

void getvalue()
	{
	int a,b;
	cout<<"Enter value a";
	cin>>a;
	cout<<"Enter value b";
	cin>>b;
	cout<<"after swapping";
	cout<<"a value is:"<<a<<endl;
	cout<<"b value is:"<<b<<endl;
	swap(&a,&b);
	}
void swap(int *x,int *y)
	{
        int temp;
	temp=*x;
	*x=*y;
	*y=temp;
 	int p=*x;
	int q=*y;
	cout<<"after swapping";
	cout<<"a value is:"<<p<<endl;
	cout<<"b value is:"<<q<<endl;
	}



