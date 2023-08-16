#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int bs(int n, ll t, ll *sum)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - e) / 2;
        if (sum[mid] == t)
            return mid;
        if (sum[mid] < t)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return s;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<int> a(n);
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[j];
//         }
//         sort(a.begin(), a.end(), greater<int>());
//         vector<int> S(n + 1);
//         S[0] = 0;
//         for (int j = 0; j < n; j++)
//         {
//             S[j + 1] = S[j] + a[j];
//         }
//         for (int j = 0; j < q; j++)
//         {
//             int x;
//             cin >> x;
//             if (x > S[n])
//             {
//                 cout << -1 << "\n";
//             }
//             else
//             {
//                 cout << lower_bound(S.begin(), S.end(), x) - S.begin() << "\n";
//             }
//         }
//     }
// }

void solve()
{
    ll n, q;
    cin >> n >> q;

    int arr[n];
    vector<ll> sum(n + 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    sum[0] = 0;
    for (int i = 0; i < n; i++)
        sum[i + 1] = sum[i] + arr[i];

    while (q--)
    {
        ll s;
        cin >> s;
        if (s > sum[n])
            cout << -1 << endl;
        else
            cout << lower_bound(sum.begin(), sum.end(), s) - sum.begin() << endl;
    }
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