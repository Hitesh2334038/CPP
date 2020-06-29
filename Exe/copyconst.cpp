#include<iostream>
using namespace std;
class Hitesh{
	private :
		int a,b;
	public 	:
		Hitesh():a(0){}
		Hitesh(int x):a(x){}
		Hitesh(Hitesh &p):a(p.a){}
		void display()
		{
			cout<<"value is :"<<a<<endl;
		}
};
int main(){
		Hitesh h1;
		Hitesh h2(2);
		Hitesh h3(h2);
		h3.display();
	
}
