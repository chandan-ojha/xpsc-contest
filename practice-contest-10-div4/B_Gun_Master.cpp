#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int switches = 0;
    bool close_range = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > d && close_range)
        {
            switches++;
            close_range = false;
        }
        else if (a[i] <= d && !close_range)
        {
            switches++;
            close_range = true;
        }
    }

    cout << switches << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}