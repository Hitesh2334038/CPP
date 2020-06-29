#include <iostream>
using namespace std;
int main()
{
	int a,b,c,ans;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	cout<<"Enter c";
	cin>>c;
	int num;
	cout<<"Enter number to perform operation";
	cin>>num;	
	switch(num)
		{
			case 1:
				  cout<<"AND Operator";
				  ans=a&b;			
				  cout<<"[&] ans is :"<<ans<<endl;
				  break;

			case 2:
				  cout<<"OR Operator";
				  ans=a|b;			
				  cout<<"[|] ans is :"<<ans<<endl;
				  break;
				
			case 3:
				  cout<<"NOR Operator";
				  ans=a^b;			
				  cout<<"[^] ans is :"<<ans<<endl;
				  break;
			case 4:
				  cout<<"Double AND Operator";
				  if(a>b && a>c)
				    cout<<"A is Biggest value :"<<a<<endl;
				  break;
			case 5:
				  cout<<"Double AND Operator";
				  if(a == c)
				    cout<<"A and c has same value :"<<endl;
				  else
				    cout<<"A and c has Notsame value :"<<endl;
				  break;		
		        case 6:
				  cout<<"Double AND Operator";
				  if(c > a )
				    cout<<"C is Biggest value than A :"<<c<<endl;
				  else
				   cout<<"C is lowest value than A :"<<c<<endl;
				  break;
			case 7:
				  cout<<"Double AND Operator";
				  if(b < c)
				    cout<<"C is Biggest value than B :"<<c<<endl;
				  else
				   cout<<"C is lowest value than B :"<<c<<endl;
				  break;
			case 8:
				  cout<<"Not Operator";
				  if(a != b)
				    cout<<"a is not equal with B "<<endl;
				  else
				   cout<<"a is  equal with B "<<endl;
				  break;

		}

}
