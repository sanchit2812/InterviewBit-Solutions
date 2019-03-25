/**
 * Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval a,Interval b){
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> v;
    sort(A.begin(),A.end(),compare);
    Interval s ;
    s.start = A[0].start;
    s.end = A[0].end;
    
    for(int i=1;i<A.size();i++){
        if(A[i].start >s.end){
            v.push_back(s);
            s.start = A[i].start;
            s.end = A[i].end;
        }
        else{
            s.end = max(s.end,A[i].end);
        }
    }
    v.push_back(s);
    return v;
}
