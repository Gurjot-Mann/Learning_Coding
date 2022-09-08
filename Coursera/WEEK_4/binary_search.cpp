#include <iostream>
#include <cassert>
#include <vector>
#include <random>
#include <algorithm>

using std::vector;
using namespace std;


long long binary_search(const vector<long long> &a, long long x) {
  long long low = 0, high = (long long)a.size();

  while(1)
  {
    // cout<<endl<<low<<" "<<mid<<" "<<high<<endl;
    long long mid = low+(high-low)/2;
    if(a[mid] == x){
      // cout<<"ans"<<endl;
      return mid;
    }
    else if(a[mid] < x)
      low = mid + 1;
    else if(a[mid] > x)
      high = mid - 1;

    if(high < low)
      return -1;
  }

}

long long linear_search(const vector<long long> &a, long long x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

long long binary_search2(const vector<long long> &a, long long x){

  long long lo = 0, hi = (long long)a.size();


  while (hi - lo > 1) {
          long long mid = (hi + lo) / 2;
          if (a[mid] < x) {
              lo = mid + 1;
          }
          else {
              hi = mid;
          }
      }
      if (a[lo] == x) {
          return lo;
      }
      else if (a[hi] == x) {
          return hi;
      }
      else {
          return -1;
      }
}

int main() {
  long long n;
  std::cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long long m;
  std::cin >> m;
  vector<long long> b(m);
  for (long long i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (long long i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search2(a, b[i]) << ' ';
  }

  //==============================================================================================================

  // while(true){

  //   cout<<endl;

  //   long long range = rand() % 20 +2;

  //   long long range1 = rand() % range;

  //   vector<long long> a(range);
  //   vector<long long> b(range1);
  //   vector<long long> ans1(range1);
  //   vector<long long> ans2(range1);

  //   for (size_t i = 0; i < a.size(); i++)
  //   {
  //     long long item = rand() % 20 +2;
  //     if(item != a[i-1]){
  //       a[i] = item;
  //     }
  //     else --i;
  //   }

  //   for (size_t i = 0; i < b.size(); i++)
  //   {
  //     b[i] = rand() % 20 +2;
  //   }
    
  //   sort(a.begin(), a.end());


  //   for (long long i = 0; i < range1; ++i)
  //   {
  //     ans1[i] = (binary_search2(a, b[i]));
  //     ans2[i] = (binary_search(a, b[i]));
  //   }

  //   cout<<range<<endl;
  //   for (size_t i = 0; i < range; i++)
  //   {
  //     cout<<a[i]<<" ";
  //   }
  //   cout<<endl;
  //   cout<<range1<<endl;
  //   for (size_t i = 0; i < range1; i++)
  //   {
  //     cout<<b[i]<<" ";
  //   }
  //   cout<<endl;
  //   cout<<"Ans: "<<endl;
  //   for (long long i = 0; i < range1; i++)
  //   {
  //     cout<<ans1[i]<<" ";
  //   }
  //   cout<<endl;
  //   for (long long i = 0; i < range1; i++)
  //   {
  //     cout<<ans2[i]<<" ";
  //   }
  //   cout<<endl;
  //   for (long long i = 0; i < range1; i++)
  //   {
  //     if(ans1[i] != ans2[i]){
  //       cout<<"Wrong Answer"<<endl;
  //       long long wrong;
  //       cin>>wrong;
  //       if(!wrong)
  //         goto out;
  //     }
      
  //   }
    
  // }

  // out:cout<<"THE END"<<endl;

}
