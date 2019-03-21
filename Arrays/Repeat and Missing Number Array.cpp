/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int x=0, a=0,b=0;
    vector<int> v;
    for(int i=1;i<=A.size();i++) x= x^i;
    for(int i=0;i<A.size();i++) x = x^A[i];
    
    int bit = x & ~(x-1);
    
    for(int i=0;i<A.size();i++){
        if(A[i] & bit) a^=A[i];
        else b^=A[i];
    }
    
    for(int i=1;i<=A.size();i++){
        if(i&bit) a^=i;
        else b^=i;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]==a){
            v.push_back(a);
            v.push_back(b);
            return v;
        }
    }
    v.push_back(b);
    v.push_back(a);
    return v;
}
