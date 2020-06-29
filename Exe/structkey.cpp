#include<iostream>
using namespace std;
struct book{
	char title[20];
	char author[20];
	char subject[20];
	int bookid;
	char name[20];

};
int main(){
	struct book b[10];
	int i,n;
	
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"**********WELCOME TO CHENNAI PUSTHKALAY**********"<<endl;
	for(i=0;i<=n;i++)
		{
			cout<<"=========Enter information about Book========"<<endl;
			cout<<"Enter Book TITLE NAME :";
			cin>>b[i].title;
			cout<<"Enter Autor Name of book :"<<endl;
			cin>>b[i].author;
			cout<<"Enter the subject :"<<endl;
			cin>>b[i].subject;
			cout<<"Enter BOOK ID :"<<endl;
			cin>>b[i].bookid;
			cout<<"Enter your name :"<<endl;
			cin>>b[i].name;
		}
		for(i=0;i<=n;i++)
		{
			cout<<b[i].name<<"----> here your all information saved in our data storage"<<endl;
			cout<<"Book TITLE NAME     :"<<b[i].title<<endl;
			cout<<"Autor Name of book  :"<<b[i].author<<endl;
			cout<<"Subject is          :"<<b[i].subject<<endl;
			cout<<"BOOK ID             :"<<b[i].bookid<<endl;
			cout<<"When this "<<b[i].title<<"Available we will inform you"<<endl;
			cout<<"Thank you"<<endl;
		}
	
}
