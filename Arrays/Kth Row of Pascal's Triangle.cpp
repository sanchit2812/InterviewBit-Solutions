/*
Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]
*/vector<int> Solution::getRow(int A) {
    vector<int> v;
    int c=1;
    for (int j = 1;j <= A+1; j++){ 
        v.push_back(c); 
        c = c * (A+1 - j) / j; 
    } 
    return v;
}
