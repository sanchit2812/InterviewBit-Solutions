/*
Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example :

Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2. 
*/
int Solution::majorityElement(const vector<int> &A){
    unordered_map <int,int> mymap;
    for(int i=0;i<A.size();i++){
        mymap[A[i]]++;
    }
    for(auto c:mymap){
        if(c.second> (A.size()/2)) return c.first;
    }
}
