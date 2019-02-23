/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
Return the sum of the three integers.

Assume that there will only be one solution

Example: 
given array S = {-1 2 1 -4}, 
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)
*/int Solution::threeSumClosest(vector<int> &A, int B) {
    int i,j,k,mn=INT_MAX,diff, n = A.size(),sum=0,ans=0;
    sort(A.begin(),A.end());
    for(i=0;i<n;i++){
        j = i+1;
        k = n-1;
        while(j<k){
            sum = A[i] + A[j] + A[k];
            diff = abs(sum - B);
            if(diff==0) return sum;
            if(diff<mn){
                mn = diff;
                ans = sum;
                
            }
            if(sum<=B) j++;
            else k--;
        }
    }
    return ans;
}
