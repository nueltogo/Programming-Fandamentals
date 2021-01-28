#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

namespace my {
int strcmp(const char *R, const char *L);
}

namespace my {
int strlen(const char *s);
}

namespace my {
char *strcat(char *L, const char *R);
}

namespace my {
char *strcpy(char *L, const char *R);
}

namespace my {
char *toupper(char *s);
}

#endif /* MYSTRING_H */
