#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::max;
using std::vector;
using namespace std;

int compute_min_refills(int dist, int tank, vector<int> &stops)
{

    if (dist <= tank)
    {
        return 0;
    }

    int ts = tank;

    int ref = 0;
    int cur_ind = 0;
    int prev = 0;

    stops.push_back(dist);

    while (stops[cur_ind] != dist)
    {   

        while (stops[cur_ind] - prev <= tank )
        {

            cur_ind++;
            if(stops[cur_ind] == dist && stops[cur_ind] - prev <= tank ){

                return ref;
            }
        }

        if (prev == stops[cur_ind-1])
        {
            ref  = -1;
            return ref;
        }

        prev = stops[cur_ind-1];
        cur_ind--;
        ref++;

    }

    return ref-1;

}

int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
