#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int res = 0;
	while (n > 0)
		res += n--;
	printf("%i\n", res % 2);
}