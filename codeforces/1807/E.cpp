#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	//  cin.tie(NULL);
	//  cout.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		int arr[n];
		int sums[n+1];
		sums[0] = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (i == 0)
				sums[i + 1] = arr[i];
			else
				sums[i + 1] = sums[i] + arr[i];
		}
		int s = 1, e = n;
		while (e - s > 0)
		{
			int mid = (e + s) / 2;
			cout << "? " << mid - s + 1 << " " ;
			for (int i = s; i <= mid; i++)
				cout << i << " ";
			cout << endl;
			int a;
			cin >> a;
			if (sums[mid] - sums[s - 1] < a)
				e = mid;
			else
				s = mid + 1;
			cout.flush();
		}
		cout << "! " << s << endl;
		cout.flush();
	}
	return 0;
}