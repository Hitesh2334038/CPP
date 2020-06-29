#include<iostream>
using namespace std;
class  operator1 {
	private :
		int num1,num2,sum,sub;
	public :
		operator1():num1(),num2(){}
		operator1(int x,int y):num1(x),num2(y){}
	void operator +()
		{
			sum= num1+num2;	
		}
    	void display()
		{
			cout<<"sum of two num : "<<sum<<endl;
			
		}

		
};
int main()
	{
	int a=5;int b=5;
	cout <<"using default constructor obj";
	operator1 o(5,5);
	+o;
	
	o.display();
	
		
	}
