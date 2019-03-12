/*
There are N children standing in a line. Each child is assigned a rating value.

 You are giving candies to these children subjected to the following requirements:
Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?

Sample Input :

Ratings : [1 2]
Sample Output :

3
The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. So rating 2 candidate gets 2 candies. In total, 2+1 = 3 candies need to be given out.
*/
int Solution::candy(vector<int> &A) {
    if(A.size()==1) return 1;
    vector<int> v;
    v.push_back(1);
    for(int i=1;i<A.size();i++){
        if(A[i]>A[i-1]) v.push_back(v[i-1] +1);
        else v.push_back(1);
    }
    int sum=v[A.size()-1];
    for(int i = A.size()-2;i>=0;i--){
        int c = 1;
        if(A[i]>A[i+1]) c = v[i+1] +1;
        sum += max(c,v[i]);
        v[i] = c;
    }
 
    return sum;
}
