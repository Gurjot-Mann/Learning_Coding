#include <iostream>
#include <vector>
using std::vector;


long long get_fibonacci_partial_sum_fast(long long from, long long to) {

    int previous = 0;
    int current  = 1;
    std::vector<int> repeat = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};

    long long repeat_No = 60;
    long long repeat_sum = 280;

    
    long long remainder = to%60;
    long long multiply = to/60;

    long long from_remainder = from%60;
    long long from_multiply = from/60;

    long long multi_sum_to = multiply*280;
    long long multi_sum_from = from_multiply*280;

    if (from == to)
    {
        return repeat[remainder];
    }

    long long sum=0;

    if (from_remainder > remainder)
    {
        long long pta = from_remainder-remainder%60;
        long long sum1 = 0;

        while (pta > -1)
        {
           sum1+=repeat[pta];

            pta--;

            return sum1-1;
        }
        
    }
    

    while (remainder >= from_remainder)
    {

        sum+=repeat[remainder];

        remainder--;
    }

    
    return sum%10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
