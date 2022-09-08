// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


bool find3Numbers(int A[], int n, int X)
{
    sort(A, A+n);
    bool ans = false;
    for(int i = 0; i<n-2; i++)
    {
        int l = i+1;
        int r = n-1;
        while (l<r)
        {
            if(A[i]+A[l]+A[r] == X)
            {
                ans = true;
                break;
            }
            else if (A[i]+A[l]+A[r] < X)
            {
                l++;
            }
            else
            {
                r--;
            }
            
        }
        if(ans == true)
            break;
        
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n,X;
		scanf("%d",&n);
		scanf("%d",&X);
		int i,A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
        printf("%d\n", find3Numbers(A, n, X));
    }
}
  // } Driver Code Ends