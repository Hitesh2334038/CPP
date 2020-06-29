#include<iostream>
using namespace std;
class type{
	private :
		int a,b;
	public :
		type()
			{
				a=b=2;
			}
		type(int p,int q)
			{
				a=p;
				b=q;
			}
		void display()
			{
				cout<<"value is :"<<a<<b;
			}

};
int main{
	type t;
	
	type t1(5,5);

	t.display();
	t1.display();

}

