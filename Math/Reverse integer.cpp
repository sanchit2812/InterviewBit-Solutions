/*Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/

int Solution::reverse(int A) {
    int  x=0;
    if(A<0) x =1;
    A = abs(A);
    long int  z = A, ans=0;
    while(z){
        if((10*ans + z%10)>INT_MAX) return 0;
        ans = 10*ans + z%10;
        z = z/10;
    }
    if(x) return -1*ans;
    return ans;
}
