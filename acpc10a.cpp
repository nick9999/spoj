#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)==3 && a||b||c)
	{
		if(c-b==b-a) printf("AP %d\n",c+b-a);
		else printf("GP %d\n",c*b/a);
		
	}
	return 0;
	
}

