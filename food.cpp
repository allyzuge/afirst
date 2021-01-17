#include <iostream>
using namespace std;
int main ()
{
	int n;
	int arr[n];
	int sum=0;
	int counter;
	int avarage;

	for (int i=0;i<9;i++)
	{ cin>>arr[i];
		if (i<0)
		{
			cout<<"incorrect";
		}
		counter=i;
		sum=sum+arr[i];
		avarage=sum/counter;
	}
	cout<<sum;
	cout<<counter;
	cout<<avarage;
}