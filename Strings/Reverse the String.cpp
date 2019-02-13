/*
Given an input string, reverse the string word by word.

Example:

Given s = "the sky is blue",

return "blue is sky the".

A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.
*/
void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,n = A.size();   
    string t="";
    i = n-1;
    while(i>=0){
        string em="";
        while(i>=0 && A[i]==' ') i--;
        while(i>=0 && A[i]!=' ') em += A[i--];
        reverse(em.begin(),em.end());
        t += em;
        t += ' ';
    }
    A = "";
    A = t;
    A.pop_back();
}
