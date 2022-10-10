#include <iostream>

using namespace std;

int main()
{
	int m[5][5];
	
	for (int c = 0; c < 5; c++)
	{
		for (int r = 0; r < 5; r++)
			cin >> m[c][r];
	}
	int ri = -1, ci = -1;
	for (int c = 0; c < 5 && ci == -1; c++)
	{
		for (int r = 0; r < 5 && ci == -1; r++)
			if (m[c][r] == 1) ri = r, ci = c;
	}
	cout << abs(ri - 2) + abs(ci - 2) << endl;
}