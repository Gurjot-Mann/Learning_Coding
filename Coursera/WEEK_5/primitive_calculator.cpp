#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <list>

using namespace std;

void optimal_sequence(int number) {
  vector<int64_t> min_steps(number+1,INT_MAX);

  list<int64_t>* path=new list<int64_t>[number+1];

  min_steps[0]=0; min_steps[1]=0;

  path[0].push_back(0);
  path[1].push_back(1);

  for(int i=2;i<=number;i++)
  {
    if(i%3==0)
    {
      if(min_steps[i/3] < min_steps[i])
      {
        min_steps[i]=min_steps[i/3]+1;
        path[i]=path[i/3];
        path[i].push_back(i);
      }
    }

    if(i%2==0)
    {
      if( min_steps[i/2] < min_steps[i])
      {
        min_steps[i]=min_steps[i/2]+1;
        path[i]=path[i/2];
        path[i].push_back(i);
      }
    }

    if( min_steps[i-1] < min_steps[i])
    {
      min_steps[i]=min_steps[i-1]+1;
      path[i]=path[i-1];
      path[i].push_back(i);
    }
  }
  cout<<min_steps[number]<<"\n";
  while(!path[number].empty())
  {
    cout<<path[number].front()<<" ";
    path[number].pop_front();
  }
}

int main() {
  int n;
  cin >> n;
  // vector<int> sequence = 
  optimal_sequence(n);
  // cout << sequence.size() - 1 << endl;
  // for (size_t i = 0; i < sequence.size(); ++i) {
  //   cout << sequence[i] << " ";
  // }
}