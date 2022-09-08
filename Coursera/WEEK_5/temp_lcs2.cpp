#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;


int lcs2(vector<int> &a, vector<int> &b, int i, int j, vector<vector<int> >& d) {
  
  if(i == 0 || j == 0)
  {
    // cout<<"returned"<<endl;
    return 0;
  }

    if(a[i-1] == b[j-1])
    return d[i][j] = 1 + lcs2(a, b, i-1, j-1);

    if(d[i][j] != -1)
        return d[i][j];

    return d[i][j] = max(lcs2(a, b, i, j-1), lcs2(a, b, i-1, j));
  
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }
  
  vector<vector<int> > d(m+1, vector<int>(n+1, -1));

  cout<<lcs2(a, b, a.size(), b.size(), d)<<endl;
}
