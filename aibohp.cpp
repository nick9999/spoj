# include <stdio.h>
# include <string.h>
 
inline int max(int a, int b)
{return a>=b?a:b;}
 
int main()
{
    int tcases;
    scanf("%d",&tcases);
    char str[6100];
    int dp[2][6100];
    while (tcases--){
        scanf("%s",str);
        memset(dp, 0, sizeof dp);
        int I, J, K, length;
        length=strlen(str);
        for(I=length-1;I>=0;I--){
            char ch=str[I];
            for (J=0;J<length;J++)
                if (ch==str[J])
                    dp[1][J+1]=dp[0][J]+1;
                else dp[1][J+1]=max(dp[1][J], dp[0][J+1]);
 
            for (K=0;K<=length;K++)
                dp[0][K]=dp[1][K];
        }
        printf("%d\n",length-dp[1][J]);
    }
    return 0;
}
