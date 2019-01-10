#include <cstdio>
#include <cmath>
const double eps = 10-8;
#define Equ(a,b) ((fabs((a)-(b)))<(eps))
int main()
{
    #if 0
    int n1[11] = {-1};double s1[11] = {0.00};
    int n2[11] = {-1};double s2[11] = {0.00};
    int k1 = 0;
    int k2 = 0;
    scanf("%d",&k1);
    int i = 0;
    for(i = 0; i<k1; ++i)
    {
        scanf("%d",&n1[i]);
        scanf("%lf",&s1[i]);
    }
    scanf("%d",&k2);
    for(i = 0; i<k2; ++i)
    {
        scanf("%d",&n2[i]);
        scanf("%lf",&s2[i]);
    }

    int n3[11] = {-1};
    double s3[11] = {0.00};
    int k3 = 0;
    int j = 0;
    int count = 0;
    for(i = 0; i<k1; ++i)
    {
        for(j = 0; j<k2; ++j)
        {
            if(n1[i]==n2[j])
            {
                if(Equ(s1[i]+s2[j],0.00))
                {
                    n2[j] = -1;
                    continue;
                }
                n3[count] = n1[i];
                s3[count] = s1[i]+s2[j];
                n2[j] = -1;
                count++;
                break;
            }
            if(j == k2-1)
            {
                n3[count] = n1[i];
                s3[count] = s1[i];
                count++;
            }
        }
    }
    for(j = 0;j<k2;++j)
    {
        if(n2[j]!=-1)
        {
            n3[count] = n2[j];
            s3[count] = s2[j];
            count++;
        }
    }
    k3 = count;



    for(i = 0;i<k3-1;++i)
    {
        for(j = 0;j<k3-i-1;++j)
        {
            if(n3[j]<n3[j+1])
            {
                int temp = n3[j];
                n3[j] = n3[j+1];
                n3[j+1] = temp;
                double temp1 = s3[j];
                s3[j] = s3[j+1];
                s3[j+1] = temp1;
            }
        }
    }

    printf("%d",k3);
    for(i = 0;i<k3;++i)
    {
        printf(" %d %.1f",n3[i],s3[i]);
    }
    #endif


    return 0;
}
