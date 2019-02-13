
/*Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example

m : 6
n : 9

GCD(m, n) : 3
*/
int GCD(int A,int B){
    if(A%B==0) return B;
    return GCD(B, A%B);

}

int Solution::gcd(int A, int B) {
    if(A==0 || B==0 || A==1 || B==1) return 1;

    if(B>A) swap(A,B);
    return GCD(A,B);
}
 
