#include <cstdio>
double s[1001];
int main(void)
{
    int n1,n2,p,count;
    double ss;
    scanf("%d",&n1);
    for(int i = 0;i<n1;++i)
    {
        scanf("%d",&p);
        scanf("%lf",&ss);
        s[p]+=ss;
    }
    scanf("%d",&n2);
    for(int i = 0;i<n2;++i)
    {
        scanf("%d",&p);
        scanf("%lf",&ss);
        s[p]+=ss;
    }

    for(int i = 0;i<1001;++i)
    {
        if(s[i]!=0)
            count++;
    }
    printf("%d",count);
    for(int i = 1000;i>=0;--i)
    {
        if(s[i]!=0)
            printf(" %d %.1f",i,s[i]);
    }


    return 0;
}
