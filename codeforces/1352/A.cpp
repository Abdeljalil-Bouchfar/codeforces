#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		vector<int> res;
		cin >> n;
		int d = 10;
		while (n / d)
		{
			if (n % d)
			{
				res.push_back(n % d);
				n -= n % d;
			}
			d *= 10;
		}
		res.push_back(n);
		cout << res.size() << endl;
		for (auto j : res)
			cout << j << " ";
		cout << '\n';
	}
	return 0;
}