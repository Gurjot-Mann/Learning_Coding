#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;
using namespace std;

typedef struct Segment {
  int start, end;
} Segment;

vector<int> optimal_points(vector<Segment> &segments) {
  vector<int> points;

  sort(segments.begin(), segments.end(), [] (auto &x, auto &y) {return x.start < y.start;});
  points.push_back(segments[0].end);

  int last = 0;

  for (int i = 1; i < segments.size(); i++)
  {
    if((segments[i].end < points[last]))
    {      
      points[last] = segments[i].end;
    }
    else if(segments[i].start > points[last])
    {
      last++;
      points.push_back(segments[i].end);

    }
  }

  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
