
/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/
int Solution::isPalindrome(string A){
    int n = A.size();
    int l=0,r=n-1;

    while(l<=r){
        while(!isalnum(A[l]) ){
            l++;
            if(l==r) return 1;
        }
        while(!isalnum(A[r]) ){
            r--;
            if(l==r) return 1;
        }
        A[l] = tolower(A[l]);
        A[r] = tolower(A[r]);
        if(A[l]!=A[r]) return 0;
        else l++,r--;
    }

    return 1;
}
