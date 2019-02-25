/*
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

Read more details about roman numerals at Roman Numeric System

Example :

Input : "XIV"
Return : 14
Input : "XX"
Output : 20
*/
int Solution::romanToInt(string A){
    map<char , int> mymap;
    mymap['I'] = 1;
    mymap['V'] = 5;
    mymap['X'] = 10;
    mymap['L'] = 50;
    mymap['C'] = 100;
    mymap['D'] = 500;
    mymap['M'] = 1000;
    
    int cnt=0,i=0,j=0,n = A.size();
    while(i<n){
        if(A[i]=='I' && A[i+1]=='V'){
            cnt += 4;
            return cnt;
        }
        else if(A[i]=='I' && A[i+1]=='X'){
            cnt += 9;
            return cnt;
        }
        else if(A[i]=='X' && A[i+1]=='L'){
            cnt += 40;
            i+=2;
        }
        else if(A[i]=='X' && A[i+1]=='C'){
            cnt += 90;
            i+=2;
        }
        else if(A[i]=='C' && A[i+1]=='D'){
            cnt += 400;
            i+=2;
        }
        else if(A[i]=='C' && A[i+1]=='M'){
            cnt += 900;
            i+=2;
        }
        else{
            cnt += mymap[A[i]];
            i++;
        }
    }
    return cnt;
}
