// create following structure
// struct book
// {
// 	char bid[5];
// 	char name[30];
// 	int price;
// };

#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
struct book
{
	char bid[5];
	char name[30];
	int price;
};
int main()
{
	int n;
	cout<<"Enter how many record you want"<<endl;
	cin>>n;
	
	book* ptr = new book[n];


	for(int i =0; i<n; i++)
	{
		char bid[5];
		char name[10]; 
		int price;

		cout<<"Enter bid :";
		cin>>bid;
		strcpy(ptr[i].bid, bid);

		cout<<"Enter name :";
		cin>>name;
		strcpy(ptr[i].name,name);

		cout<<"Enter price";
		cin>>price;
		ptr[i].price =  price;

	}

	for(int i =0; i<n ;i++)
	{
		cout<< "for "<< i <<endl;
		cout<<"bid "<<ptr[i].bid<<"name"<<ptr[i].name<< "price"<<ptr[i].price<<endl;
	}
}