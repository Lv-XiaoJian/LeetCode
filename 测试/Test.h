#pragma once
#include "PermSort.h"
#include "Writer.h"
#include "BaoShuGame.h"
#include "FindeDuplication.h"

class CTest
{
public:
	CTest();
	virtual ~CTest();


private:
		CPermSort* m_pPers;
		CWriter* m_pWriter;
		CBaoShuGame* m_pGame;
		
	


protected:


public:
		void Test_1();
		void Test_2();

		void Test_3();
		bool DeletReStr(string* pData,int nLengh);

		void Test_4();
		void Test_5_1();
		void Test_5_2();

		void Test_6();
		template<typename T>
		void Merge_Sort(T* pArrage,T* pArrageNew, int nFirst, int nEnd); //πÈ≤¢≈≈–Ú µ›πÈ∞Ê
		

};