#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;
using namespace std;

long long compute_min_refills(long long dist, long long tank, vector<long long> & stops) {

    long long refill = 0;
    long long tank_init = tank;
    stops.push_back(dist);
    long long n = 0;

    for (long long i = 0; i<=dist; i++)
    {
        tank--;
        if(i > stops[n])
        {
            n++;
        }
        if((tank == 0) && (stops[n]-stops[n-1] <= tank_init)){
            refill++;
            tank = tank_init;
        }
        if (stops[n]-stops[n-1] > tank_init)
        {
            return -1;
        }
        
    }
    
    return refill;
}


int main() {
    long long d = 0;
    cin >> d;
    long long m = 0;
    cin >> m;
    long long n = 0;
    cin >> n;

    vector<long long> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
