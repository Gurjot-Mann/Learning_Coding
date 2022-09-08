#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c, int i, int j, int k, vector<vector<vector<int> > >& d) {
  
  if(i == -1 || j == -1 || k == -1)
  {
    // cout<<"returned"<<endl;
    return 0;
  }

    if(a[i] == b[j] && b[j] == c[k])
    return d[i][j][k] = 1 + lcs3(a, b, c, i-1, j-1, k-1, d);

    if(d[i][j][k] != -1)
        return d[i][j][k];

    int Max = max(lcs3(a, b, c, i, j-1, k, d), lcs3(a, b, c, i-1, j, k, d));
    return d[i][j][k] = max(Max, lcs3(a, b, c, i, j, k-1, d));
  
}

int main() {
  size_t an;
  std::cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    std::cin >> a[i];
  }
  size_t bn;
  std::cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    std::cin >> b[i];
  }
  size_t cn;
  std::cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    std::cin >> c[i];
  }

    vector<vector<vector<int> > > d(an+1, vector<vector<int> >(bn+1, vector<int>(cn+1, -1)));

    //vectName( size, vector<vector<data_type> > ( size,vector< data_type  >( size, value)));

  std::cout << lcs3(a, b, c, an-1, bn-1, cn-1, d) << std::endl;
}
