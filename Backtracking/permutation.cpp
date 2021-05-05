#include <bits/stdc++.h>
typedef long long lint;
using namespace std;


void printlist(vector<lint> &dummy){
    for (lint a: dummy)
    {
        cout<<a<<" ";
    }
    cout<<'\n';
}

void construct_candidates(vector<lint> arr, vector<lint> &candidate,lint &cand_count, vector<lint> &input)
{
    for ( lint j : input)
    {
    
        auto temp=find(arr.begin(),arr.end(),j);
        if (temp==arr.end())
        {
            candidate.push_back(j);
            cand_count++;
        }
    }


}

bool is_solution(vector<lint> &arr,lint k, lint t)
{ if (k==t)
    {return true;}
  
  return false;

}

void backtrack(vector<lint>  arr,lint k, lint t, vector<lint> &input)
{
    vector<lint> candidate{};
    lint cand_count=0;
    
    if (is_solution(arr,k,t)==true)
    {
        printlist(arr);
        

    }
    else
    {   
        k++;
        construct_candidates(arr,candidate,cand_count, input);
        arr.push_back(0);
        for(lint i=0;i<cand_count; i++ )
        {
            
            arr.pop_back();
            arr.push_back(candidate[i]);
            backtrack(arr,k,t,input);
        }

    }


}

void permute(vector<lint> &input)
{
    vector<lint> arr {};
    backtrack(arr,0,input.size(),input);

}

int main() 

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lint t; cin >>t;

    vector<lint> input;

    while (t--)
    {
        lint _ ;
        cin>>_;
        input.push_back(_);
        

    }

    permute(input);

}
