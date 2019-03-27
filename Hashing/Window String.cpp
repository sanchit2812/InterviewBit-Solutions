/*
Given a string S and a string T, find the minimum window in S which will contain all the characters in T in linear time complexity.
Note that when the count of a character C in T is N, then the count of C in minimum window in S should be at least N.

Example :

S = "ADOBECODEBANC"
T = "ABC"
Minimum window is "BANC"

 Note:
If there is no such window in S that covers all characters in T, return the empty string ''.
If there are multiple such windows, return the first occurring minimum window ( with minimum start index ).
*/
string Solution::minWindow(string A, string B) {
    int sst=0,spt=0;
    int l = B.size();
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    for(int i=0;i<B.size();i++) mp2[B[i]]++;
    int cnt=0,minlen = INT_MAX,ans=-1;
    
    for(int i = 0;i<A.size();i++){
        mp1[A[i]]++;
        if(mp2[A[i]] && mp1[A[i]]<=mp2[A[i]]) cnt++;
        if(cnt == l){
            while(mp1[A[sst]] > mp2[A[sst]]  || mp2[A[sst]]==0){
                if(mp1[A[sst]] > mp2[A[sst]]) mp1[A[sst]]--;
                sst++;
            }
            int curr = i - sst +1;
            if(curr < minlen){
                minlen = curr;
                ans = sst;
            }
        }
    }
    if(ans==-1) return "";
    return A.substr(ans,minlen);
}
