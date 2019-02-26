/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.
*/
int comp(string x, string y){
    string xy = x+y;
    string yx = y+x;
    
    return xy.compare(yx)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    int cnt=0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=0){
            cnt++;
            break;
        }
    }
    if(cnt==0 || A.size()==0) return "0";
    if(A.size()==1) return to_string(A[0]);
    vector<string> v;
    for(int i=0;i<A.size();i++) v.push_back(to_string(A[i]));
    string s="";
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<A.size();i++) s+=v[i];
    return s;
}
