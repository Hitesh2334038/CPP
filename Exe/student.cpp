#include <iostream>
using namespace std;
class student{
	public :
		char name[20];
		int  id;
		int mark1,mark2,mark3;
		int total;
	public :
		void getinfo()
			{
				cout<<"=============================Enter the information=========================="<<endl;
				cout<<"Enter name : "<<endl;
				cin>>name;
				cout<<"  Enter id : "<<endl;
				cin>>id;
				cout<<"Enter Mark1 : "<<endl;
				cin>>mark1;
				cout<<"Enter Mark2 : "<<endl;
				cin>>mark2;
				cout<<"Enter Mark3 : "<<endl;
				cin>>mark3;
				
			}
		void addmarks(int m1,int m2, int m3)
			{
                         	 total=m1+m2+m3;
			}
		void display()
			{	cout<<"======================STUDENT INFORMATION ============================"<<endl;
				cout<<"Name :"<<name<<endl;
				cout<<"Id   :"<<id<<endl;
				cout<<"Mark1:"<<mark1<<endl;
				cout<<"Mark2:"<<mark2<<endl;
				cout<<"Mark3:"<<mark3<<endl;
				cout<<"Total:"<<total<<endl;
			}
};
int main()
{ 	
	student s;
	int mark1,mark2,mark3;
	s.getinfo();
	s.addmarks(s.mark1,s.mark2,s.mark3);
	s.display();


}
