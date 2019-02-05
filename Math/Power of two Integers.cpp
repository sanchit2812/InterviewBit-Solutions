/*Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True
as 2^2 = 4.

*/
int Solution::isPower(int A) {
    if(A==1) return 1;

    for(int i=2;i*i<=A;i++){
        int x = A;
        while(x%i==0){
            x = x/i;
            if(x==1) return 1;
        }
        if(x==0) return 1;
    }
    return 0;
}
