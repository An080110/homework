//202610302201
//安家亮
#include <stdio.h>
int main()
{
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    if (op=='+')
    {
        printf("%.1f"\n,a+b);
    }
    else if (op=='-')
    {
        printf("%.1f"\n,a-b);    
    }
    else if (op=='/')
    {
    if (b==0)
    {
        printf("错误:除数不能为0"\n);
    }
    else
    {
         printf("%.1f"\n,a/b);
    }
}
else if (op=='*')
{
    printf("%.1f"\n,a*b);
}
else
{
    printf("不支持的运算符"\n);
}
return 0;
}
