#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void nextArr(vector<int> &nums){
        next_permutation(nums.begin(),nums.end());        
    } 
    template<typename BidIt>
    bool next_permutation(BidIt first,BidIt last){
        //Get a reverse range to simplify reversed traversal
        const auto rfirst =reverse_iterator<BidIt>(last);
        const auto rlast=reverse_iterator<BidIt>(first);

        //Begin from the seond last element to the first element.
        auto pivot = next(rfirst);
        while (pivot!=rlast&&*pivot >= *prev(pivot)) ++pivot;

        if(pivot == rlast){
            //start from first;
            reverse(rfirst,rlast);
        }

        auto change =find_if(rfirst,pivot,bind1st(less<int>(),*pivot));

        swap(*change,*pivot);
        reverse(rfirst,pivot);
        return true;
    }   
};

int main(){
    vector<int> arr ={6,8,7,4,3,2};
    Solution s;
    s.nextArr(arr);
    for(auto &i:arr){
        cout<<i<<" ";
    }
    return 0;
}