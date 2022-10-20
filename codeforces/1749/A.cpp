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
	vector<pair<int, int>> arr;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		for (int  j= 0; j < m; j++)
		{
			int x, y;
			cin >> x >> y;
			arr.push_back({x, y});
		}
		cout << (m < n ? "YES" : "NO") << endl;
	}
	return 0;
}