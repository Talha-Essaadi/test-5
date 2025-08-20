// c01 ex00
#include <stdio.h>

int main()
{
int x = 5;

int *ptr1 = &x;
ft_ft(ptr1);
printf("x : %d\n", x);
}
// c01 ex01

#include <stdio.h>

int main()
{
int x = 5;

int *ptr1 = &x;
int **ptr2 = &ptr1;
int ***ptr3 = &ptr2;
int ****ptr4 = &ptr3;
int *****ptr5 = &ptr4;
int ******ptr6 = &ptr5;
int *******ptr7 = &ptr6;
int ********ptr8 = &ptr7;

ft_ultimate_ft(&ptr8);
printf("x : %d\n",x );
}


// c01 ex02

#include <stdio.h>

int main() {
    // Write C code here
    int a = 1;
    int b = 2;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    ft_swap(&a ,&b);
    printf("a : %d\n", a);
    printf("b : %d\n", b);
 

    return 0;
}
//c01 ex03


#include <stdio.h>

int main() {
 
    int a = 98;
    int b = 10;
    int mod ;
    int div;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    ft_div_mod(a ,b, &div , &mod);
    printf("div : %d\n", div);
    printf("mod : %d\n", mod);
 

    return 0;
}
//c01 ex04


#include <stdio.h>

int main() {
 
    int a = 98;
    int b = 10;
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    ft_ultimate_div_mod(&a ,&b);
 
     printf("a : %d\n", a);
    printf("b : %d\n", b);

    return 0;
}
// c01 ex05



#include <stdio.h>

int main() {
 
    char *string1 = "012345678";
    ft_putstr(string1);
 


    return 0;
}
// c01 ex06


#include <stdio.h>

int main() {
 
    char *string1 = "012345678";
    int x = ft_strlen(string1);
    
    printf("x : %d\n", x);
 


    return 0;
}
// c01 ex07
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int x = 0;

    // Print the array before reversing
    while(x < 8) {
        printf("%d ", arr[x]);
        x++;
    }

    ft_rev_int_tab(arr, 8);
    printf("\n");

    // Print the array after reversing
    x = 0;
    while(x < 8) {
        printf("%d ", arr[x]);
        x++;
    }
    return 0;
}
// c01 ex08

#include <stdio.h>

int main() {

int arr[] = {6,4,3,8,2,9,1,5,7};
    int x = 0;

    // Print the array before reversing
    while(x < 8) {
        printf("%d ", arr[x]);
        x++;
    }

    ft_sort_int_tab(arr, 8);
    printf("\n");

    // Print the array after reversing
    x = 0;
    while(x < 8) {
        printf("%d ", arr[x]);
        x++;
    }
    return 0;
}
