#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int low = 0, high = (int)a.size();
  int mid = -1;
  int min_ans = -1;

  while(low <= high)
  {
    // cout<<endl<<low<<" "<<mid<<" "<<high<<endl;
    mid = low+(high-low)/2;
    if(a[mid] == x){
      // cout<<"ans"<<endl;
      min_ans = mid;
      high = mid-1;
    }
    else if(a[mid] < x)
      low = mid + 1;
    else if(a[mid] > x)
      high = mid - 1;

  }

  return min_ans;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
