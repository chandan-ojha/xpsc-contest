#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int total = 0, value = 1;
        int days = 0;

        for (int i = 0; i < 7; ++i)
        {
            if (total + value > x)
            {
                break;
            }
            total += value;
            value *= 2;
            days++;
        }

        if (days == 7 && total <= x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}