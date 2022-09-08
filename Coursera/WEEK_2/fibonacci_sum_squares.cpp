#include <iostream>
#include <vector>

int fibonacci_sum_squares_furious(long long n) {

    int previous = 0;
    int current  = 1;
    std::vector<int> repeat = {0, 1, 1, 4, 9, 5, 4, 9, 1, 6, 5, 1, 6, 9, 9, 0, 9, 9, 6, 1, 5, 6, 1, 9, 4, 5, 9, 4, 1, 1, 0, 1, 1, 4, 9, 5, 4, 9, 1, 6, 5, 1, 6, 9, 9, 0, 9, 9, 6, 1, 5, 6, 1, 9, 4, 5, 9, 4, 1, 1};

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
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_furious(n);
}
