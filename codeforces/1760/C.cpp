#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>

using namespace std;

void solve()
{
	long long n;
	cin >> n;
	long long arr[n];
	long long max1 = -1;
	long long max2 = -1;
	for (int i =0; i < n; i++)
	{
		cin >> arr[i];
		if ((arr[i] > max2 && arr[i] >= max1))
		{
			max2 = max1;
			max1 = arr[i];
		}
		else if (arr[i] > max2 && arr[i] != max1)
			max2 = arr[i];
	}
	if (max2 == -1)
		max2 = max1;
	for (int i = 0; i < n; i++)
	{
		int t = arr[i] == max1 ? max2 : max1;
		cout << arr[i] - t << ' ';
	}
	cout << endl;
}

int main()
{
	long long t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}