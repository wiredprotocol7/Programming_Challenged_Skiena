class Solution {
public:
    void constructcand(vector<int> arr, int k, int n, vector<int> &candidates)
{
    
    for (int i=0; i<n; i++)
    {
       bool legal=true;
       for (int j =0; j<arr.size(); j++)
       {   
         if (arr.size()!=0)
          { 
                if (abs((int)arr.size()-j)==abs(i-arr[j]))
                {
                    legal=false;
                    break;
                }
                if (i==arr[j])
                {
                    legal=false;
                    break;
                }
           }
       }

       if(legal)
       {
           candidates.push_back(i);
       }
    }

}

void recurse(vector<int>arr, int k, int &n, vector<vector<int>> &answer)
{
    vector<int> candidates;
    //cout<<k;
    if (k==n)
    { 
        answer.push_back(arr);
    }

    else
    {
        k+=1;
        constructcand(arr,k,n,candidates);
        if (candidates.size()==0)
        {
            return;
        }
        
        //cout<<"ARR"<<endl;printlist(arr);cout<<"candidates\n";printlist(candidates);
        arr.push_back(0);
        for (auto i : candidates)
        {
            arr.pop_back();
            arr.push_back(i);
            recurse(arr,k,n,answer);
        }
        
    }
}



vector<vector<string>> solve(int n)
{
   vector<int> arr;
   vector<vector<int>> answer;
   recurse(arr,0,n,answer);
   cout<<answer.size()<<endl;
   /*for (int j=0; j<answer.size();j++)
   {
       for (int i=0; i<answer[j].size(); i++)
       {
           answer[j][i]+=1;
       }
   }*/
  // return answer;
    vector<vector<string>> ans;
   for (auto a: answer)
   
   {
        vector<string> temp; 
        for (int j: a)
        { string s(n,'.');
            s[j]='Q';
            temp.push_back(s);

        }
        ans.push_back(temp);
       
   }
   
   return ans;
}
    vector<vector<string>> solveNQueens(int n) {
        return solve(n);
    }
};
