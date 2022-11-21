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
	long long a, b, c;
	cin >> a >> b >> c;

	if ((a > b && a < c) || (a < b && a > c))
		cout << a << endl;
	if ((b > a && b < c) || (b < a && b > c))
		cout << b << endl;
	if ((c > b && c < a) || (c < b && c > a))
		cout << c << endl;
}

int main()
{
	long long t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}
