#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int res = 0; 
    for (auto c : s)
    {
        if (c == '4' || c == '7')
            res++;
    }
    cout << (res == 4 || res == 7 ? "YES" : "NO") << endl;
}