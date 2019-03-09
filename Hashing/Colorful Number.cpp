/*
For Given Number N find if its COLORFUL number or not

Return 0/1

COLORFUL number:

A number can be broken into different contiguous sub-subsequence parts. 
Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different
Example:

N = 23
2 3 23
2 -> 2
3 -> 3
23 -> 6
this number is a COLORFUL number since product of every digit of a sub-sequence are different. 

Output : 1
*/
int Solution::colorful(int A){
    if(A==NULL) return 0;
    unordered_map<int,int> mp;
    vector<int> v;
    while(A){
        v.push_back(A%10);
        A/=10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int m=1;
        for(int j=i;j<v.size();j++){
            m = m*v[j];
            if(mp.find(m)!=mp.end()) return 0;
            mp.insert({m ,  m});
            //cout<<m<<" ";
        }
    }
    return 1;
}
