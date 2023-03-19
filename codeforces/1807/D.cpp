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
		ll n, q;
		cin >> n >> q;
		int arr[n];
		int sums[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (i == 0)
				sums[i] = arr[i];
			else
				sums[i] = sums[i - 1] + arr[i];
		}
		for (int i = 0; i < q; i++)
		{
			ll l, r, k;
			cin >> l >> r >> k;
			int res = (sums[l - 1] - arr[l - 1]) + (k * (r - l + 1)) + ((sums[n - 1] - sums[r - 1]));
			cout << (res % 2 ? "YES\n" : "NO\n");
		}
	}
	return 0;
}