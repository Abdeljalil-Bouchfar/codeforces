#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    vector<int> arr(n);
    int topp = 0, opp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (accumulate(arr.begin(), arr.end(), 0) >= 0 && accumulate(arr.begin(), arr.end(), 1, std::multiplies<double>()) == 1)
    {
        cout << 0 << endl;
        return;
    }

    int i = 0;
    vector<int> tarr = arr;
    for (; i < n; i++)
    {
        if (tarr[i] == -1)
            tarr[i] = 1, topp++;
         if (accumulate(tarr.begin(), tarr.end(), 0) >= 0 && accumulate(tarr.begin(), tarr.end(), 1, std::multiplies<double>()) == 1)
            break;
    }
    if (i == n)
        topp = 1000000;


    i = 0;
    for (; i < n; i++)
    {
        if (arr[i] == 1)
            arr[i] = -1, opp++;
         if (accumulate(arr.begin(), arr.end(), 0) >= 0 && accumulate(arr.begin(), arr.end(), 1, std::multiplies<double>()) == 1)
            break;
    }
    if (i == n)
        opp = 1000000;

    cout << min(opp, topp) << endl;
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