#include "main.h"

void _putchar(char c)
{
    write(1, &c, 1);
}

// int main(void)
// {
//     int n;

//     n = 402;
//     printf("n=%d\n", n);
//     reset_to_98(&n);
//     printf("n=%d\n", n);
//     return (0);
// }

// int main(void)
// {
//     int a;
//     int b;

//     a = 98;
//     b = 42;
//     printf("a=%d, b=%d\n", a, b);
//     swap_int(&a, &b);
//     printf("a=%d, b=%d\n", a, b);
//     return (0);
// }

// int main(void)
// {
//     char *str;
//     int len;

//     str = "My first strlen!";
//     len = _strlen(str);
//     printf("%d\n", len);
//     return (0);
// }

// int main(void)
// {
//     char *str;

//     str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
//     _puts(str);
//     return (0);
// }

// int main(void)
// {
//     char *str;

//     str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
//     print_rev(str);
//     return (0);
// }

// int main(void)
// {
//     // char s[10] = "My School";
//     char s[10] = "Hamidou";

//     printf("%s\n", s);
//     rev_string(s);
//     printf("%s\n", s);
//     return (0);
// }

// int main(void)
// {
//     char *str;

//     str = "0123456789";
//     puts2(str);
//     return (0);
// }

// int main(void)
// {
//     int array[5];

//     array[0] = 98;
//     array[1] = 402;
//     array[2] = -198;
//     array[3] = 298;
//     array[4] = -1024;
//     print_array(array, 5);
//     return (0);
// }

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
