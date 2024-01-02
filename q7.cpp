
// 7) accept from user how many initials he has in his name, now allocate a memory accordingly and
//  accept his initial. [use new operator]

#include<iostream>
using namespace std;

int main()
{
    int chars;
    cout<<"Enter how many initials  has in  your name"<<endl;
    cin>>chars;

        char * ptr = new char[chars];
    for(int i=0; i<chars; i++)
    {
        cin >> ptr[i];

    }
    for(int i =0; i<chars; i++)
    {
        cout<<ptr[i];
    }

}