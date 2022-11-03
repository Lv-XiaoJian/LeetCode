#pragma once
#include <iostream>
#include "FindeDuplication.h"
using namespace std;

bool FindeDuplication::FindReContains(int* numbers, int length, int* RecordReNumber)
{
	int* begain = numbers;
	if (numbers == nullptr || length <= 0)
		return false;
	for (int i = 0; i < length; i++,begain++)
	{
		if (*begain < 0 || *begain >= length)
			return false;
	}
	begain = numbers;
	for (int i = 0; i < length; i++, begain++)
	{
		while (*begain != i)
		{
			if (*begain == numbers[*begain])
			{
				*RecordReNumber = *begain;
				RecordReNumber++;
				break;
			}

			int Temp = *begain;
			*begain = numbers[Temp];
			numbers[Temp] = Temp;
		}

	 }

}

bool FindeDuplication::FindReContainsNoEdit(int* numbers, int length)
{
	int* begain = numbers;
	if (numbers == nullptr || length <= 0)
		return false;
	for (int i = 0; i < length; i++, begain++)
	{
		if (*begain < 0 || *begain >= length)
			return false;
	}
	begain = numbers;
	FindReContainsNoEdit_Back(1,length - 1, numbers,length);
}

bool FindeDuplication::FindReContainsNoEdit_Back(int Start, int End, int* numbers, int nSize)
{
	int nCount = 0,nLength = End - Start + 1,nMid = (Start + End) / 2;
	if (Start > End)
		return false;
	for (int i = 0; i < nSize; i++)
	{
		if (numbers[i] >= Start && numbers[i] <= End)
			nCount++;
	}
	if (nCount > nLength)
	{
		if (Start == End)
		{
			cout << "ÖØ¸´Êý×Ö:" << Start <<"\n" << endl;
			return true;
		}
		FindReContainsNoEdit_Back(Start, nMid, numbers, nSize);
		FindReContainsNoEdit_Back(nMid + 1, End, numbers, nSize);
	}
	return true;

}