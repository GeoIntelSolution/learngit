#include<bits/stdc++.h>
using namespace std;
template<typename BidIt>
bool next_permutate(BidIt first,BidIt end){
    auto rfirst=reverse_iterator<BidIt>(end);
    auto rlast =reverse_iterator<BidIt>(first);

    auto pivot = next(rfirst);
    while(pivot!=rlast&&*pivot>=*prev(pivot)) ++pivot;
    //special case
    if(pivot==rlast){
        reverse(rfirst,rlast);
        return false;
    }

    auto change =find_if(rfirst,pivot,bind1st(less<int>(),*pivot));
    swap(*pivot,*change);
    reverse(rfirst,pivot);
    return true;
}

int main(){
    vector<int> a={1,2,3,4};
    do{
        for(auto i :a){
            cout<<i<<" ";
        }
        cout<<"\n";
    }while(next_permutate(a.begin(),a.end()));
    return 0;
}