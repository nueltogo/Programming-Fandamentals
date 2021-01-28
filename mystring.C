#include <iostream>
#include "mystring.h"

namespace my {
int strcmp(const char *R, const char *L)
{
	while(*R)
	{
		if (*R != *L)
		{
			break;
		}
		R++;
		L++;
	}
	int val;

     	val = *(const unsigned char*)R - *(const unsigned char*)L;
	if(val < 0)
	{
		return -1;
	}
	else if(val > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
}

namespace my{
int strlen(const char *s)
{
	int count {0};
	while(*s)
	{
		count++;
		s++;
	}
	return count;
}
}

namespace my{
char *strcat(char *L, const char *R)
{
	char *current_ptr = L+strlen(L);
	while(*R !='\0')
	{
		*current_ptr++ = *R++;
	}
	*current_ptr = '\0';
	return L;
}
}

namespace my{
char *strcpy(char *L, const char *R)
{
	if(L == NULL)
	{
		return NULL;
	}

	char *current_ptr = L;
	while(*R != '\0')
	{
		*L++ = *R++;
	}
	*L = '\0';
	return current_ptr;
}
}

namespace my{
char *toupper(char *s)
{
	char *current_ptr = s;
	const int x = 32;
	while(*s != '\0')
	{
		if(*s != ' ')
		{
			*s = *s & ~x;
		}
		s++;
	}
	return current_ptr;
}
}
