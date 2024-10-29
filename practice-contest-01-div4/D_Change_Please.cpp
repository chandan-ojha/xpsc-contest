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

        int amountOwed = 100 - x;
        int maxPayback = (amountOwed / 10) * 10;

        cout << maxPayback << endl;
    }

    return 0;
}