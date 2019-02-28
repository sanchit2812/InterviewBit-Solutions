/*
Compare two version numbers version1 and version2.

If version1 > version2 return 1,
If version1 < version2 return -1,
otherwise return 0.
You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 1.13 < 1.13.4
*/int Solution::compareVersion(string A, string B) {
    unsigned long long int i=0,j=0,x=0,y=0;
    while(i<A.size() || j<B.size()){
        while(i<A.size() && A[i]!='.'){
            x = 10*x + A[i]-'0';
            i++;
        }
        while(j<B.size() && B[j]!='.'){
            y = 10*y + B[j]-'0';
            j++;
        }
       // cout<<x<<" "<<y;
        if(x>y) return 1;
        if(x<y) return -1;
        i++,j++;
        x=y=0;
        
    }
    return 0;
    
}
