#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long gcd_furious(long long a, long long b){
  if (b == 0)
  {
    return a;
  }
  
  long long d = a%b;
  gcd_furious(b, d);
}

long long lcm_furious(long long a, long long b)
{  
  return ((long long)(a * b))/gcd_furious(a, b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_furious(a, b) << std::endl;
  return 0;
}
