#include <iostream>
#include <vector>


long long get_fibonacci_huge_furious(long long n, long long m) {
    
    int previous = 0;
    int current  = 1;
    std::vector<int> repeat = {previous, current};

    while (1) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        current = current % m;
        repeat.push_back(current);

        if ((repeat.size() > 3) && (repeat[repeat.size()-1] == 1) && (repeat[repeat.size()-2] == 1) && (repeat[repeat.size()-3] == 0))
        {
            repeat.pop_back();
            repeat.pop_back();
            repeat.pop_back();
            break;
        }
        
        
    }

    long long done = (n/((long long)(repeat.size())))*((long long)(repeat.size()));
    long long don = n - done;

    return repeat[don];
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_furious(n, m) << '\n';

    return 0;
}
