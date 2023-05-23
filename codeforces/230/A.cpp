#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, s;
    cin >> s >> n;
    vector<pair<int, int>> pq;
	while (n--)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        pq.push_back(p);
    }
    sort(pq.begin(), pq.end(), [](pair<int, int> &p1, pair<int, int> &p2){
        return p1.first < p2.first;
    });
    for (int i = 0; i < pq.size(); i++)
    {
        if(s <= pq[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        s += pq[i].second;
    }
    cout << "YES" << endl;
    return 0;
}