/*
You are given a string. The only operation allowed is to insert characters in the beginning of the string. How many minimum characters are needed to be inserted to make the string a palindrome string

Example:
Input: ABC
Output: 2
Input: AACECAAAA
Output: 2
*/
bool check(string s){
    int l=0, r = s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return 0;
        l++,r--;
    }
    return 1;
}
int Solution::solve(string A) {
    int n = A.size();
    if(n==0) return 0;
    int cnt=0;
    while(1){
        if(check(A)) return cnt;
        A.erase(A.begin()+n-1);
        n = A.size();
    }
    
}
