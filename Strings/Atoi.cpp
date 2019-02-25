/*
Implement atoi to convert a string to an integer.

Example :

Input : "9 2704"
Output : 9
*/
int Solution::atoi(const string A) {
    long int ans=0,i=0,n = A.size();
    while(i< n && A[i]==' ') i++;
    if(i==n ) return 0;
    int minus = 1;
    if(A[i]=='-'){
        minus = -1;
        i++;
    }
    else if(A[i]=='+') i++;
    //cout<<i<<" ";
    while(i<n){
        if(isdigit(A[i])){
            ans = ans*10 + (A[i]-'0');
            if(ans >= INT_MAX && minus==1) return INT_MAX;
            else if(ans>=INT_MAX && minus==-1) return INT_MIN;
        }
        else break;
        i++;
    }
    return ans*minus;
}
