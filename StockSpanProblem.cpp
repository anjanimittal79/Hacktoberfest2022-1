#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int span[n]={ 0 };
		for(int i=1; i<n; i++)
		{
			int j = i-1;
			while(j>=0)
			{
			if(arr[i]>arr[j]){
				span[i] += 1;
				j--;
			}
			else
			break;
				
			}
		}
		for(int i=0; i<n; i++)
		{
			cout<<span[i]+1<<"\t";
		}
	}
	
	return 0;
}
