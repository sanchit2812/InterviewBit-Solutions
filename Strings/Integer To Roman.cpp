/*
Given an integer, convert it to a roman numeral, and return a string corresponding to its roman numeral version

Input is guaranteed to be within the range from 1 to 3999.

Example :

Input : 5
Return : "V"

Input : 14
Return : "XIV"
*/
string Solution::intToRoman(int A) {
    string s = "";
    int x;
    x = A/1000;
    A = A%1000;
    while(x--) s+='M';
    if(A >= 900){
        s += "CM";
        A-=900;
    }
    if(A>=500){
        s += "D";
        A -= 500;
    }
    if(A>=400){
        s += "CD";
        A -=400;
    }
    if(A>=100){
        x = A/100;
        A = A%100;
        while(x--) s+='C';
    }
    if(A >= 90){
        s += "XC";
        A-=90;
    }
    if(A>=50){
        s += "L";
        A -= 50;
    }
    if(A>=40){
        s += "XL";
        A -=40;
    }
    if(A>=10){
        x = A/10;
        A = A%10;
        while(x--) s+='X';
    }
    if(A==9) s+= "IX";
    else if(A==8) s+= "VIII";
    else if(A==7) s+= "VII";
    else if(A==6) s+= "VI";
    else if(A==5) s+= "V";
    else if(A==4) s+= "IV";
    else if(A==3) s+= "III";
    else if(A==2) s+= "II";
    else if(A==1) s+= "I";
    return s;
}
