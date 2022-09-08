#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
// 988 841 730 613 504 493 441 43 328 166
// 988 841 730 613 504 43 493 441 328 166

// 5 44445 4444 44441
// 5 4444 44445 44441

int myCompare(string X, string Y)
{
    string XY = X.append(Y);
 
    string YX = Y.append(X);
 
    return XY.compare(YX) > 0 ? 1 : 0;
}

void largest_number_furious(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i = 0; i < arr.size(); i++)
      cout << arr[i];
}

int main()
{
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  
  largest_number_furious(a);

  // long long my = 989809689459290482782281781174670967366963458053151349148639435833733627926822 29197195154150125100;
  // long long ex = 989809689459290482782281781174670967366963458053151349148639435833733627926822 92197195154150125100;
  // if( my != expect )
  //   cout<<"not equal"<<endl;
  // else cout<<"equal"<<endl;
}
