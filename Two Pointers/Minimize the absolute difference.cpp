/*
Given three sorted arrays A, B and Cof not necessarily same sizes.

Calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs arrays A, B, C respectively.
i.e. minimize | max(a,b,c) - min(a,b,c) |.

Example :

Input:

A : [ 1, 4, 5, 8, 10 ]
B : [ 6, 9, 15 ]
C : [ 2, 3, 6, 6 ]
Output:

1
Explanation: We get the minimum difference for a=5, b=6, c=6 as | max(a,b,c) - min(a,b,c) | = |6-5| = 1.
*/
int Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i = a.size()-1,j = b.size()-1, k = c.size()-1;
    int ans = max(a[i], max(b[j],c[k])) - min(a[i],min(b[j],c[k]));
    while(i!=-1 && j!= -1 && k!=-1){
        int cnt = max(a[i], max(b[j],c[k])) - min(a[i],min(b[j],c[k]));
        if(cnt < ans) ans = cnt;
        int mx = max(a[i], max(b[j],c[k])) ;
        if(mx == a[i]) i--;
        else if(mx == b[j]) j--;
        else k--;
    }
    return ans;
}
