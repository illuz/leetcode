//Using iterator& sort
#include"stdafx.h"
#include<iostream>  
#include<vector>
#include<algorithm>
using namespace std;
// this is used to remember the original  order
class NumSerial
{
public:
	int oriNum;
	int data;
	NumSerial(int ori , int dta)
	{
		oriNum=ori;
		data=dta;
	}
	bool operator < (const NumSerial & rt)  
	{  
		return this->data < rt.data;  
	} 
	~NumSerial()
	{

	}
};


//solution 1  sort+above&bottom indicator
class Solution {
public:
	Solution()
	{

	}
	~Solution()
	{


	}

	vector<int> twoSum(vector<int>& nums, int target) {
		//this is for oriIndex and data 
		vector<NumSerial> numBlock;
		int index=1;
		for(vector<int>::iterator temp=nums.begin();temp<nums.end();temp++)
		{
			numBlock.push_back(NumSerial(index,*temp));
			index++;
		}
		// initialize complete ready for sort
		sort(numBlock.begin(), numBlock.end());  
		/*
		for(vector<NumSerial>::iterator temp=numBlock.begin();temp<numBlock.end();temp++)
		{
		cout<< temp->data<<" ";
		}
		*/
		vector<NumSerial>::iterator forIt=numBlock.begin();//forward it
		vector<NumSerial>::reverse_iterator behIt=numBlock.rbegin();//behind it
		while( forIt->oriNum!=behIt->oriNum)
		{
			if(forIt->data+behIt->data>target)
			{
				behIt++;
			}
			else if (forIt->data+behIt->data<target)
			{
				forIt++;
			}
			else
			{
				vector<int> returnVec;

				returnVec.push_back(forIt->oriNum);
				returnVec.push_back(behIt->oriNum);
				sort(returnVec.begin(), returnVec.end());  
				return  returnVec;
			}
		}
		vector<int> returnVecNo;
		return  returnVecNo;
	}

};
