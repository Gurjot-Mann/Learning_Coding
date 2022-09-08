#include <iostream>
#include <vector>
using std::vector;


long long fibonacci_sum_furious(long long n) {

    int previous = 0;
    int current  = 1;
    std::vector<int> repeat = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};

    long long repeat_No = 60;
    long long repeat_sum = 280;

    
    long long remainder = n%60;
    long long multiply = n/60;

    long long multi_sum = multiply*280;



    long long sum=0;

    while (remainder>-1)
    {

        sum+=repeat[remainder];

        remainder--;
    }
    
    return (sum+multi_sum)%10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;

    long long from_res = fibonacci_sum_furious(from);
    long long to_res = fibonacci_sum_furious(to);

    std::cout << from_res - to_res << '\n';
}
