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
        int n, x, y;
        cin >> n >> x >> y;

        int type2_sessions = n / 2;
        int type1_sessions = n % 2;

        int type2_earnings = (type2_sessions * y) + (type1_sessions * x);
        int type1_earnings = n * x;

        int max_earnings = max(type2_earnings, type1_earnings);

        cout << max_earnings << "\n";
    }
    return 0;
}