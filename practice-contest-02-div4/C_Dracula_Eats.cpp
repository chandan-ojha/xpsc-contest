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

        int tuesdays;
        if (n >= 2)
        {
            tuesdays = (n - 2) / 7 + 1;
        }
        else
        {
            tuesdays = 0;
        }

        cout << tuesdays << endl;
    }

    return 0;
}