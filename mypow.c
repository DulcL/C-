/*
 * @Author: ��¡��
 * @Date: 2022-01-17 18:10:51
 * @LastEditTime: 2022-01-18 09:51:15
 * @LastEditors: ��¡��
 * @Description: ʵ��������--ʹ�õݹ�ͷǵݹ�
 * @FilePath: \day6\mypow.c
 * ���´������������뷨
 */

#include <stdio.h>
//��ͳ����
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

//�ݹ�д��
int pow1(int x,int y)
{  
   static int i = 1;  //��ʹ�þ�̬���������ÿ��i�����ʼ��
   if(y == 0)         //��y����0ʱ���ؼ�����
   return i;
   i = x*i;
   pow1(x,y-1);       //y�ݼ�1
}


//�ݹ�д��
int pow2(int x,int y)
{  
   if(y == 0)         //��y����0ʱ���ؼ�����
     return 1;     
   return x*pow2(x,y-1);       //y�ݼ�1
}

int main()

{
    printf("pow:%d\n",pow(3,10));
    printf("pow1:%d\n",pow1(3,10));
    printf("pow2:%d\n",pow2(3,10));
    return 0;
}