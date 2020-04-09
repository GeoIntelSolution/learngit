#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string c;
//     queue<string> a;
//     while(cin>>c){
//         a.push(c);
//     }
//     while(!a.empty()){
//         string s=a.front();
//         reverse(s.begin(),s.end());
//         cout<<s<<" ";
//         a.pop();
//     }
//     return 0;
// }

int main(){
    int n;
    char ch;
    scanf("%d",&n); getchar();
    while (n--)
    {
        stack<char> s;
        while (true)
        {
            ch = getchar();
            if(ch==' '||ch=='\n'||ch==EOF){
                while (!s.empty())
                {
                    printf("%c",s.top());s.pop();
                }
                if(ch=='\n'||ch==EOF) break;
                printf(" ");
            } 
            else s.push(ch);
        }
        printf("\n");
    }
}