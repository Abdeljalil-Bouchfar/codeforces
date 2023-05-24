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
    int arr[n];
    int odd = 0, oi;
    int even = 0, ei;
	for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd++, oi = i;
        else
            even++, ei = i;
    }
    cout << (odd > even ? ei : oi) + 1 << endl;
    return 0;
}