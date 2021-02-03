#pragma once

//ʵ��memcopy(void *dest,const void *src, size_t n)

//�ڴ��ص�
/*	
		     des
  ---------------------------
  |  1 |  2 | 3  |  4  | \0 |
  ---------------------------
    src

 =======================================
 ���ڴ��ص�
 
   des
  ---------------------------
  |  1 |  2 | 3  |  4  | \0 |
  ---------------------------
         src

���ڴ��ص�

									 des
   ----------------------------------------
  |  1 |  2 | 3  |  4  | \0 | ... | unkown |
  -----------------------------------------
    src 
 */


void* memcopy(void* dest, const void* src, size_t n) {
	char *p1 = dest;
	const char* p2 = src;
	if (p2 < p1) //(src <dest)
	{
		p2 += n;
		p1 += n;
		while (n-- != 0)
			*--p1 = *--p2;
	}
	else {
		while (n-- != 0)
			*p1++ = *p2++;
	}
	return p1;
}