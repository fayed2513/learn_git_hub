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
    int r, c;
    cin >> r >> c;
    bool c1 = false, c2 = false, x = false, y = false;
    vector<string> v(r);
    for (int i = 0; i < r; i++)
    {
        cin >> v[i];
    }
    // cout << v[r - 1][c - 1] << "\t" << v[0][0] << ln;
    if (r == 1 || c == 1)
    {
        if (r == 1 && v[0][0] == v[0][c - 1] || c == 1 && v[0][0] == v[r - 1][0])
        {
            cout << "YES" << ln;
            return;
        }
        else
            cout << "NO" << ln;
        return;
    }
    else
    {
        if (v[0][0] == v[r - 1][c - 1] || v[0][c - 1] == v[r - 1][0])
        {
            cout << "YES" << ln;
            return;
        }
        else
        {
            for (int i = 0; i < c; i++)
            {
                if (i != 0 && v[0][i] == v[r - 1][c - 1])
                {
                    c1 = true;
                }
                if (i != c - 1 && v[r - 1][i] == v[0][0])
                {
                    c2 == true;
                }
                if (v[0][i] == v[r - 1][0])
                {
                    x = true;
                }
                if (v[r - 1][i] == v[0][c - 1])
                {
                    y = true;
                }
            }
            if (c1 == false && c2 == false && x == false && y == false)
            {
                cout << "NO" << ln;
                return;
            }
            c1 = false;
            c2 = false;
            x = false;
            y = false;
            //   cout << c1 << " " << c2 << ln;
            for (int i = 0; i < r; i++)
            {
                if (i != 0 && v[i][0] == v[r - 1][c - 1] && c1 <= 1)
                {
                    c1 == true;
                    if (c1)
                    {
                        cout << "YES" << ln;
                        return;
                    }
                }
                if (i != r - 1 && v[i][c - 1] == v[0][0] && c2 <= 2)
                {
                    c2 = true;
                    if (c2)
                    {
                        cout << "YES" << ln;
                        return;
                    }
                }
                if (v[i][c - 1] == v[r - 1][0])
                {
                    x = true;
                    if (x)
                    {
                        cout << "YES" << ln;
                        return;
                    }
                }
                if (v[i][0] == v[0][c - 1])
                {
                    y = true;
                    if (y)
                    {
                        cout << "YES" << ln;
                        return;
                    }
                }
            }
            cout << "NO" << ln;
            //  cout << c1 << " " << c2 << ln;
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