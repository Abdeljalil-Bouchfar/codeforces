#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
 
 
using namespace std;
 
void solve(long long t)
{
	int m, s;
	cin >> m >> s;
	int arr[100] = {0};
	int max = 0;
	for (int i = 0; i < m; i++)
	{
		int n;
		cin >> n;
		arr[n] = 1;
		if (n > max)
			max = n;
	}
	int tt = 0;
	int i = 1;
	while (tt < s)
	{
		if (arr[i] != 1)
		{
			tt += i;
			arr[i] = 1;
		}
		i++;
	}
	if (tt == s)
	{
		for (int i = 1; i <= max; i++)
		{
			if (arr[i] == 0)
			{
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
	else
		cout << "NO\n";
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
		solve(t);
	return 0;
}