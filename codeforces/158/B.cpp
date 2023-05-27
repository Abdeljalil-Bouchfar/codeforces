#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    int arr[5] = {0};
    while (n--)
    {
        int t;
        cin >> t;
        ans += t == 4;
        arr[t]++;

        if (arr[1] && arr[3])
            ans++, arr[1]--, arr[3]--;
        if (arr[2] == 2)
            ans++, arr[2] = 0;
    }
    while (arr[1] && arr[2])
        ans++, arr[1] -= 2, arr[2]--;
    while (arr[1] > 0)
        ans++, arr[1] -= 4;
    while (arr[2])
        ans++, arr[2]--;
    while (arr[3])
        ans++, arr[3]--;
    cout << ans << endl;
    return 0;
}