#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n, m;
    cin >> n >> m;

    string arr[n];
    string t = "vika";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int c = 0;
    for (int i = 0; i < m && c < t.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == t[c])
            {
                c++;
                break;
            }
        }
    }
    
    cout << (c == t.size() ? "YES" : "NO") << endl;
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