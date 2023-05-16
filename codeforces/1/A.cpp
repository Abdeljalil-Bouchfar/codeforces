#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, a;
    cin >> n >> m >> a;
    cout << ((n / a) + (n % a > 0)) *  ((m / a) + (m % a > 0)) << endl;
    return 0;
}