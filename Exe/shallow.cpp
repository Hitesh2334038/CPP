#include<iostream>
using namespace std;
class demo{
	private :
		int num1,num2,num3;
	public 	:
		demo():num1(),num2(),num3(){}
		demo(int x,int y,int z):num1(x),num2(y),num3(z){}
		int multiplication ()
		{
			return num1*num2*num3;
		} 

};
int main(){
	demo d;
	demo d1(22,33,44);
	demo d2=d1;//only value sent to the another object
	cout<<"Multiplication is :"<<d2.multiplication()<<endl;

}
	
