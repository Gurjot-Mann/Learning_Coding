#include <iostream>
#include <vector>

using std::vector;
using namespace std;

struct both
{
    int data;
    long long index;
};


long long in = 0;
void merge(vector<both> &A, int mid, int low, int high){

    int i, j, k;
    both B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    for (int i = low; i <= mid; i++)
    {
        // cout<<A[i].data<<'('<<A[i].index<<')'<<' ';
    }
    // cout<<endl;
    for (int i = mid+1; i <= high; i++)
    {
        // cout<<A[i].data<<'('<<A[i].index<<')'<<' ';
    }
    // cout<<endl<<endl;
    

    while (i <= mid && j <= high)
    {
        if (A[i].data <= A[j].data)
        {
            B[k].data = A[i].data;
            B[k].index = A[i].index;
            // cout<<A[i].data<<'('<<A[i].index<<')'<<" < "<<A[j].data<<'('<<A[j].index<<')'<<endl;
            i++;
            k++;
        }
        else
        {
            B[k].data = A[j].data;
            B[k].index = A[j].index;
            // if(A[i].index != A[j].index){
            //     cout<<A[i].data<<'('<<A[i].index<<')'<<" >= "<<A[j].data<<'('<<A[j].index<<')'<<endl;
            //     in++;
            //     cout<<in<<endl;
            // }
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        // if(k != i){
        //     cout<<" and_i "<<A[i].data<<'('<<A[i].index<<')'<<endl;
        //     in++;
        //     cout<<in<<endl;
        // }
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k].data = A[j].data;
        B[k].index = A[j].index;
        // if(k != j){
        //     cout<<" and_j "<<A[j].data<<'('<<A[j].index<<')'<<endl;
        //     in++;
        //     cout<<in<<endl;
        // }
        j++;
        k++;
    }
    for (int l = low; l <= high; l++)
    {
        A[l].data = B[l].data;
        A[l].index = B[l].index;
    }

    // cout<<"ended"<<endl<<endl;

  /*int i = low;
  int j = mid+1;
  int k = low;
  vector<int> b(high);
  while (i <= mid && j <= high)
  {
    if (a[i] < a[j])
    {
      b[k] = a[i];
      cout<<a[i]<<" < "<<a[j]<<endl;
      i++;
      k++;
    }
    else
    {
      b[k] = a[j];
      cout<<a[i]<<" => "<<a[j]<<endl;
      j++;
      k++;
    }
    
  }
  while (i <= mid)
  {
    b[k] = a[i];
    i++;
    k++;
  }
  while (j <= high)
  {
    b[k] = a[j];
    j++;
    k++;
  }

  for (int l = low; l <= high; l++)
    {
        a[l] = b[l];
        cout<<a[l]<<' ';
    }
    cout<<endl;
  cout<<"ended"<<endl;*/
}

    long long inv = 0;
void get_number_of_inversions(vector<both> &a, size_t left, size_t right, int* b) {
  if (left < right){
    size_t mid = (right + left) / 2;
    get_number_of_inversions(a, left, mid, b);
    get_number_of_inversions(a, mid+1, right, b);
    
    // cout<<endl<<"left: "<<left<<", "<<"right: "<<right<<endl;
    // cout<<"before merge"<<endl;
    // for (int i = left; i <= right; i++)
    // {
    //     cout<<a[i].data<<'('<<a[i].index<<')'<<' ';
    // }
    // cout<<endl;

    merge(a, mid, left, right);

  }

  
  //   cout<<"after merge"<<endl;
  // for (int i = left; i <= right; i++)
  // {
  //   cout<<a[i].data<<'('<<a[i].index<<')'<<' ';
  // }
  // cout<<"ended"<<endl;

  for (int i = left; i <= right; i++)
    {
      if(a[i].index != i){
        inv += abs(a[i].index - (i));
        // cout<<"if statement"<<endl;
        // cout<<"swapped: "<<a[i].data<<'('<<a[i].index<<')'<<endl;
        // cout<<"i: "<<i<<endl;
        // cout<<"inv: "<<inv<<endl;
      }
    }

    for (int i = left; i <= right; i++)
    {
      a[i].index = i;
      b[i] = a[i].data;
    }
    
    // return in;
    
    
}

long long furious(vector<both> &a){
  long long number_of_inversions = 0;

  int b[a.size()];
  for (int i = 0; i < a.size(); i++)
  {
    b[i] = a[i].data;
  }
  

    get_number_of_inversions(a, 0, a.size()-1, b);

    
    
    // return in;
    return inv/2;
  // return number_of_inversions;
}

int main() {
  int n;
  std::cin >> n;
  vector<both> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i].data;
    a[i].index = i;
  }
  std::cout << furious(a) << '\n';
  // for (auto &&ele : a)
  // {
  //   cout<<ele.data<<'('<<ele.index<<')'<<' ';
  // }
  
}

/*
    9 8 7 3 2 1
    8 7 3 2 1 9
    7 3 2 1 8 9
    3 2 1 7 8 9
    2 1 3 7 8 9
    1 2 3 4 8 9
                */
    