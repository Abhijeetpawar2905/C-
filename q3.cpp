/*3) create a structure "Employee" 
with members 
	int id
	char name[20];
	char desig[20];
now access it using
a) array 
b) DMA
*/

#include<iostream>
using namespace std;
#include<cstring>

struct Employee
{
    int id;
    char name[20];
    char desig[20];

};

int main()
{
    // int req;
    // cout<<"Enter no of employee :"<<endl;
    // cin>>req;

    // Employee * ptr = new Employee[req];

    // for(int i=0; i<req; i++)
    // {
    //     int id;
    //     char n[10];
    //     char d[10];

    //     cout<<"enter id"<<endl;
    //     cin>>id;
    //     ptr[i].id=i;

    //     cout<<"enter name"<<endl;
    //     cin>>n;
    //     strcpy(ptr[i].name,n);

    //     cout<<"enter design"<<endl;
    //     cin>>d;
    //     strcpy(ptr[i].desig, d);
    // }

    // for(int i=0; i<req; i++)
    // {
    //     cout<<"for "<<i<<endl;

    //     cout<<"ID "<<ptr[i].id<<+"  name "<<ptr[i].name<<" desig "<<ptr[i].desig<<endl;
    // }


Employee E1[2];
for(int i=0; i<2; i++)
{
    int id;
    char n[10];
    char d[10];

        cout<<"enter id"<<endl;
        cin>>id;
        E1[i].id=i;

        cout<<"enter name"<<endl;
        cin>>n;
        strcpy(E1[i].name,n);

        cout<<"enter design"<<endl;
        cin>>d;
        strcpy(E1[i].desig, d);

}
  for(int i=0; i<2; i++)
    {
        cout<<"for "<<i<<endl;

        cout<<"ID "<<E1[i].id<<+"  name "<<E1[i].name<<" desig "<<E1[i].desig<<endl;
    }


}