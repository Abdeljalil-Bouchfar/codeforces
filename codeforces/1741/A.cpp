#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int r1 = 1, r2 = 1;
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.length() || i < s2.length(); i++)
		{
			if (i < s1.length())
			{
				if (s1[i] == 'S')
					r1 *= -1;
				else if (s1[i] == 'L')
					r1++;
				else if (s1[i] == 'X')
					r1 += 2;
			}
			if (i < s2.length())
			{
				if (s2[i] == 'S')
					r2 *= -1;
				else if (s2[i] == 'L')
					r2++;
				else if (s2[i] == 'X')
					r2 += 2;
			}
		}
		if (r1 > r2)
			cout << '>' << endl;
		else if (r1 < r2)
			cout << '<' << endl;
		else
			cout << '=' << endl;
	}
}