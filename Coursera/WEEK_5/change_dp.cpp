#include <iostream>
#include <vector>

using namespace std;

int get_change(int m) {
  //write your code here
  vector<int> Min(m+1, m+1);
  Min[0] = 0;
  int numcoins;
  int coins[] = {1, 3, 4};

  for (int i = 1; i < Min.size(); i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(i>=coins[j]){
        numcoins = Min[i - coins[j]]+1;
      }

      if(numcoins < Min[i]){
        Min[i] = numcoins;
        // cout<<numcoins<<' ';

      }
      
    }
  }
  // for (auto &&k : Min)
  // {
  //   cout<<k<<' ';
  // }
  
  // cout<<endl;
  
  return Min[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
