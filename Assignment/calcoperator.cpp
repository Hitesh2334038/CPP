#include<iostream>
using namespace  std;
class calculator{
	private :
		int a,b;
		int sum,sub,mul,div;
	public  :
		calculator():a(10),b(5){}
		void operator +()
			{
				 sum=a+b;
			}
		void operator -()
			{
				 sub=a-b;
			}
		
		 
		void operator *()
			{
				 mul=a*b;
			}
		void operator ++()
			{
				 div=a/b;
			}
                void display()
		{
			cout<<"sum of two num : "<<sum<<endl;
			cout<<"sub of two num : "<<sub<<endl;
			cout<<"mul of two num : "<<mul<<endl;
			cout<<"div of two num : "<<div<<endl;
			
		}
};
int main(){
	
	calculator c;
	+c;
	-c;
	*c;
	++c;
	
	c.display();
}
