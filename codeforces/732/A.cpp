#include <iostream>

using namespace std;

int main()
{
	int p, r;
	cin >> p >> r;
	int res = 1, c = 0;
	while ((res * p - r) % 10 != 0 && (res * p) % 10 != 0)
		res++;
	cout << res << endl;
}