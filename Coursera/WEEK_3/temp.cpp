#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using namespace std;

// 988 841 730 613 504 493 441 43 328 166
// 988 841 730 613 504 43 493 441 328 166

bool cmp(string &a, string &b)
{
  bool aless = false;
  for(int i = 0; i < min(a.size(), b.size()); i++ )
  {
    if ((a[i] == b[i]) && (a.size()!= b.size()))
    {
      if (a[i+1] < b[i])
      {
        aless = true;
      }
      else{
        aless = false;
      }
    }
    else break;
  }

  if(aless){
    
    return a < b;
  }
  return a > b;
}

string largest_number(vector<string> a)
{
  std::string result;

  sort(a.begin(), a.end(), cmp);

  for (auto &&no : a)
  {
    result.append(no);
  }

  return result;
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
  std::cout << largest_number(a);
}
