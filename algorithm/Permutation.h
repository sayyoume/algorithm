#pragma once
//无重复全排列模板

void Permutation(char* pStr, char* pBegin)
{
	if (*pBegin == '\0')
		printf("%s\n", pStr);
	else
	{
		for (char* pCh = pBegin;*pCh !='\0';pCh++)
		{
			swap(*pBegin, *pCh);
			Permutation(pStr, pBegin + 1);
			swprintf_s(*pBegin, *pCh);
		}
	}
}

//组合模板
