#include <cstdio>
int main(void)
{
	int N = 0;
	int a[10] = {0};
	scanf("%d", &N);
	int i = 0;
	int num = 0;
	for (i = 0; i < N; ++i)
	{
		scanf("%d", &a[i]);
	}
	int j = 0;
	int sum = 0;
	for (i = 0; i < N; ++i)
	{
		for (j = i + 1; j < N; ++j)
		{
			sum += a[i] * 10 + a[j];
		}
		for (j = 0; j < i; ++j)
		{
			sum += a[i] * 10 + a[j];
		}
	}
	printf("%d\n", sum);

	return 0;
}
