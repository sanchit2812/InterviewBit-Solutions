/*
Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
    */
    int Solution::titleToNumber(string st) {
    long int x=0,n = st.size();
    x = st[n-1]-'A'+1;
    
    for(int i=n-2;i>=0;i--){
        x += pow(26,n-i-1)*(st[i]-'A'+1);
    }
    return x;
} 
