#include<iostream>
using namespace std;

int largest_no(int a[], int n)
{
	int large = 0;
//	int i = 0;
	for(int i =0;i<=n;i++)
	{
		if(a[i]>large)
		{
			large = a[i];
		}
	}
	return large;
}

int main()
{
	int n = 6;
	int a[] ={10,5,7,3,2,8};
	cout<<largest_no(a,n);
   return 0;
}

