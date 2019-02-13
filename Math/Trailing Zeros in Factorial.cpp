/*
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Example :

n = 5
n! = 120 
Number of trailing zeros = 1
So, return 1
*/
int Solution::trailingZeroes(int A) {
    int cnt=0,i=1;
    if(A<4) return 0;
    while(pow(5,i)<=A){
        cnt += A/pow(5,i);
        i++;
    }
    return cnt;
}
