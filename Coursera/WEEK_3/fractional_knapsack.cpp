#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>

using std::vector;
using namespace std;

typedef struct infos
{
  double value, weight;
  double frac;
} infos;


double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {

  double value = 0.0;

  vector<infos> both;

  for (int i = 0; i < values.size(); i++)
  {
    both.push_back({(double)values[i], (double)weights[i], ((double)values[i]/weights[i])});
  }
  
  sort(both.begin(), both.end(), [] (auto &x, auto &y) {return x.frac > y.frac;});


  for (auto &&items : both)
  {
    if (items.weight<capacity)
    {
      value+= items.value;
      capacity = capacity-items.weight;
    }
    else{
      value+= capacity*items.frac;
      return value;
    }
    
  }
  
  
  
  
  
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  // std::cout.precision(10);
  std::cout <<setprecision(4)<<fixed<<optimal_value<< std::endl;

  return 0;
}
