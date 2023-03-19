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
		ll n;
		string s;
		cin >> n;
		cin >> s;
		bool flg = true;
		vector<int> v(26, -1);
		v[(s[0] - 97)] = 0;
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] == s[i - 1])
			{
				flg = false;
				break;
			}
			if (v[(s[i] - 97)] == -1)
				v[(s[i] - 97)] = i % 2;
			else if ((v[(s[i] - 97)] == 0 && (i % 2) == 0) || (v[(s[i] - 97)] != 0 && (i % 2) != 0))
				continue;
			else
			{
				flg = false;
				break;
			}
		}
		cout << (flg ? "YES\n" : "NO\n");
	}
	return 0;
}