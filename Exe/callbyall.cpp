#include <iostream>
using namespace std;
class calling{
	public :
		int num1;
		int num2;
	public :
		void getvalue()
			{
				cout<<"=============Enter numbers============="<<endl;
				cout<<"num 1 :";
				cin>>num1;
				cout<<"num 2 :";
				cin>>num2;
			}
		void callbyValue(int a,int b)
			{       
				cout<<"============After callbyValue==============="<<endl;
				cout<<"before swap :"<<num1<<num2<<endl;
				int temp=a;
				a=b;
				b=temp;
				cout<<"swap of num1 and num2 : "<<a<<"  "<<b<<endl;
			}
		void callbyPointer(int *a,int *b)
			{       
				cout<<"============After callbyPointer==============="<<endl;
				cout<<"sum of two variable using pointer :"<<endl;
				int temp=*a+*b;
				
				cout<<"sum of num1 and num2 : "<<temp<<endl;
			} 
		void callbyRefrance(int &a,int &b)
			{       
				cout<<"============After callbyRefrance==============="<<endl;
				cout<<"swap without Third variable:"<<endl;
				a=a+b;
				b=a-b;
				a=a-b;
				
				cout<<"swap of num1 and num2 : "<<num1<<"  "<<num2<<endl;
			}   

};
int main(){
	calling c;
	int num1,num2;
	
	c.getvalue();
	c.callbyValue( c.num1,c.num2);
	c.callbyPointer(&c.num1,&c.num2);
	c.callbyRefrance(c.num1,c.num2);
}


