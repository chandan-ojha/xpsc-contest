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
        int n;
        cin >> n;

        vector<int> a(n);
        int total_rooms = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_rooms += (a[i] + 1) / 2;
        }

        cout << total_rooms << endl;
    }

    return 0;
}