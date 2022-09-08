#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using namespace std;

struct points{
  int start, end;
};

int counti(vector<points> line, int index_max, int index_min, int point){

  int countr = 0;
  for (int i = index_min; i <= index_max; i++)
  {
    if(line[i].end >= point && line[i].start <= point)
    {
      countr++;
    }
  }
  return countr;
}

int binary_Index_max(vector<points> line, int low, int high, int point, int mid)
{
  while (low < high) {
    mid = (high + low) / 2;
    if (line[mid].end <= point || line[mid].start <= point) {
      low = mid + 1;
    }
    else {
      high = mid;
    }
  }
  // cout<<"point: "<<point<<endl;
  // cout<<"max: "<<high<<endl;
  return high;

}
int binary_Index_min(vector<points> line, int low, int high, int point, int mid){

  while (low < high) {
    mid = (high + low) / 2;
    if(line[mid-1].end < point && mid-1 > low)
      return mid - 1;
    else if (line[mid].end < point){
      low = mid + 1;
    }
    else {
      high = mid;
    }
  }
  // cout<<"min: "<<low<<endl;
  return low;
}

vector<int> fast_count_segments_furious(vector<int> starts, vector<int> ends, vector<int> points_m) {
  vector<int> cnt(points_m.size());

  vector<points> line(starts.size());
  

  for(int i = 0; i<starts.size(); ++i)
  {
    line[i].start = starts[i];
    line[i].end = ends[i];
  }
  sort(line.begin(), line.end(), [] (auto x, auto y) {return x.end < y.end;});

  for(int i = 0; i < points_m.size(); ++i){
    int index_max = binary_Index_max(line, 0, line.size()-1, points_m[i], line.size()-1);
    int index_min = binary_Index_min(line, 0, line.size()-1, points_m[i], 0);
    cnt[i] = counti(line, index_max, index_min, points_m[i]);
  }
  return cnt;
}

vector<int> naive_count_segments(vector<int> starts, vector<int> ends, vector<int> points_m, int n, int m) {
  vector<int> cnt(points_m.size());
  for (size_t i = 0; i < points_m.size(); i++) {
    for (size_t j = 0; j < starts.size(); j++) {
      cnt[i] += starts[j] <= points_m[i] && points_m[i] <= ends[j];
    }
  }
  return cnt;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  vector<int> starts(n), ends(n);
  for (size_t i = 0; i < starts.size(); i++) {
    std::cin >> starts[i] >> ends[i];
  }
  vector<int> points_m(m);
  for (size_t i = 0; i < points_m.size(); i++) {
    std::cin >> points_m[i];
  }
  //use fast_count_segments
  vector<int> cnt = fast_count_segments_furious(starts, ends, points_m);
  for (size_t i = 0; i < cnt.size(); i++) {
    std::cout << cnt[i] << ' ';
  }
  // cout << endl;
  //   vector<int> cnt1 = naive_count_segments(starts, ends, points, n, m);
  //   cout << "  naive: ";
  //   for (size_t i = 0; i < cnt.size(); i++)
  //   {
  //       std::cout << cnt1[i] << ' ';
  //   }
}


