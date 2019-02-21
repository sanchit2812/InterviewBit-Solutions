/*
Given an array with n objects colored red, white or blue, 
sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: Using library sort function is not allowed.

Example :

Input : [0 1 2 0 1 2]
Modify array so that it becomes : [0 0 1 1 2 2]
*/
void Solution::sortColors(vector<int> &A) {
    int a=0,b=0,c = 0,n = A.size();
    
    for(int i=0;i<A.size();i++){
        if(A[i]==0) a++;
        else if(A[i]==1) b++;
        else c++;
    }
    A.clear();
    
    while(a--) A.push_back(0);
    while(b--) A.push_back(1);
    while(c--) A.push_back(2);
    
    return ;
}
