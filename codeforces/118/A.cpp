#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
#include <math.h>

using namespace std;

int main()
{
	// long long t;
	// cin >> t;
	string s;
	string v = "aoyeui";
	string res;
	cin >> s;
	for (auto c : s)
	{
		if (v.find(tolower(c)) >= v.length())
		{
			res += '.';
			res += tolower(c);
		}
	}
	cout << res << endl;
	return 0;
}

// int main()
// {
// 	long long t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		long long m;
// 		cin >> m;
// 		int i = 2;
// 		int j = (m / 2);
// 		j += (m % 2 != 0);
// 		string res;
// 		if (m % 2 != 0)
// 			res += "1 2\n", i = 5;
// 		for (int k = m % 2 != 0; k < j; k++)
// 		{
// 			res += to_string(i);
// 			res += " ";
// 			res += to_string(i + 4);
// 			res += "\n";
// 			i += 6;
// 		}
// 		cout << j << endl;
// 		cout << res;
// 	}
// 	return 0;
// }