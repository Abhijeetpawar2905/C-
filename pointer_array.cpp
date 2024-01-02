#include<iostream>
using namespace std;
int main()
{
	int arr[4];
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
		// or
		scanf("%d",arr+i);
	}
	for(i=0;i<4;i++)
	{
		printf("%d\n",arr[i]);
		// or
		printf("%d\n",*(arr+i));
	}
}
