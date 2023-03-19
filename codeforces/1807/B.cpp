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
		ll b;
		cin >> b;
		vector<int> even, odd;
		int e = 0, d = 0;
		while (b--)
		{
			ll n;
			cin >> n;
			if (n % 2)
				d += n;
			else
				e +=n;
		}
		//cout << "e: " << e << " | d: " << d << '\n';
		if (e > d)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

// 00
/*
		ll a, b, c;
		cin >> a >> b >> c;
		if (a - b == c)
			cout << "-\n";
		else
			cout << "+\n";
*/