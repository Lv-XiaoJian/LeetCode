#pragma once
#include "Writer.h"
#include <stdlib.h>

int CWriter::MaxArea(int* pData,int nCount)
{
	int nTemp;
	int* pFirst = pData;
	int* pEnd = pData + nCount - 1;
	int nMinY = min(*pFirst,*pEnd);
	int nX = pEnd - pFirst;
	int nMaxArea = nMinY*nX;
	while(pEnd > pFirst)
	{
		if (*pFirst > *pEnd)
			pEnd--;
		else
		{
			pFirst++;
		}
		nX--;
		nMinY = min(*pFirst,*pEnd);
		nTemp = nMinY * nX;
		nMaxArea = max(nMaxArea,nTemp);
	}
	return nMaxArea;
}