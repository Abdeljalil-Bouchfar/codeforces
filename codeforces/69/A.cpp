#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
	cin >> n;
	ll c1 = 0, c2 = 0, c3 = 0;
	while(n--)
	{
		ll a1, a2, a3;
    	cin >> a1 >> a2 >> a3;
		c1+=a1;
		c2+=a2;
		c3+=a3;
	}
	cout << ((c1 || c2 || c3) ? "NO\n" : "YES\n");
    return 0;
}