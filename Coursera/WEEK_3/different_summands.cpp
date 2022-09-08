#include <iostream>
#include <vector>

using std::vector;
using namespace std;
vector<int> optimal_summands(int n) {
  vector<int> summands;
  int last = n;
  for (int i = 1 ; i <= n; i++)
  {
    if(i<=last)
    {
      summands.push_back(i);
      last-=i;
    }
    else{
      summands[summands.size()-1]+=last;
      break;
    }
  }
  
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
