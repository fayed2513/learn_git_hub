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
void bz(int x, int n, int s, int *ct)
{
    if (x < 0)
    {
        return;
    }
    if (x == 0)
    {
        *ct = *ct + 1;
        return;
    }
    for (int i = s; i >= 1; i--)
    {
        x = x - pow(i, n);
        bz(x, n, i - 1, ct);
        x = x + pow(i, n);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, n;
    cin >> x >> n;
    int s = sqrt(n);
    int ct;
    bz(x, n, s, &ct);
    cout << ct << ln;
    return 0;
}