#include<stdio.h>
int    rev(int  a)
{
	int rem,no=0;
	while(a)
	{
		rem=a%10;
		a=a/10;
		no=rem+no*10;
	}
	return no;
}
int main()
{
	int n;
	int  a,b,ans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		ans=rev(a)+rev(b);
		printf("%d\n",rev(ans));
		
	}
	return 0;
}
