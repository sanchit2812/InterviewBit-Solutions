int Solution::strStr(const string A, const string B) {
    if(A==" " || B==" ") return -1;
    vector<int> v;
    for(int i=0;A[i];i++) if(B[0]==A[i]) v.push_back(i);
    int i=0,j=0;
    for(int i=0;i<v.size();i++){
        int l=v[i],r = 0;
        while(l < A.size() && r<B.size() && A[l]==B[r]) l++,r++;
        if(r==B.size()) return v[i];
        if(l==A.size()) return -1;
    }
    return -1;
}
