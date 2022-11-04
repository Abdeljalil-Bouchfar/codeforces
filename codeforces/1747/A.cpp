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
	long long t;
	cin >> t;

	while (t--)
	{
		long long	_nbs;
		long long	_g_a = 0, _g_b = 0;

		cin >> _nbs;
		for(int i = 0; i < _nbs; i++)
		{
			long long	_nb;
			cin >> _nb;
			if (_nb > 0)
				_g_a += _nb;
			else
				_g_b += abs(_nb);
		}
		cout << abs(_g_a - _g_b) << endl;
	}
	return 0;
}