/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.
*/int Solution::maxSubArray(const vector<int> &A) {
    long int ans=0,curr=0,mn =INT_MIN,cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i] >=0 ) cnt++;
       if(A[i]>mn) mn = A[i];
    }
    if(cnt==0) return mn;
    for(int i=0;i<A.size();i++){
        curr += A[i];
        if(curr>ans) ans = curr;
        if(curr<0) curr = 0;
    }
    return ans;
}
