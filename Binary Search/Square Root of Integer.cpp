/*
Implement int sqrt(int x).

Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))

Example :

Input : 11
Output : 3
*/int Solution::sqrt(int A) {
    int l = 0, r= A, mid=0,ans=0;
    if(A==0 || A==1) return A;
    while(l<=r){
        mid = (l+r)/2;
        
        if(A/mid >= mid){
             l = mid +1;
             ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}
