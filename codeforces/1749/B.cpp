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

int main()
{
	long long t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		vector<pair<int, int>> arr;
		long long n;
		cin >> n;
		long long m = 0;
		for (long long j = 0; j < n; j++)
		{
			int c = 0;
			cin >> c;
			arr.push_back({0, c});
		}
		for (long long j = 0; j < n; j++)
		{
			int c = 0;
			cin >> c;
			arr[j].first = c;
		}
		sort(arr.begin(), arr.end());
		for (long long j = 0; j < n; j++)
		{
			if (j != n - 1)
				m+=arr[j].first;
			m+=arr[j].second;
		}
		// if ((arr[0].first + arr[0].second) <= (arr[n - 1].first + arr[n - 1].second) && n > 1)
		// 	m+=arr[0].first;
		// else if ((arr[0].first + arr[0].second) > (arr[n - 1].first + arr[n - 1].second) && n > 1)
		// 	m+=arr[n - 1].first;
		cout << m << endl;
	}
	return 0;
}