#include<bits/stdc++.h>
using namespace std;

int makeEqualLength(string &str1, string&str2){
    int len1 =str1.size();
    int len2 =str2.size();
    if(len1<len2){
        for(int i=0;i<len2-len1;i++)
            str1='0'+str1;
        return len2;    
    }else{
        return makeEqualLength(str2,str1);
    }
}


string addBitStrings(string first,string second){
    string result;//store results

    int length = makeEqualLength(first,second);
    int carry=0;

    for (int i = length-1; i >=0 ; i--)
    {
        int firstBit = first.at(i)-'0';
        int secondBit=second.at(i)-'0';
        int sum =(firstBit^secondBit^carry)+'0';

        result=(char)sum+result;

        carry=(firstBit&secondBit)|(firstBit&&carry)||(secondBit&&carry);
    }
    if(carry) result='1'+result;
    return result;    
}


int multiplySingleBit(string a,string b){
    return (a[0]-'0')*(b[0]-0);
}


long int multiply(string X,string Y){
    int n =makeEqualLength(X,Y);

    //Base cases 
    if(n==0) return 0;
    if(n==1) return multiplySingleBit(X,Y);

    int fh =n/2;//fist half
    int sh =(n-fh);//second half

    string X1=X.substr(0,fh);
    string X2=X.substr(fh,sh);

    string Y1=Y.substr(0,fh);
    string Y2=Y.substr(fh,sh);

    long int P1=multiply(X1,Y1);
    long int P2=multiply(X2,Y2);
    long int P3=multiply(addBitStrings(X1,X2),addBitStrings(Y1,Y2));

    return P1*(1<<(2*sh))+(P3-P1-P2)*(1<<(sh))+P2;

}


int main(){
    cout<<multiply("1100","1010")<<endl;
}