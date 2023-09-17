#include<stdio.h>
#include<my_stack.h>
int main()
{
int success;
Stack *stk=createStack(&success);
int x=10;
int y=15;
int z=23;
pushOnStack(stk,&x,&success);
pushOnStack(stk,&y,&success);
pushOnStack(stk,&z,&success);
while(getSizeOfStack(stk)!=0)
{
int *num=popFromStack(stk,&success);
printf("number is : %d\n",*num);
}

return 0;
}