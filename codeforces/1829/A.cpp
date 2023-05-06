#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    string s, o = "codeforces";
    cin >> s;
    ll res = 0;
    // ll n;
    // cin >> n;
    // ll arr[n];
    for(ll i = 0; i < 10;i++) if (s[i] != o[i]) res ++;
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
    ll t;
	cin >> t;
	while (t--) 
        solve();
    return 0;
}