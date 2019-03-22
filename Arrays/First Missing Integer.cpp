/*
irst Missing Integer
Asked in:  
Model N
InMobi
Amazon
Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.
*/
int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size(),i=0,j=0;
    for(i=0;i<n;i++){
        if(A[i]<=0){
            swap(A[i],A[j]);
            j++;
        }
    }
    for(i=j;i<n;i++){
        if( (abs(A[i]))+j<=n && A[abs(A[i])+j-1]>0){
            A[abs(A[i])+j-1] = -A[abs(A[i])+j-1];
        }
    }
    for(i=j;i<n;i++){
        if(A[i]>0) return i-j+1;
    }
    return n+1-j;
}
