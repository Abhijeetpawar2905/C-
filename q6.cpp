    // write a function to swap 2 given numbers using pointers.

#include<iostream>
using namespace std;
void swap(int*ptr1, int *ptr2);

int main()
{
    int *ptr1;
    int *ptr2;

    int n1, n2;
    cout<<"Enter no 1 :"<<endl;
    cin>>n1;

    cout<<"Enter no 2:"<<endl;
    cin>>n2;

    ptr1= &n1;
    ptr2= &n2;

    cout<<"before swap "<<"n1="<< n1<< "  n2 ="<<n2<<endl;
    swap(ptr1, ptr2);
    cout<<"After swap "<<"n1= " << n1<< "  n2="<<n2<<endl;

}
void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1= *ptr2;
    *ptr2=temp;
}