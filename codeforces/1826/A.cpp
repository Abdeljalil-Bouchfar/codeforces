#include<bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve(ll t)
{
    ll n, max = -1, r = 1;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n;i++)
        cin >> arr[i];
    for(ll i = 0; i <= n;i++)
    {
        ll tmp = 0;
        for(ll j = 0; j < n;j++)
        {
            if (arr[j] > i)
                tmp++;
        }
        if (tmp == i)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
    ll t;
	cin >> t;
	while (t--) 
        solve(t);
    return 0;
}