/*
Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.

Note: Your algorithm should have a linear runtime complexity.

Could you implement it without using extra memory?

Example :

Input : [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Output : 4
*/

int Solution::singleNumber(const vector<int> &A) {
    int cnt=0;
    for(int i=0;i<32;i++){
        int x = 0;
        for(int j=0;j<A.size();j++) if(A[j]&(1<<i)) x++;
        if(x%3) cnt+= 1<<i;
    }
    return cnt;
}
