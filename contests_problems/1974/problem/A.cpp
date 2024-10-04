#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ln endl
#define pb push_back
#define po pop_back
#define lop(i, a, b) for (ll i = a; i <= b; i++)
#define lup(i, a, b) for (ll i = a; i >= b; i--)
#define bs binary_search
#define ub upper_bound
#define lb lower_bound
void bz()
{
    int f, s, num = 0;
    cin >> f >> s;
    if (s == 0 && f == 0)
    {
        cout << 0 << ln;
    }
    else if (s == 0)
    {
        if (f % 15 == 0)
        {
            cout << f / 15 << ln;
        }
        else
        {
            cout << (f / 15) + 1 << ln;
        }
    }
    else
    {
        num = (s / 2) + s % 2;
        // cout << num << ln;
        int n = 15 * num - 4 * s;
        int x = (f - n);
        if (x <= 0)
        {
            cout << num << ln;
        }
        else
        {
            if (x % 15 == 0)
            {
                cout << num + x / 15 << ln;
            }
            else
            {
                cout << (num + x / 15) + 1 << ln;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        bz();
    return 0;
}