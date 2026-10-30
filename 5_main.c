//202610302201
//安家亮
#include <stdio.h>
int main(void)
{
    float a,b；
    char op;
   
    scanf("%f%c%f",&a,&op,&b);
    if (op=='+')
    {
        printf("%.2f\n",a+b);
    }
    else if (op=='-')
    {
        printf("%.2f/n",a-b);    
    }
    else if (op=='*')
    {
        printf("%2.f\n",a*b);
    }
    else if (op=='/')
    {
        if (b==0)
        {printf("错误：0不能作除数\n")   
            }
        else
 {
         printf("%.2f\n",a/b);
    }
    }
    else
{
    printf("错误：不支持的运算符\n");
}
return 0;
}
