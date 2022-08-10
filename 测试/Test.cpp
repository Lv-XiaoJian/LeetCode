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
};

CTest::~CTest()
{
	if(m_pPers)
		delete m_pPers;
	if(m_pWriter)
		delete m_pWriter;

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

//void CTest::Test_3()
//{
//	string cTemp;
//	cout <<"请输出少于100个大写字母串"<<endl;
//	cin >> cTemp;
//	int nCount = cTemp.length();
//	if (DeletReStr(&cTemp,nCount))
//		cout << "Yes";
//	else
//		cout << "No";
//	cout << endl;	
//}
//bool DeletReStr(string* pData,int nLengh)
//{
//	for(int i =0; i < nLengh -1;i++)
//	{
//		if (pData[i] == pData[i +1])
//		{
//			pData->erase(i);
//			pData->erase(i+1);
//		}
//	}
//
//}
int main()
{
  	CTest go;
//  go.Test_1();
// 	go.Test_2();
//	go.Test_3();
	system("pause");
	return EXIT_SUCCESS;
}

