#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ln endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<pair<ll, ll>, ll> ab, bc, ac;
        map<tuple<ll, ll, ll>, ll> ab3, bc3, ac3;
        ll ans = 0;

        for (ll i = 0; i < n - 2; i++)
        {
            ll a = v[i];
            ll b = v[i + 1];
            ll c = v[i + 2];

            ab[{a, b}]++;
            //   cout << ab[{a, b}] << ",";
            bc[{b, c}]++;
            //   cout << bc[{b, c}] << ",";
            ac[{a, c}]++;
            //   cout << ac[{a, c}] << ln;
            ab3[{a, b, c}]++;
            //   cout << ab3[{a, b, c}] << ",";
            bc3[{b, c, a}]++;
            //   cout << bc3[{b, c, a}] << ",";
            ac3[{a, c, b}]++;
            //  cout << ac3[{a, c, b}] << ln;

            ans += (ab[{a, b}] - ab3[{a, b, c}]);
            //  cout << ans << ",";
            ans += (bc[{b, c}] - bc3[{b, c, a}]);
            // cout << ans << ",";
            ans += (ac[{a, c}] - ac3[{a, c, b}]);
            // cout << ans << ln;
        }

        cout << ans << ln;
    }
    return 0;
}
