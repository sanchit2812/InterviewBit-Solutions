/8
Given a string, find the rank of the string amongst its permutations sorted lexicographically.
Assume that no characters are repeated.

Example :

Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' :
abc
acb
bac
bca
cab
cba
The answer might not fit in an integer, so return your answer % 1000003
*/
int fac(int x){
    (x<=1)?(1):(x*fac(x-1));
}

int Solution::findRank(string A) {
    long int ans=1;
    for(int i=0;i<A.size()-1;i++){
        int cnt=0;
        for(int j=i+1;j<A.size();j++){
            if(A[j]<A[i]) cnt++;
        }
        cout<<ans<<" ";
        ans += cnt*(fac(A.size()-i-1));
        ans = ans%1000003;
        cout<<ans<<" ";
    }
    return ans%1000003;
}
 
