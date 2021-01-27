#include <iostream>
#include "mystring.h"



	int strlen2(const char *s)
	{
		int num {0};
		while(*s != '\0')
		{
			num++
		}
		return num;
	}

	int strcmp2(const char *l, const char *r)
	{
		size_t l_len = strlen2(l);
		size_t r_len = strlen2(r);
		if(l_len > r_len)
		{
			int n = l_len;
			char *temp = l;
		}
		else
		{
			int n = r_len;
			char *temp = r;
		}

		size_t i;
		
		for(i=0; i < n && temp[i] != '\0' ; i++)
		{
			int ascii_num_l = (int) *l;
			int ascii_num_r = (int) *r;
			if( ascii_num_l < ascii_num_r)
			{
				return -1;
			}
			else if(ascii_num_l > ascii_num_r)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

