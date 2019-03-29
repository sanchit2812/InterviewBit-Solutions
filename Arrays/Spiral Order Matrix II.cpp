/*
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:

[
  [ 1, 2, 3 ],
  [ 8, 9, 4 ],
  [ 7, 6, 5 ]
]
*/
vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > v(A,vector<int>(A,0));
    int r=0,R= A, c =0, C=A, n = 1;
    
    while(r<R && c <C){
        
        for(int  i=c;i<C;i++){
            v[r][i] = n;
            n++;
        }
        r ++;
        
        for(int  i = r;i<R;i++){
            v[i][C-1] = n;
            n++;
        }
        C--;
        
        for(int  i=C-1;i>=c;i--){
            v[R-1][i] = n;
            n++;
        }
        R--;
        
        for(int  i=R-1;i>=r;i--){
            v[i][c] = n;
            n++;
        }
        c++;
    }
    return v;
}
