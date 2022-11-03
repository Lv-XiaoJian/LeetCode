#pragma once
class FindeDuplication
{
public:
	/*找出重复数字
	一个长度为n的数组里的所有数字都在0——n-1的范围内，数组中某些数字是重复的，但不知道有几个数字重复了，
	也不知道每个数字重复了几次，请找出数组中任意一个重复的数字，例如：如果输入的 长度为7的数组
	{2，3，1，0，2，5，3}，那么对应的输出重复的数字是2或3*/

	//查找重复的数（查找数组，数组长度，该重复数存储）
	bool FindReContains(int* numbers, int length, int* RecordRenumber);//时间复杂度 n   空间复杂度1
 	
																 
	/*不修改数组找出重复的数字（查找数组，数组长度）ssss*/
	bool FindReContainsNoEdit(int* numbers, int length);
	bool FindReContainsNoEdit_Back(int Start, int End, int* numbers, int nSize);
};

