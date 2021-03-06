#ifndef __QCC_STDLIB__
#define __QCC_STDLIB__

typedef int size_t;
double atof(char *);
int atoi(char *);
double strtod(char *, char **);
void *calloc(size_t nitems, size_t size);
void free(void *);
void *malloc(size_t);
void *realloc(void *, size_t);
int abs(int);
int rand();
void srand(int);

#endif
