#include <iostream>
using namespace std;
class operation{
	private :
		int a,b,sum,sub,mul,div;
	public 	:
		operation():a(),b(){}
		operation(int x,int y):a(x),b(y){}
		void sum1();
		void sub1();
		void mul1();
		void div1();
};
inline void operation::sum1(){
	cout<<"========SUM Operation========"<<endl;
	a+b;
	cout<<"Sum is :"<<a+b<<endl;
}
inline void operation::sub1(){
	cout<<"========SUB Operation========"<<endl;
	a-b;
	cout<<"Sub is :"<<a-b<<endl;
}

inline void operation::mul1(){
	cout<<"========MUL Operation========"<<endl;
	a*b;
	cout<<"Mul is :"<<a*b<<endl;
}

inline void operation::div1(){
	cout<<"========DIV Operation========"<<endl;
	a/b;
	cout<<"div is :"<<a/b<<endl;
}

int main(){
	int a,b;
	cout<<"Operation Starts From Here"<<endl;
	cout<<"Enter Two Values :"<<endl;
	cin>> a>>b;
	operation o1(a,b);
	o1.sum1();
	o1.sub1();
	o1.mul1();
	o1.div1();	
}
