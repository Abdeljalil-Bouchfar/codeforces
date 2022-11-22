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
	char arr[n];
	int o = 0;
	int f = 1;
	long long res = 0;
	int fz = -1;
	int lo = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == '0')
			res += o;
		o += (arr[i] == '1');
		if (fz == -1 && (arr[i] == '0'))
			fz = i;
		if (arr[i] == '1')
			lo = i;
	}
	long long res1 = 0;
	o = 0;
	if (fz != -1)
		arr[fz] = '1';
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == '0')
			res1 += o;
		o += (arr[i] == '1');
	}
	if (fz != -1)
		arr[fz] = '0';
	long long res2 = 0;
	o = 0;
	if (lo != -1)
		arr[lo] = '0';
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == '0')
			res2 += o;
		o += (arr[i] == '1');
	}
	cout << max(res, max(res1, res2)) << endl;
}

int main()
{
	long long t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}