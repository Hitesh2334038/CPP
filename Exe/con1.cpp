#include<iostream>
using namespace std;
class student{
	private :
		int mark1;
		int mark2;
		int mark3;
	public 	:
		student():mark1(),mark2(),mark3(){}
		
		student(int x,int y,int z):mark1(x),mark2(y),mark3(z){}
		
		student(student &i)
		{
			mark1=i.mark1;
			mark2=i.mark2;
			mark3=i.mark3;
		}
		void display()
		{
			cout<<"Mark1 is :"<<mark1<<" "<<"Mark2 is :"<<mark2<<"Mark3 is :"<<mark3;
		}
		


};
int main(){
	student s;
	student s1(11,12,13);
	student s2(s1);
		s2.display();

}
