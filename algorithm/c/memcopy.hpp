#pragma once

//实现memcopy(void *dest,const void *src, size_t n)

//内存重叠
/*	
		     des
  ---------------------------
  |  1 |  2 | 3  |  4  | \0 |
  ---------------------------
    src

 =======================================
 非内存重叠
 
   des
  ---------------------------
  |  1 |  2 | 3  |  4  | \0 |
  ---------------------------
         src

非内存重叠

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