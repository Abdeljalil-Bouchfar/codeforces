#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	std::regex pattern("[47]*");
    ll a, b, c, max = 0;
	cin >> a >> b >> c;
	if (a + b + c > max)
		max = a + b + c;
	if (a * b * c > max)
		max = a * b * c;
	if (a + b * c > max)
		max = a + b * c;
	if (a * b + c > max)
		max = a * b + c;
	if (a * (b + c) > max)
		max = a * (b + c);
	if ((a + b) * c > max)
		max = (a + b) * c;
	cout << max << endl;
}