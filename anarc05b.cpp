#include<stdio.h>
const int MAX=10005;
int A[MAX],B[MAX];
int max(int a,int b)
{
	return (a>b?a:b);
}
int main()
{
	int la,lb,i,j;
	while(scanf("%d",&la)==1 && la)
	{
		for(i=1;i<=la;i++)
		{
			scanf("%d",&A[i]);
		}
		scanf("%d",&lb);
		for(i=1;i<=lb;i++)
		{
			scanf("%d",&B[i]);
		}
		for(i=j=1;i<=la || j<=lb;)
		{
			if(i<=la && j<=lb && A[i]==B[j])
			{
				A[i]+=A[i-1];
				B[j]+=B[j-1];
				A[i]=B[j]=max(A[i],B[j]);
				i++;
				j++;
			}
			else if(i>la)
			{
				B[j]+=B[j-1];
				j++;
			}
			else if(j>lb)
			{
				A[i]+=A[i-1];
				i++;
			}
			else if(A[i]>B[j])
			{
				B[j]+=B[j-1];
				j++;
			}
			else if(B[j]>A[i])
			{
				A[i]+=A[i-1];
				i++;
			}
		}
		printf("%d\n",max(A[la],B[lb]));
		
	}
	return 0;
}
