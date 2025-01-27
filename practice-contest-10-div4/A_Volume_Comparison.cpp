#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int volume_cuboid = a * b * c;
    int volume_cube = x * x * x;

    if (volume_cuboid > volume_cube)
    {
        cout << "Cuboid" << endl;
    }
    else if (volume_cube > volume_cuboid)
    {
        cout << "Cube" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}