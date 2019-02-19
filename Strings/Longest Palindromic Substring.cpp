/*
Given a string S, find the longest palindromic substring in S.

Substring of string S:

S[i...j] where 0 <= i <= j < len(S)

Palindrome string:

A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S.

Incase of conflict, return the substring which occurs first ( with the least starting index ).

Example :

Input : "aaaabaaa"
Output : "aaabaaa"
*/
string Solution::longestPalindrome(string A) {
    
    int maxlength=1;
    int n = A.size();
    int start=0;
    int low,high;
    
    for(int i=1;i<n;i++){
        low = i-1;
        high = i;
        while(low >=0 && high<n && A[low]==A[high]){
            if((high - low +1) >maxlength){
                maxlength = high - low +1;
                start = low;
            }
            low--;
            high++;
        }
        low = i-1;
        high = i+1;
        while(low>=0 && high <n && A[low]==A[high]){
            if(high -low+1 > maxlength){
                maxlength = high - low +1;
                start = low;
            }
            low--;
            high++;
        }
    }
    
    string s= "";
    high = start + maxlength;
    while(start!=high){
        s = s + A[start];
        start++;
    }
    return s;
}
