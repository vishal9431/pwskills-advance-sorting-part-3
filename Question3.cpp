// Given an integer array nums of length n where all the integers of nums are in the range [1,
// n] and each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1,2]
// Output: [1]
// Example 3:
// Input: nums = [1]
// Output: []
#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int>&arr)
{
    int n= arr.size();
    for(int i=0;i<n;i++)
    {
        while(arr[i]!=arr[arr[i]-1])
        {
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(i+1!=arr[i])v.push_back(arr[i]);
    }
    return v;
}
int main()
{
    vector<int>v={4,3,2,7,8,2,3,1};
    int n= 8;
    vector<int> ans=findDuplicates(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}