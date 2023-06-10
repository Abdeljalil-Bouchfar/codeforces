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
	ll ans = 0;
    while (n)
    {
        if (n % 2)
            ans++;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}