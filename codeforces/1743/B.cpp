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
		cout << "2 ";
		for (int i = 3; i <= n; i++)
			cout << i << ' ';
		cout <<  '1' << endl;
	}
}