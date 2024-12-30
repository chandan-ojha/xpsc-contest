#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int clear_days = 7 - (x + y);
    cout << clear_days << '\n';
    return 0;
}