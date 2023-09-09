#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    ll moves = 0, a = 0, b = 0, prev = 0, turn = 1;
    ll s = 0, e = n;
    while(s < e)
    {
        ll sum = 0;
        if (turn)
        {
            while (sum <= prev && s < e)
                sum += arr[s++];
            a += sum;
        }
        else
        {
            while (sum <= prev && s < e)
                sum += arr[--e];
            b += sum;
        }
        prev = sum;
        turn = !turn;
        moves++;
    }
    
    cout << moves << ' ' << a  << ' ' << b << endl;
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