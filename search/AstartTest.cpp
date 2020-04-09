#include<iostream>
#include<iomanip>
using namespace std;
char room[8][10];

int main(){
    for(int i=0;i<8;i++){
        for(int j= 0;j<10;j++){
            room[i][j]='1';
        }
    }

    for(int i=5;i<8;i++){
        room[1][i]='0';
    }

    for(int i=3;i<8;i++){
        room[4][i]='0';
    }

    for(int j=1;j<5;j++){
        room[j][7]='0';
    }
    for(int i=0;i<8;i++){
        for(int j= 0;j<10;j++)
            cout<<room[i][j]<<" ";
        cout<<"\n";    
    }

}