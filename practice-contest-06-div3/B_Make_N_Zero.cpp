#include <bits/stdc++.h>
using namespace std;
bool can_make_zero(int n)
{
    while (n >= 0)
    {
        if (n % 3 == 0 || n % 4 == 0)
        {
            return true;
        }
        n -= 4;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (can_make_zero(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}