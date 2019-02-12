/*
Excel Column Title
Asked in:  
Amazon
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    */
    string Solution::convertToTitle(int A) {
    string s="";
    while(A){
       if(A%26){
           s += (A%26 + 'A' -1);
           A = A/26;
       }
       else{
           s += 'Z';
           A = A/26;
           A--;
       }
    }
    reverse(s.begin(),s.end());
    return s;
}
