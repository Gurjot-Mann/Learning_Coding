#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    int max_1 = -1;
    int max_2 = -1;

    if(n == 2){
        return (long long)numbers[0] * numbers[1]; 
    }

    for (int i = 0; i < n; i++) {
        if ((max_1 == -1) || (numbers[max_1] < numbers[i]))
        {
            max_1 = i;
        }   
    }
    for (int j = 0; j < n; j++)
    {
        if((max_2 == -1) || ((numbers[max_2] < numbers[j]) && (j != max_1)))
        {
            max_2 = j;
        }
    }
    

    max_product = (long long)numbers[max_1] * numbers[max_2];

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
