#pragma once
#include "PermSort.h"
#include "Writer.h"

class CTest
{
public:
	CTest();
	virtual ~CTest();


private:
		CPermSort* m_pPers;
		CWriter* m_pWriter;
	


protected:


public:
		void Test_1();
		void Test_2();

		//void Test_3();
		//bool DeletReStr(string* pData,int nLengh);


};