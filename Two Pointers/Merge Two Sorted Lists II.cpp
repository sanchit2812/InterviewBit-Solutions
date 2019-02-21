/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.

 Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
TIP: C users, please malloc the result into a new array and return the result. 
If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

Example :

Input : 
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]
*/
void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    int m = A.size(), n = B.size();
    //v.resize(m+n);
    int i=0,j=0;
    
    while(i<m && j<n){
        if(A[i]<B[j]){
            v.push_back(A[i]);
            i++;
        }
        else if(B[j]<A[i]){
            v.push_back(B[j]);
            j++;
        }
        else{
            v.push_back(A[i]);
            i++;
            v.push_back(B[j]);
            j++;
        }
    }
    while(j<n){
        v.push_back(B[j]);
        j++;
    }
    while(i<m){
        v.push_back(A[i]);
        i++;
    }
    A.empty();
    A.resize(m+n);
    A = v;
}
