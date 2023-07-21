#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    string ans = "";
    for (int i = 0; i < 8; i++)
    {
        string s; 
        cin >> s;
        for (char &c : s)
            if (c != '.')
                ans += c;
    }
    
    cout << ans << endl;
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