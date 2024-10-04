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
    ll n, m;
    cin >> n >> m;
    ll min, max;
    if (m == 1)
    {
        max = (n * (n - 1)) / 2;
        cout << max << " " << max << ln;
    }
    else
    {
        // cout << 88;
        ll x = n - (m - 1);
        max = (x * (x - 1)) / 2;
        ll n1 = n / m;
        ll n2 = n % m;
        ll ans1 = (n1 * (n1 - 1)) / 2;
        ll ans2 = ((n1 + 1) * (n1)) / 2;
        min = ans1 * (m - n2) + ans2 * n2;
        cout << min<< " " << max << ln;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bz();
    return 0;
}