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
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(s1[i]);
    }
    vector<char> f;
    for (auto it : s)
    {
        f.pb(it);
    }
    map<char, char> m;
    for (int i = 0; i < f.size() / 2; i++)
    {
        m[f[i]] = f[f.size() - 1 - i];
        m[f[f.size() - 1 - i]] = f[i];
    }
    if (f.size() % 2 != 0)
    {
        m[f[f.size() / 2]] = f[f.size() / 2];
    }
    string l;
    for (int i = 0; i < n; i++)
    {
        cout << m[s1[i]];
    }
    cout << ln;
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