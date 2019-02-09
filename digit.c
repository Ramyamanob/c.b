# c.b
#include<stdio.h>
int main()
{
    int n,k,a[5],sum=0,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
