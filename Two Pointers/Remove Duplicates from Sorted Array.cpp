/*
Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

 Example: 
Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2]. 
*/
int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int n = A.size(),i=0,j=0,k=0;
    
    if(n==1) return 1;
    
    while(i<n){
        j = i+1;
        if(j==n){
            A[k++]= A[i];
            return k;
        }
        while(j<n && A[j]==A[i]){
            j++;
        }
        if(j==n){
            A[k++] = A[i];
            return k;
        }
        else{
            A[k++] = A[i];
            i = j;
        }
    }
    return k;
}
