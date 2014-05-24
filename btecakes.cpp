#include<iostream>
#include<stdio.h>


int main()
{
	int e,f,s,m,ee,ff,ss,mm,et,ft,st,mt,mx;
	while(scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&ee,&ff,&ss,&mm)==8 && e>=0)
	{
		et=(e+ee-1)/ee;
		ft=(f+ff-1)/ff;
		st=(s+ss-1)/ss;
		mt=(m+mm-1)/mm;
		mx=et;
		mx = mx>ft? mx:ft;
		mx = mx>st? mx:st;
		mx = mx>mt? mx:mt;
		printf("%d %d %d %d\n" ,mx*ee-e,mx*ff-f,mx*ss-s,mx*mm-m);
	}
	return 0;
}
