#include <bits/stdc++.h>
using namespace std;
int a[1001], dem[100001];
vector <bool> check(100001, false);
int main()
{
    int n,tmin = INT_MAX;
    bool ktra = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (!check[a[i]])
        {
            check[a[i]] = true;
            dem[a[i]] = i;
        }
        else
        {
            if (tmin > i - dem[a[i]]) tmin = i - dem[a[i]];
            dem[a[i]] = i;
            ktra = true;
        }
    }
    if (ktra) cout << tmin;
    else cout << "-1";
    return 0;
}

