#include <bits/stdc++.h>
using namespace std;

struct product {
	float profit;
	float wt;
	float pw;
};

bool comp(product a, product b)
{
	return a.pw < b.pw;
}

void fractionalKnapsack(product ratio[], float cap, int n)
{
	sort(ratio, ratio+n, comp);
	int flag = 0;
	float totalProfit = 0;
	int i;
	for(i=n-1; i>=0; i--)
	{
		float currWt = ratio[i].wt;
		float currProfit = ratio[i].profit;
		if(cap>0 && currWt <= cap)
		{
			cap -= currWt;
			totalProfit += currProfit;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	
	if(flag ==1)
	{
		totalProfit += ratio[i].profit * (cap/ratio[i].wt);
	}
	
	cout<<"Total Profit:"<<totalProfit<<endl;
}

int main() {
	
	int n;
	cin>>n;
	float cap;
	cin>> cap;
	float wt[n], profit[n];
	product ratio[n];
	
	for(int i=0; i<n; i++)
	cin>>wt[i];
	
	for(int i=0; i<n; i++)
	cin>>profit[i];
	
	for(int i=0; i<n; i++) {
	ratio[i].wt = wt[i];
	ratio[i].profit = profit[i];
	ratio[i].pw = profit[i]/wt[i];	
	}
	
	fractionalKnapsack(ratio, cap, n);
	
	return 0;
}
