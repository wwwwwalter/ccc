#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN=100005;
int dis[MAXN],A[MAXN];
int main(void)
{
    int sum = 0;
    int query = 0;
    int n = 0;
    int left = 0;
    int right = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;++i)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
        dis[i] = sum;
    }
    scanf("%d",&query);
    for(int i = 0;i<query;++i)
    {
        scanf("%d%d",&left,&right);
        if(left>right)
            swap(left,right);
        int temp = dis[right-1]-dis[left-1];
        printf("%d\n",min(temp,sum-temp));
    }

    return 0;
}
