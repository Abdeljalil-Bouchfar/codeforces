#pragma GCC optimize("Ofast", "unroll-loops", "omit-frame-pointer", "inline")
#pragma GCC option("arch=native", "tune=native", "no-zero-upper")
#pragma GCC target("rdrnd", "popcnt", "avx", "bmi2")

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    int arr[1001] = {0};
    ll sum = -1;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr[a] = i + 1;
    }

    for (int i = 1000; i > 0; i--)
        for (int j = i; j > 0; j--)
            if (arr[i] && arr[j] && sum < arr[i] + arr[j] && gcd(i, j) == 1)
                sum = arr[i] +  arr[j];

        
    if (sum == -1)
        cout << sum << endl;
    else
        cout << sum << endl;
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