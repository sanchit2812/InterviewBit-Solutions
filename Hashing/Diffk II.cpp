/*
Given an array A of integers and another non negative integer k, find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.

Example :

Input :

A : [1 5 3]
k : 2
Output :

1
as 3 - 1 = 2

Return 0 / 1 for this problem.
*/
int Solution::diffPossible(const vector<int> &A, int B) {
    map <int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp[A[i]-B] || mp[A[i]+B]) return 1;
        else mp[A[i]] = 1;
    }
    map<int,int> :: iterator it;
   // for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
 
