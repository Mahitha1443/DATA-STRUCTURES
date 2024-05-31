#include <iostream>
#include<vector>
using namespace std;


int removeElement(vector<int>& nums, int val);//Declating the method
int main()
{
    vector<int> nums ;
    for(int i =0;i<5;i++)
    {
    nums.push_back(i);
    }
    
    int val = 2;
    int k= removeElement(nums, val);
    /*to test the code*/
    for(int i =0;i<nums.size();i++)
    {
    cout <<nums[i] << " ";
    }
    /*to test the code*/
    
}
int removeElement(vector<int>& nums, int val) {

         int si = nums.size();   
        for(int su =0;su<=si;su++)
        {      
            for(int p=0;p<nums.size();p++)
            {
                
                if(nums[p] == val)
                {
                    nums.erase(nums.begin()+p);
                    si--;
                    su -=2;
                    break;
                }
               
            }

        }

        int k = nums.size();
        return k;

    
}