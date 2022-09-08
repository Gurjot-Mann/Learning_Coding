#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

using std::vector;
using namespace std;





long long max_dot_product(vector<long long>& a, vector<long long>& b) {
  // write your code here
  long long result = 0;
  
  sort(a.begin(), a.end(), [] (long long& x, long long& y) {return x>y;});
  sort(b.begin(), b.end(), [] (long long& x, long long& y) {return x>y;});

for (int i = 0; i < a.size(); i++)
{
  result+=(long long)a[i]*b[i];
}

  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<long long> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
