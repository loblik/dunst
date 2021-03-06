#ifndef UTIL_H
#define UTIL_H
/* remove spaces before and after str */
char *rstrip(char *str);
char *lskip(char *str);

/* replace needle with replacement in haystack */
char *string_replace(const char *needle, const char *replacement,
                     char *haystack);

/* exit with an error message */
void die(char * msg, int exit_value);

int digit_count(int i);

#endif

/* vim: set ts=8 sw=8 tw=0: */
