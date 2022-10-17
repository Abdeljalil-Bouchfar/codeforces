#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
 
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[10] = {0};
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			arr[c] = 1;
		}
		int res = 0;
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == 1)
				continue;
			for (int j = 0; j < 10; j++)
				if (j != i && arr[j] == 0) res += 3;
		}
		cout << res << endl;
	}
}