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
	for (int i =0; i < n; i++)
		cin >> arr[i];
	int pre = arr[0];
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if ((i + 1 >= n || arr[i] < arr[i + 1]) && (i == 0 || arr[i - 1] > arr[i] || pre == arr[i]))
		{
			//cout << i << endl;
			c++;
			pre = -1;
		}
		if ((i > 0 && arr[i - 1] > arr[i]))
			pre = arr[i];
	}
	cout << (n == 1 || c == 1 ? "YES" : "NO") << endl;
	//cout << "--------------\n";
}

int main()
{
	long long t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}