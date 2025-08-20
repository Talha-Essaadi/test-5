# c02 ex09

#include <stdio.h>
int main()
{       
        char string[] = "hi, how are you? 42words forty-two; fifty+and+oneHELLO_CoderS";
        printf("string 1: %s\n", string);
        char string2[]  = ft_strcapitalize(string);
        printf("string 2: %s\n", string2);

}

# c02 ex11
void    convert_base_to_hexadecimal(char c)
{
        char hexadecimal[] = "0123456789abcdef" ;
}

void    ft_putstr_non_printable(char *str)
{
        while (str[i])
        {
                if (str[i] < 32 || str[i] > 126)
                {
                        convert_base_to_hexadecimal(str[i]);
                }
                i++;
        }
}

int main()
{
        char string[] = "Hello\nHow are you?";
       ft_putstr_non_printable(string);
}
# c03 ex01


#include <stdio.h>
#include <string.h>
int main()
{
int n = 2;
char src[] = "talhaessaadi";
char dest[] = "talhkikoWh";
char x = ft_strncmp(src, dest, n);
printf("returned value : %d\n",x);
x = strncmp(src, dest, n);
printf("returned value : %d\n",x);

n = 12;
char s1[] = "";
char s2[] = "hello world";
x = ft_strncmp(s1, s2, n);
printf("returned value : %d\n",x);
x = strncmp(s1, s2, n);
printf("returned value : %d\n",x);


n = 2;
char st1[] = "hey 12345";
char st2[] = "" ;
x = ft_strncmp(st1, st2, n);
printf("returned value : %d\n",x);
x = strncmp(st1, st2, n);
printf("returned value : %d\n",x);


}
# c03 ex03
#include <stdio.h>
#include <string.h>
int main()
{
char src[] = "0123456789";
char dest[] = "";

char *string = ft_strlcat(src, dest);
printf("string : %s\n",string);
}

# c03 ex04

#include <stdio.h>
#include <string.h>
int main()
{
printf("test #1\n");
char h1[] = "HelloWorld";
char h2[] = "lo";

char *string = ft_strstr(h1 , h2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);
string = strstr(h1, h2);
if (string == NULL)
    printf("we dont found the needle in haystack!");
printf("string : %s\n",string);

printf("test #2\n");
char s1[] = "";
char s2[] = "hello world";
string = ft_strstr(s1, s2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);
string = strstr(s1, s2);
if (string == NULL)
    printf("we dont found the needle in haystack!");
printf("string : %s\n",string);

printf("test #3\n");
char st1[] = "heelo world";
char st2[] = "";
string = ft_strstr(st1, st2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);
string = strstr(st1, st2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);

printf("test #4\n");
char str1[] = "ok daccord";
char str2[] = "heelo world";
string = ft_strstr(str1, str2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);
string = strstr(str1, str2);
if (string == NULL)
    printf("we dont found the needle in haystack!");
printf("string : %s\n",string);

printf("test #5\n");
char str_1[] = "";
char str_2[] = "";
string = ft_strstr(str_1, str_2);
if (string == NULL)
    printf("1we dont found the needle in haystack!");
printf("string : %s\n",string);
string = strstr(str_1, str_2);
if (string == NULL)
    printf("we dont found the needle in haystack!");
printf("string : %s\n",string);

}



# c03 ex05
#include <stdio.h>
#include <string.h>
int main()
{

char src[] = "012";
char dest[] = "01234";
int y = ft_strlen(src);
printf("y : %d\n", y);




int returned_size  = ft_strlcat(dest, src, sizeof(dest));

printf("dest : %s\n",dest);
printf("returned_size %d\n", returned_size);
int last_index = sizeof(dest) - 1;
printf("last_index : %d\n", last_index);
if (dest[last_index] == '\0')
	printf("dest has null terminator \n");
}
