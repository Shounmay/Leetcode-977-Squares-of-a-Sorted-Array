#include<iostream>
#include<vector>

using namespace std;









class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int neg_ind=-1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)break;
            neg_ind++;
        }
        vector<int>neg;
        
        for(int i=neg_ind;i>=0;i--){
            int num=nums[i];
            neg.push_back(num*num);
        }
        
        if(neg_ind==nums.size()-1)return neg;
        
        vector<int>pos;
        for(int i=neg_ind+1;i<nums.size();i++){
            int num=nums[i];
            pos.push_back(num*num);
        }
        if(neg_ind==-1)return pos;
        
        vector<int>final;
        
        int i=0,j=0;
        while(i<neg.size() && j<pos.size()){
            int a=neg[i],b=pos[j];
            if(a<b){
                final.push_back(a);
                i++;
            }
            
            else{
                final.push_back(b);
                
                if(a==b){
                    final.push_back(a);
                    i++;
                    
                }
                j++;
            }
        }
        
        while(i<neg.size())final.push_back(neg[i++]);
        while(j<pos.size())final.push_back(pos[j++]);
        return final;
        
    }
};