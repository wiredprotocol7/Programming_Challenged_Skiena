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

void construct_candidates(vector<lint> arr,lint k, vector<lint> &candidate,lint &cand_count, vector<lint> &input)
{   int i=0;


    
    for ( lint j : input)
    {
    
        
        if (i>=k)
        {
            candidate.push_back(j);
            cand_count++;
        }
        i++;
    }


}

bool is_solution(vector<lint> &arr,lint k, lint t)
{ if (k<=t)
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
    

       
        construct_candidates(arr,k,candidate,cand_count, input);
        arr.push_back(0);
         k++;
         int temp=-1;
        for(lint i=0;i<cand_count; i++ )
        {
            
            arr.pop_back();
            temp++;
            arr.push_back(candidate[i]);
            backtrack(arr,k+temp,t,input);
        }
     

    


}

void getsubset(vector<lint> &input)
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

    getsubset(input);

}
