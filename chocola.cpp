#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool foo (int i,int j) 
{
	return i>j;
}
int main()
{
	int t,m,n;
	long long int x[1001],y[1001];
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		for(int i=0;i<m-1;i++) cin>>x[i];
		for(int i=0;i<n-1;i++) cin>>y[i];
		sort(x,x+m-1,foo);
		sort(y,y+n-1,foo);
		int xp = 0, yp = 0;
		int xmul = 1, ymul = 1;
		long long int sum=0;
		while(xp<m-1||yp<n-1)
		{
		  if(yp == n-1 || (xp<m-1 && x[xp]>y[yp]))
		  {
		    ymul++;
		    sum += xmul*x[xp];
		    xp++;
		  }
		  else
		  {
		    xmul++;
		    sum += ymul*y[yp];
		    yp++;
		  }
		}
		printf("%lld\n",sum);
	}
		  return 0;
}
 

