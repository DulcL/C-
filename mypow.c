/*
 * @Author: 杜隆超
 * @Date: 2022-01-17 18:10:51
 * @LastEditTime: 2022-01-18 09:51:15
 * @LastEditors: 杜隆超
 * @Description: 实现幂运算--使用递归和非递归
 * @FilePath: \day6\mypow.c
 * 以下代码仅代表个人想法
 */

#include <stdio.h>
//传统方法
int pow(int x,int y)
{
    int i = 1;
    while(y)    
    {
        i = x*i;
        y--;
    }
    return i;
}

//递归写法
int pow1(int x,int y)
{  
   static int i = 1;  //不使用静态函数情况，每次i都会初始化
   if(y == 0)         //当y等于0时返回计算结果
   return i;
   i = x*i;
   pow1(x,y-1);       //y递减1
}


//递归写法
int pow2(int x,int y)
{  
   if(y == 0)         //当y等于0时返回计算结果
     return 1;     
   return x*pow2(x,y-1);       //y递减1
}

int main()

{
    printf("pow:%d\n",pow(3,10));
    printf("pow1:%d\n",pow1(3,10));
    printf("pow2:%d\n",pow2(3,10));
    return 0;
}