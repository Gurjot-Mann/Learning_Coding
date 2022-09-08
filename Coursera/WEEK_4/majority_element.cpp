#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector;
using namespace std;

// void Merge_sort(vector<int> )

int hashing(vector<int> &a){
  unordered_map<int, int> hash;
  for (int i = 0; i < a.size(); i++)
  {
    hash[a[i]]++;
  }

  int count = 0;

  for (auto &&i : hash)
  {
      // cout<<i.second<<endl;
    if(i.second > a.size()/2)
    {
      return 1;
    }
  }
    return 0;
  
}

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  // std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';

  cout<<hashing(a)<<endl;
}
// 3 6 5 2 2 2