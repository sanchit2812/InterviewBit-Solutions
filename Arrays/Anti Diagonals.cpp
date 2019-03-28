/*
Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:

        
Input:     

1 2 3
4 5 6
7 8 9

Return the following :

[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]
*/
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int> > v(2*n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum = i + j;
            v[sum].push_back(A[i][j]);
        }
    }
    return v;
}
