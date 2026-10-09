#include <stdio.h>

int main(void)
{
	int ret = 1;
	for (int i = 2; i < 20; ++i)
	{
		if (ret % i == 0) continue;
		for (int j = i / 2; j > 0; --j)
		{
			if (i % j == 0)
			{
				ret *= (i / j);
				break;
			}
		}
	}
	printf("%d\n", ret);
	return 0;
}