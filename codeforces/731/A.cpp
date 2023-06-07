#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ll n;
    // cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    char pre = 'a';
    for (char &c : s)
    {
        if (abs(c - pre) <= 13)
            ans += (abs(c - pre));
        else
            ans += (26 - abs(c - pre));
        pre = c;
    }
	
    cout << ans << endl;
    return 0;
}