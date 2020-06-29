#include<iostream>
using namespace std;
class it{
	private :
	int fname;
	public :
	it():fname(){}
	it(int a):fname(a){};
	friend void nonfamily(it);	
};
void nonfamily(it i)
	{
		cout<<i.fname<<" "<<"is out side of member"<<endl;
	}
int main(){
	it i;
	it i1(12);
	nonfamily(i1);
}

