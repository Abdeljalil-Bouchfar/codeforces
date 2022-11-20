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
	long n;
	cin >> n;
	int arr[n];
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		res += arr[i] - min;
	}
	cout << res << endl;
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
		solve(t);
	return 0;
}