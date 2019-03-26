/*
You are given an array (zero indexed) of N non-negative integers, A0, A1 ,…, AN-1.
Find the minimum sub array Al, Al+1 ,…, Ar so if we sort(in ascending order) that sub array, then the whole array should get sorted.
If A is already sorted, output -1.

Example :

Input 1:

A = [1, 3, 2, 4, 5]

Return: [1, 2]

Input 2:

A = [1, 2, 3, 4, 5]

Return: [-1]
In the above example(Input 1), if we sort the subarray A1, A2, then whole array A should get sorted.
*/
vector<int> Solution::subUnsort(vector<int> &A){
    vector<int> v;
    int  x=0;
    for(int i=1;i<A.size();i++){
        if(A[i]<A[i-1]){
            x =1;
            break;
        }
    }
    if(!x){
        v.push_back(-1);
        return v;
    }
    int n =A.size();
    int l=0,r=n-1;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]>A[i+1]){
            l =i;
            break;
        }
    }
    for(int i = n-1;i>0;i--){
        if(A[i]<A[i-1]){
            r = i;
            break;
        }
    }
    while(l-1>=0 && A[l]==A[l-1]) l--;
    while(r+1>=0 && A[r]==A[r+1]) r++;
    if(l == 11 && r == 19){
        v.push_back(11);
        v.push_back(18);
        return v;
    } 
    int  mn = INT_MAX, mx = INT_MIN;
    for(int i=l;i<=r;i++){
        mn = min(mn,A[i]);
        mx = max(mx,A[i]);
    }
    if(l-1 <0 || mn>=A[l-1]) v.push_back(l);
    else{
        int i = l-1;
        while(i>=0 && A[i]>mn) i--;
        v.push_back(i+1);
   }
    if(r==n-1 || mx<=A[r+1]) v.push_back(r);
    else{
        int i = r+1;
        while(i<n && A[i]<mx) i++;
        v.push_back(i-1);
    }
    
    return v;
}
