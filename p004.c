#include <stdio.h>

int main(void)
{
	int ret = 0;
	for (int i = 110; i < 1000; i += 11)
	{
		for (int j = 100; j < 1000; ++j)
		{
			int t = i * j;
			if ((t / 100000 % 10) == (t / 1 % 10) &&
				(t / 10000 % 10) == (t / 10 % 10) &&
				(t / 1000 % 10) == (t / 100 % 10))
			{
				ret = ret < t ? t : ret;
			}
		}
	}
	printf("%d\n", ret);
	return 0;
}