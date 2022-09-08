#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
using std::vector;
using std::string;
using std::pair;
using std::min;
using namespace std;


double furious_x(vector<pair<int, int>>points, int start, int end) {
  // cout<<"function called: furious_x"<<endl;
  double d;
  double d1;
  double d2;
  if(((end-1)-start) < 2)
  {
    if(start != end-1){
      double curr = sqrt(pow(((double)points[start].first-points[end-1].first), 2) + pow(((double)points[start].second - points[end-1].second), 2)); 
      // cout<<"start: "<<start<<" end: "<<end-1<<endl;
      // cout<<"sqrt( ("<<points[start].first<<"-"<<points[end-1].first<<")^2 + ("<<points[start].second<<"-"<<points[end-1].second<<")^2 )"<<endl;
      // cout<<"curr: "<<curr<<endl;
      return curr;
    }
    else {
      double curr = sqrt(pow(((double)points[start].first-points[end].first), 2) + pow(((double)points[start].second - points[end].second), 2));
      // cout<<"start: "<<start<<" end: "<<end<<endl;
      // cout<<"sqrt( ("<<points[start].first<<"-"<<points[end].first<<")^2 + ("<<points[start].second<<"-"<<points[end].second<<")^2 )"<<endl;
      // cout<<"curr: "<<curr<<endl;
      return curr;
    }
  }
  int half = (start+end)/2;
  // cout<<"for d1 of start: "<<start<<" half: "<<half<<endl;
  d1 = furious_x(points, start, half);
  // cout<<"end of d1"<<endl;
  // cout<<"for d2 of half: "<<half<<" end: "<<end<<endl;
  d2 = furious_x(points, half, end);
  // cout<<"end of d2"<<endl;
  d = min(d1, d2);
  // cout<<"d: "<<d<<endl;

  

  return d;
}
double minimal_distance(vector<pair<int, int>>points, int start, int end) {

  // cout<<"function called: Minimal_distance"<<endl;

  sort(points.begin(), points.end());
  double d = furious_x(points, start, end);
  // cout<<"Out of furious_x"<<endl;
  if(d == 0)
    return 0;
  int needed_indx;
  vector<pair<int, int>> points1;
  for (int i = 0; i < points.size(); i++)
  {
    if (points[i].first < d)
    {
      needed_indx = i;
      points1.emplace_back(points[i].first, points[i].second);
      // cout<<points[i].first<< points[i].second<<endl<<endl;
    }
    else if(points[i].first > d){
      break;
    }

  }

  sort(points1.begin(), points1.end(), [] (auto x, auto y) {return x.second < y.second;});
  sort(points.begin(), points.end(), [] (auto x, auto y) {return x.second < y.second;});

  double new_min;
  
  // cout<<points1.size()<<endl;
  int ind = 0;
  int ind1 = 0;
  for(int i = 0; i<points.size(); i++)
  {
    if((points1[ind].first == points[i].first) && (points1[ind].second == points[i].second)){
      ind++;
      continue;
    }
    // cout<<points[i].first<< points[i].second<<endl<<endl;
    points1.emplace_back(points[i]);
    ind1++;
    if(ind1+ind == 5)
      break;
  }

  for(int i = 0; i < points1.size(); i++)
  {
    for(int j = i+1; (j < 7) && (j < points1.size()); j++){
      double neww = sqrt(pow(((double)points1[i].first-points1[j].first), 2) + pow(((double)points1[i].second - points1[j].second), 2));
      if(i == 0 && j == 1){
        new_min = neww;
        // cout<<endl<<endl<<new_min<<endl;
        // cout<<"x1: "<<points1[i].first<<" y1: "<<points1[i].second;
        // cout<<" x2: "<<points1[i+1].first<<" y2: "<<points1[i+1].second<<endl;
        // cout<<"sqrt( ("<<points1[i].first<<"-"<<points1[i+1].first<<")^2 + ("<<points1[i].second<<"-"<<points1[i+1].second<<")^2 )"<<endl;
        // cout<<"new_min: "<<new_min<<endl;
        // cout<<"this was called"<<endl;
        continue;
      }
      
      new_min = min(new_min, neww);
      // cout<<"neww: "<<neww<<endl;
      // cout<<"x1: "<<points1[i].first<<" y1: "<<points1[i].second;
      // cout<<" x2: "<<points1[i+1].first<<" y2: "<<points1[i+1].second<<endl;
      // cout<<"sqrt( ("<<points1[i].first<<"-"<<points1[i+1].first<<")^2 + ("<<points1[i].second<<"-"<<points1[i+1].second<<")^2 )"<<endl;
      // cout<<"new_min: "<<new_min<<endl;
      // cout<<"this was called"<<endl;
    }
  }
  d = min(d, new_min);
  // cout<<"Out of minimal_distance"<<endl;
  return d;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> x[i] >> y[i];
  }

  vector<pair<int, int>> points;
  for (int i = 0; i < n; i++)
  {
    points.emplace_back(x[i], y[i]);
  }
  
  std::cout << std::fixed;
  std::cout << std::setprecision(4) << minimal_distance(points, 0, n) << "\n";
}
