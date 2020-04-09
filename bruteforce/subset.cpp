#include<bits/stdc++.h>
using  namespace std;
class Solution{
    public:
        vector<vector<int> > subsets(vector<int> &s){
            sort(s.begin(),s.end());
            vector<vector<int>> result;
            vector<int> path;
            subsets(s,path,0,result);
            return result;
        }
    private:
        static void subsets(const vector<int> &S,vector<int> &path,
            int step,vector<vector<int>> &result
        ){
            if(step==S.size()){
                result.push_back(path);
                return;
            }

            subsets(S,path,step+1,result);

            path.push_back(S[step]);
            subsets(S,path,step+1,result);
            path.pop_back();
        }    


};


int main(){
    Solution s;
    vector<int> a ={1,2,3};
    for (auto &item :s.subsets(a)){
        for(auto i:item){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

}