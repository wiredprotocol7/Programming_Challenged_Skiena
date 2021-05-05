#include <bits/stdc++.h>
typedef long long lint;
typedef vector<int> vect;
typedef pair<int,int> tuple;


using namespace std;
void printlist(vector<lint> &dummy){
    for (lint a: dummy)
    {
        cout<<a<<" ";
    }
    cout<<'\n';
}

void construct_candidates(vector<lint> arr,lint k, lint t, vector<lint> &candidate,lint &cand_count);
{

}

bool is_solution(vector<lint> &arr,lint k, lint t)
{
  return true;
}

void backtrack(vector<lint>  arr,lint k, lint t)
{
    vector<lint> candidate;
    lint cand_count=0;

    if (is_solution(arr,k,t))
    {
        printlist(arr);

    }
    else
    {
        k++;
        construct_candidates(arr,k,t,candidate,cand_count);
        for(lint i=0;i<cand_count; i++ )
        {
            a[k]=candidate[i];
            backtrack(arr,k,t);
        }


    }


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


}
