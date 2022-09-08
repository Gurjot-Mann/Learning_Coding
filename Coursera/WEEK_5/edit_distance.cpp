#include <iostream>
#include <string>

using std::string;
using namespace std;

int edit_distance(const string &str1, const string &str2) {
  //write your code here
  int d[str1.size()+1][str2.size()+1];
  d[0][0] = 0;

  for (int i = 0; i < str1.size()+1; i++)
  {
    d[i][0] = i;
  }
  for (int i = 0; i < str2.size()+1; i++)
  {
    d[0][i] = i;
  }
  

  for (int j = 1; j < str2.size()+1; j++)
  {
    for (int i = 1; i < str1.size()+1; i++)
    {
      int insertion = d[i][j-1]+1;
      int deletion = d[i-1][j]+1;
      int match = d[i-1][j-1];
      int mismatch = d[i-1][j-1]+1;

      // cout<<"insertion d["<<i<<"]["<<j-1<<"]+1 = "<<d[i][j-1]+1<<endl;
      // cout<<"deletion d["<<i-1<<"]["<<j<<"]+1 = "<<d[i-1][j]+1<<endl;
      // cout<<"match d["<<i-1<<"]["<<j-1<<"] = "<<d[i-1][j-1]<<endl;
      // cout<<"mismatch d["<<i-1<<"]["<<j-1<<"]+1 = "<<d[i-1][j-1]+1<<endl;

      if(str1[i-1] == str2[j-1]){
        int Min = min(insertion, deletion);
        d[i][j] = min(Min, match);
        // cout<<str1[i-1]<<' '<<str2[j-1]<<endl;
      }
      else{
        int Min = min(insertion, deletion);
        d[i][j] = min(Min, mismatch);
      }
    }
    
  }

  // for (int i = 0; i < str1.size()+1; i++)
  // {
  //   for (int j = 0; j < str2.size()+1; j++)
  //   {
  //     cout<<d[i][j]<<' ';
  //   }
  //   cout<<endl;
    
  // }
  
  
  return d[str1.size()][str2.size()];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}