#include <iostream>
using namespace std;
class Area{
	private:
		int length;	
		int bredth;
		int temp;
		
	public :
		
		Area ()	:length(2),bredth(2){}
			
				
			
		Area(int a,int b):length(a),bredth(b){}
		
				
			
				
			
		void getvalue()
			{
				cout << "Enter value l and b :";
				cin >> length>>bredth; 
			}
		int calculator()
			{ 	
				return temp=length*bredth;
			}
		void display()
			{	
				cout<<"Area of rectangle : "<<temp<<endl;
			}

};
int main(){
	int a,b;
        
	Area a1,a2(5,5);
	
	a1.calculator();
	a1.display();
        a2.calculator();
	a2.display();

}







	


