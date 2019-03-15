/*
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 ) are not zero-based. 
Put both these numbers in order in an array and return the array from your function ( Looking at the function signature will make things clearer ). Note that, if no pair exists, return empty list.

If multiple solutions exist, output the one where index2 is minimum. If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.

Input: [2, 7, 11, 15], target=9
Output: index1 = 1, index2 = 2
*/
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map <int, vector<int> > hash;
    int idx1=0,idx2=0,i,temp=0;
    vector<int> v;
    for(i=0;i<A.size();i++){
        temp = B - A[i];
        if(hash.find(temp)!=hash.end()){
                v.push_back(hash[temp][0] +1);
                v.push_back(i+1);
                return v;
        }
        hash[A[i]].push_back(i);
    }
}
