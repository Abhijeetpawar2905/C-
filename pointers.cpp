#include <iostream>
using namespace std;

int main()
{
	int sqr(int);
	int num=5,res;
	int (*ptr)(int);
	ptr=sqr;

	res=sqr(num);
	// or
	res=ptr(num);
	// or
	res=(*ptr)(num);

	printf("%d\n",res);
}
int sqr(int k)
{
	return k*k;
}
