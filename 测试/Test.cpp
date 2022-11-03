#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL
#pragma once
#include <iostream>
#include <afxtempl.h>
#include <afxcoll.h>
#include <string>
#include "Test.h"
using namespace std;



typedef CArray<int,int> CIntArray;

CTest::CTest()
{
	m_pPers = new CPermSort;
	m_pWriter = new CWriter;
	m_pGame = new CBaoShuGame;
};

CTest::~CTest()
{
	if(m_pPers)
		delete m_pPers;
	if(m_pWriter)
		delete m_pWriter;
	if (m_pGame)
		delete m_pGame;

}
//全排列
void CTest::Test_1()
{
	int a[] = {1,2,3,4};
	m_pPers->PermSort(a,0,4);
}


//最多水的容器
void CTest::Test_2()
{
	int a[] = {1,8,6,2,5,4,8,3,7};
	int nMax = m_pWriter->MaxArea(a,sizeof(a)/sizeof(int));
	cout << nMax << endl;
}

void CTest::Test_3()
{
	string cTemp;
	cout <<"请输出少于100个大写字母串"<<endl;
	cin >> cTemp;
	int nCount = cTemp.length();
	if (DeletReStr(&cTemp,nCount))
		cout << "Yes";
	else
		cout << "No";
	cout << endl;	
}
bool CTest::DeletReStr(string* pData,int nLengh)
{
	if (nLengh == 0)
		return true;
	int nTemp = 0;
	for(string::iterator ptr_First = pData->begin(); ptr_First < pData->end(); )
	{
		string::iterator ptr_Next = ptr_First + 1;
		if (ptr_Next == pData->end())
			break;
		if (*ptr_First == *ptr_Next)
		{
			pData->erase(nTemp,1);
			pData->erase(nTemp,1);
			DeletReStr(pData, nLengh - 2);
			if (!pData->length())
				return true;
			continue;
		}
		++ptr_First;
		++nTemp;
	}
	if (pData->empty())
		return true;
	return false;

}

void CTest::Test_4()
{
	cout << "亲输入大于1切小于100的整数" << endl;
	int nNum;
	cin >> nNum;
	if (nNum <= 1 || nNum > 100)
		cout << "ERROR" << endl;
	else
		m_pGame->GamePlay(nNum);
}


void CTest::Test_5_1()
{
	int a[] = { 2,3,1,0,2,5,3 };
	int* record = new int[10]();
	FindeDuplication m_pFinder;
	m_pFinder.FindReContains(a, sizeof(a) / sizeof(a[0]), record);
	while (*record != 0)
	{
		cout << "重复数字" << *record << "\n" << endl;
		record++;
	}
	delete[] record;
	return;
}
void CTest::Test_5_2()
{
	FindeDuplication m_pFinder;
	int a[] = { 2,3,4,5,3,2,6,7 };
	m_pFinder.FindReContainsNoEdit(a, sizeof(a) / sizeof(a[0]));
	return;
}
int main()
{
  	CTest go;
//  go.Test_1();
// 	go.Test_2();
//	go.Test_3();
//	go.Test_5_1();
//	go.Test_5_2();
	system("pause");
	return EXIT_SUCCESS;
}

