#include <iostream>
#include <cstdio>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int sum = 0;
    int count = 0;
    int n[7] = {0};
    sum = a+b;
    if(sum==0)
    {
        printf("%d",0);
        return 0;
    }
    if(sum<0)
    {
        printf("-");
        sum = -sum;
    }
    while(sum>0)
    {
        n[count++] = sum%10;
        sum /=10;
    }
    int i = 0;
    for(i = count-1;i>=0;--i)
    {
        printf("%d",n[i]);
        if(i%3==0&&i!=0)
            printf(",");
    }

    return 0;
}
