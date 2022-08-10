#include "PermSort.h"
void CPermSort::PermSort(int* pData,int nStart,int nLengh)
{
	if (pData == NULL )
		return;
	if (nStart == nLengh)
	{
		cout <<*pData;
		for (int i= 1;i < nLengh;i++)
		{
			pData++;
			cout << " "<<*pData;
		}
		cout<<endl;
	}
	else
	{
		for (int i = nStart; i < nLengh; i++)
		{
			Swap(&pData[nStart],&pData[i]);
			PermSort(pData,nStart+1,nLengh);
			Swap(&pData[nStart],&pData[i]);
		}
		
	}

	return;
}
void CPermSort::Swap(int* pData_1,int* pData_2)
{
	int nTemp;
	nTemp = *pData_1;
	*pData_1 = *pData_2;
	*pData_2 = nTemp;
	return;
}