/*
Given two binary strings, return their sum (also a binary string).

Example:

a = "100"

b = "11"
*/
string Solution::addBinary(string A, string B) {
    string s="";
    int c=0,i=0;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    
    while(i<min(A.size(),B.size())){
        if(A[i]=='0' && B[i]=='0'){
            if(c){
                s+='1';
                c=0;
            }
            else s+='0';
        }
        else if(A[i]=='1' && B[i]=='1'){
            if(c) s += '1';
            else{
                s+='0';
                c=1;
            }
        }
        else{
            if(c) s +='0';
            else s+= '1';
        }
        i++;
    }
    int j = i;
    while(j<A.size()){
        if(A[j]=='1'){
            if(c) s+='0';
            else s+='1';
        }
        else{
            if(c){
                s +='1';
                c=0;
            }
            else s+='0';
        }
        j++;
    }
    
    while(i<B.size()){
        if(B[i]=='1'){
            if(c) s+='0';
            else s+='1';
        }
        else{
            if(c){
                s +='1';
                c=0;
            }
            else s+='0';
        }
        i++;
    }
    if(c) s+='1';
    reverse(s.begin(),s.end());
    return s;
}
