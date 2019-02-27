/*
Given an array of integers, return the highest product possible by multiplying 3 numbers from the array

Input:

array of integers e.g {1, 2, 3}
 NOTE: Solution will fit in a 32-bit signed integer 
Example:

[0, -1, 3, 100, 70, 50]

=> 70*50*100 = 350000

*/int Solution::maxp3(vector<int> &A) {
    int n=A.size();
    if(n<3) return 0;
    sort(A.begin(),A.end());
    int cnt=0,zero=0;
    for(int i=0;i<n;i++){
        if(A[i]>=0){
            cnt++;
            if(A[i]==0) zero++;
        }
    }
    if(cnt>=3) return max(A[n-1]*A[n-2]*A[n-3], A[n-1]*A[0]*A[1]);
    
    if(zero) return 0;
    if(cnt==0) return A[n-1]*A[n-2]*A[n-3];
    if(cnt==1) return A[n-1]*A[0]*A[1];
    return A[0]*A[1]*A[n-1];
    
}
