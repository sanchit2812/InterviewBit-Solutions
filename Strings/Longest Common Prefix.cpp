/*
Write a function to find the longest common prefix string amongst an array of strings.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

As an example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

Given the array of strings, you need to find the longest S which is the prefix of ALL the strings in the array.

Example:

Given the array as:

[

  "abcdefgh",

  "aefghijk",

  "abcefgh"
]
The answer would be “a”.
*/
string Solution::longestCommonPrefix(vector<string> &A) {
    int l=INT_MAX;
    string s="";
    for(int i=0;i<A.size();i++){
        if(A[i].size()<l) l = A[i].size();
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<A.size();j++){
            if(A[j][i]!=A[0][i]) return s;
        }
        s += A[0][i];
    }
    return s;
}
