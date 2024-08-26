// You have a set of integers s , which originally contains all the numbers from 1 to n .
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number
// in the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form
// of an array. [Leetcode 645]
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1]
// Output: [1,2]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[4]={1,2,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
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
        if(i+1 != arr[i] )
        {
            v.push_back(arr[i]);
            v.push_back(i+1);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    

    
}