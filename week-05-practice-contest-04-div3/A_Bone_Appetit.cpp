#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y;
    cin >> n >> m;
    cin >> x >> y;

    int total_treats = (n * x) + (m * y);

    cout << total_treats << endl;

    return 0;
}