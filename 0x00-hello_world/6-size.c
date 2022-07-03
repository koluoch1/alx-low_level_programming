#include <stdio.h>
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of a char: %1lu byte(s)\n", (unsigned long)sizof(d));
printf("size of an int: %1lu byte(s)\n", (unsigned long)sizof(a));       
printf("size of a long int: %1lu byte(s)\n", (unsigned long)sizof(b));
printf("size of a long long int: %1lu byte(s)\n", (unsigned long)sizof(d));       
printf("size of a float: %1lu byte(s)\n", (unsigned long)sizof(f)); 
return(0);
}
