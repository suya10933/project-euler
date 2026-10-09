#include <stdio.h>

int main(void)
{
	int sum = 101 * 50;
	int ret = 0;
	for (int i = 1; i < 101; ++i)
	{
		ret += i * (sum - i);
	}
	printf("%d\n", ret);
	return 0;
}