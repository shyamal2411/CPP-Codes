#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll int n, k, t, i, p, q, r, s, count = 0, j;
  set<int> w;
  cin >> n;
  cin >> p;

  while (p--) {
    cin >> r;
    w.insert(r);
  }

  cin >> q;
  while (q--) {
    cin >> k;
    w.insert(k);
  }
  if (w.size() == n)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;

  return 0;
}