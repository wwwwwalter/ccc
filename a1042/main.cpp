#include <iostream>
#include <cstdio>


int main()
{
    int times = 0;
    scanf("%d",&times);
#if 0
    char f[6] = {0,'S','H','C','D','J'};
    int s[6] = {0,3,5,1,13,2};
    char p[6] = {0,4,2,5,3,1};

    char ff[6] = {0};
    int ss[6] = {0};
    int pp = 0;
    int i = 0,j = 0;
    for(i = 0; i < times; ++i)
    {
        for(j = 1; j<=5; ++j)
        {
            pp = p[j];
            printf("%d\n",pp);
            ff[pp] = f[j];
            ss[pp] = s[j];
        }
        for(j = 1; j<=5; ++j)
        {
            f[j] = ff[j];
            s[j] = ss[j];
        }
    }
    for(i = 1; i<=4; ++i)
    {
        printf("%c%d ",ff[i],ss[i]);
    }
    printf("%c%d",ff[5],ss[5]);
#endif
#if 1
    int p[55] = {0,36,52,37,38,3,39,40,53,54,41,11,12,13,42,43,44,2,4,23,24,25,26,27,6,7,8,48,49,50,51,9,10,14,15,16,5,17,18,19,1,20,21,22,28,29,30,31,32,33,34,35,45,46,47};
    //int p[55] = {0};
    char f[55] = {'\0'};
    char s[55] = {'\0'};
    int i = 0;


//    for(i = 1; i<=54; ++i)
//    {
//        scanf("%d",&p[i]);
//    }


    for(i = 1; i<=13; ++i)
    {
        f[i] = 'S';
        s[i] = i;
    }
    for(i = 14; i<=26; ++i)
    {
        f[i] = 'H';
        s[i] = i-13;
    }
    for(i = 27; i<=39; ++i)
    {
        f[i] = 'C';
        s[i] = i-26;
    }
    for(i = 40; i<=52; ++i)
    {
        f[i] = 'D';
        s[i] = i-39;
    }
    for(i = 53; i<=54; ++i)
    {
        f[i] = 'J';
        s[i] = i-52;
    }

    char ff[55] = {'\0'};
    int ss[55] = {0};
    int pp = 0;
    int t = 0;
    for(t = 0; t<times; ++t)
    {
        for(i = 1; i<=54; ++i)
        {

            pp = p[i];
            ff[pp] = f[i];
            ss[pp] = s[i];
        }
        for(i = 1; i<=54; ++i)
        {
            f[i] = ff[i];
            s[i] = ss[i];
        }
    }

    for(i = 1; i<=53; ++i)
    {
        printf("%c%d ",ff[i],ss[i]);
    }
    printf("%c%d",ff[54],ss[54]);


#endif
    return 0;
}
