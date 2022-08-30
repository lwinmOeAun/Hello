#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int data=10;
    int* p=&data;
    int x[10]={1,2,3,4,5,8};
    printf(" the address off the p is %d\n",p);
    data=11;
    printf("The address of data is %d\n ",&data);
    printf(" the value of data is %d\n",data);
    printf("the address off the p is%d\n",&p);
    printf("the value of the  p is%d\n",*p);


    int* k=data;
    printf("the value of the  data is%d\n",data);
    printf("The address of data is %d\n ",&data);
  printf("the value of the  p is%d\n",&k);
    printf("the value of the  kis%d\n\n\n",k);
    data= x[3];
    int* f=&data;

    printf(" the address off the p is %d\n",p);

    printf(" the address off the f is %d\n",f);

    printf("The address of data is %d\n ",&data);
    printf(" the value of data is %d\n",data);
    printf("the address off the p is%d\n",&p);
    printf("the value of the  f +1 is%d\n",*f+1);


    return 0;

}
