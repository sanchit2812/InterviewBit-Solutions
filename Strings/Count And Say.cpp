/*
The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,
the sequence is 11.
*/
string Solution::countAndSay(int n) {
    string s="";
    string a ="11";
    if(n==1) return "1";
    else if(n==2) return "11";
    int i,j;
    for( i=3;i<=n;i++){
        string s = "";
        int cnt=1;
        for(j=0;j<a.size()-1;j++){
            if(a[j]==a[j+1]) cnt++;
            else{
                s += cnt+'0';
                s += a[j];
                cnt=1;
            }
        }
        if(cnt!=1){
            s += cnt+'0';
            s += a[j-1];
        }
        else{
            s += cnt+'0';
            s += a[j];
        }
        a = s;
    }
    return a;
}
