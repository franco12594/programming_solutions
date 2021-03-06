//Santiago Vanegas Gil.
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>

#define D(x) cout << #x " is " << x << endl

using namespace std;

const double EPS = 1e-9;
const double PI = acos(-1.0);

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

int t;
vector <string> urls;

int
main() {
  cin >> t;
  for (int z = 1; z <= t; ++z) {
    urls.clear();
    int maxVal = 0;
    for (int i = 0; i < 10; ++i) {
      string url; cin >> url;
      int val; cin >> val;
      if (val > maxVal) {
        urls.clear();
        urls.push_back(url);
        maxVal = val; 
      }
      else if (val == maxVal) urls.push_back(url);
    }
    printf("Case #%d:\n", z);
    for (int i = 0; i < urls.size(); ++i) {
      cout << urls[i] << endl; 
    }
  }
  return 0;
}
