#include <stdio.h>

int contains(int n, int index, int *arr, int size)
{
	int r = 1;
	for (int i = 0; i < size; i++)
	{
		if (i != index && arr[i] == n)
			r++;
	}
	return r;
}

int main()
{
	int a;
	int c;
	scanf("%d %d", &a, &c);
	int arr[a];
	int res[a];
	for (int i = 0; i < a; i++)
	{
		if (i + 1 != a)
			scanf("%d ", &arr[i]);
		else
			scanf("%d", &arr[i]);
	}
	int freq = 0;
	int counter = 0;
	for (int i = 0; i < a; i++)
	{
		counter = contains(arr[i], i, arr, a);
		if (freq < counter)
			freq = counter;
	}
	if (freq <= c)
	{
		printf("YES\n");
		int j = 1;
		for (int i = 0; i < a; i++)
		{
			if (arr[i] != -1)
			{
				int val = arr[i];
				for (int n = i; n < a; n++)
				{
					if (j > c)
						j = 1;
					if (val == arr[n])
					{
						res[n] = j++;
						arr[n] = -1;
					}
				}
			}
		}
		for (int i = 0; i < a; i++)
		{
			printf("%i", res[i]);
			if (i + 1 != a)
				printf(" ");
		}
		printf("\n");
	}
	else
		printf("NO\n");
	return 0;
}