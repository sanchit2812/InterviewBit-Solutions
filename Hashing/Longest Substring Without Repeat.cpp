/*
Longest Substring Without Repeat
Asked in:  
Amazon
Given a string, 
find the length of the longest substring without repeating characters.

Example:

The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.

For "bbbbb" the longest substring is "b", with the length of 1.
*/
int Solution::lengthOfLongestSubstring(string A) {
    int maxlen=0;
    int st=0,i=0;
    unordered_map<char,int> mp;
    mp[A[0]] =i;
    for(i=1;i<A.size();i++){
        if(mp.find(A[i])==mp.end()) mp[A[i]] = i;
        else{
            if(mp[A[i]]>=st){
                int curr = i-st;
                if(maxlen < curr) maxlen = curr;
                st = mp[A[i]] +1;
            }
            mp[A[i]] =i;
        }
    }
    if(maxlen < i-st) maxlen = i-st;
    return maxlen;
}
