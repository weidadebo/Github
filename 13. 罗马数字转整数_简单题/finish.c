#include<stdio.h>
#include<string.h>
int romanToInt(char *s)
{
    int t = strlen(s);
    int i,k;
    int num=0;
    int a[16];
    for(i=0;i<t;i++)
    {
        switch (s[i])
        {
        case'I':a[i]=1;break;
        case'V':a[i]=5;break;
        case'X':a[i]=10;break;
        case'L':a[i]=50;break;
        case'C':a[i]=100;break;
        case'D':a[i]=100;break;
        }
       // printf("%d \n",a[i]);
    }                           //在这里用一个switch来分开s中的字母
    for(i=0;i<t;i++)
    {
        if (a[i]>=a[i+1])
        {
            num += a[i];
        }
        else
        {
            num += a[i+1]-a[i];
            i++;                //这里++的意思是跳过第IV，不需要再判断V和后面的字母，因为在这里将IV看作一个整体
        }
    }
    return num;
}
int main()
{

    int h = romanToInt("IVII");
    printf("%d \n",h);
    return 0;

}
//这个算法的实现是这样实现的，首先将s中的各个字母所对应的值取出来放入一个一维数组中，然后判断一维数组的字母所对应的num，要注意IV,IX等。