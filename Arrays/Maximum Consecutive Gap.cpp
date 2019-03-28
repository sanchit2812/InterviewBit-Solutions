/*
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Example :

Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.

You may assume that all the elements in the array are non-negative integers and fit in the 32-bit signed integer range.
You may also assume that the difference will not overflow.
*/
int Solution::maximumGap(const vector<int> &A) {
    if(A.size()<2) return 0;
    priority_queue <int> q;
    for(int i=0;i<A.size();i++) q.push(A[i]);
    int ans=0,prev=0,mxdiff = INT_MIN;
    prev = q.top();
    q.pop();
    while(!q.empty()){
        int t = q.top();
        q.pop();
        mxdiff = max(mxdiff, prev - t);
        prev = t;
    }
    return mxdiff;
}
