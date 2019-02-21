/*
Find the intersection of two sorted arrays.
OR in other words,
Given 2 sorted arrays, find all the elements which occur in both the arrays.

Example :

Input : 
    A : [1 2 3 3 4 5 6]
    B : [3 3 5]

Output : [3 3 5]

Input : 
    A : [1 2 3 3 4 5 6]
    B : [3 5]

Output : [3 5]
*/
vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i=0,j=0,n1 = A.size(),n2 = B.size();
    vector<int> v;
    while(i<n1 && j<n2){
        if(A[i]<B[j]) i++;
        else if(B[j]<A[i]) j++;
        else{
            v.push_back(A[i]);
            i++;
            j++;
        }
    }
    return v;
}
