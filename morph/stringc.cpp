#include<bits/stdc++.h>
using namespace std;
struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(){
    string line,word;
    ifstream in("a.txt");
    vector<PersonInfo> people;
    while (getline(in,line))
    {
        PersonInfo info;
        istringstream record(line);
        record>>info.name;
        while (record>>word)
        {
            info.phones.push_back(word);
        }
        
        people.push_back(info);
    }
    

    for(auto i : people){
        cout<<i.name<<"has"<<endl;
        for(auto j:i.phones){
            cout<<j<<endl;
        }
    }
}
