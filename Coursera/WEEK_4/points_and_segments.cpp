#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
vector<int> fast_count_segments_furious(vector<pair<int,int> >segments, vector<int>points, int s, int p)
{
   vector< pair<int, int> >pts, seg;
     
   for(int i = 0; i < p; i++)
   {
      pts.push_back({points[i], i});
   }
     
   for(int i = 0; i < s; i++)
   {
      seg.push_back({segments[i].first, 1});
      seg.push_back({segments[i].second+1, -1});
   }
     
   sort(seg.begin(), seg.end(), greater<pair<int,int>>());
   sort(pts.begin(),pts.end());
     
   int count = 0;
   vector<int> cnt(p);
     
   for(int i = 0; i < p; i++)
   {
        int x = pts[i].first;
        
        while(!seg.empty() &&
              seg.back().first <= x)
        {
            count+= seg.back().second;
            seg.pop_back();
        }
        cnt[pts[i].second] = count;
   }
     
   return cnt;
   
}
 
int main()
{

  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> segments(n);
  for (size_t i = 0; i < segments.size(); i++) {

    int start, end;
    cin >> start >> end;
    
    segments[i] = {start, end};
  }

  vector<int> points(m);

  for (int i = 0; i < points.size(); i++)
  {
    cin>>points[i];
  }
  
  vector<int> cnt = fast_count_segments_furious(segments, points, n, m);
  for (size_t i = 0; i < cnt.size(); i++) {
    std::cout << cnt[i] << ' ';
  }
     
  return 0;
}