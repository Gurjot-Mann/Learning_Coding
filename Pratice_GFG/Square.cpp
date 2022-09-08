// { Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool ValidCorner(const vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        bool yes = false;
        int rowf = -1, colf = -1, rows = -1, cols = -1;
        for (int i = 0; i < row; i++)
        {
            if (yes == true)
                break;
            for (int j = 0; j < col; j++)
            {
                if (yes == true)
                    break;
                for(int l = j; l < col; l++ )
                {
                    if (rowf > -1 && matrix[rowf][l] == 1 && j != colf)
                    {
                        rows = i;
                        cols = l;
                        for (int k = i + 1; k < row; k++)
                        {
                            if (matrix[k][colf] == 1 && matrix[k][cols] == 1)
                            {
                                yes = true;
                                break;
                            }
                        }
                    }
                }

                if (matrix[i][j] == 1 && i >= rowf)
                {
                    rowf = i;
                    colf = j;
                }
            }
        }
        return yes;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        vector<vector<int>> matrix(row);

        for (int i = 0; i < row; i++)
        {
            matrix[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
