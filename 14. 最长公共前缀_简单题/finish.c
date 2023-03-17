/*#include<stdio.h>
#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    char flag = strs[0][0];
    int i=0,j,k;
    while (strs[0][i] !='\0')
    {
        k = 0;
        for(j=1;j<strsSize;j++)
        {
            if(strs[j][i]!=flag)
            {
                k = 1;
            }
        }
        if(k==0)
        {
            i++;
            flag = strs[0][i];
        }
        else if(k==1)
        {
            strs[0][i] = '\0';
            break;
        }
    }
    return strs[0];
}
int main()
{
    char t[100];
    char *n[] = {"flower","flow","flight"};
    char *result = longestCommonPrefix(n,3);
    strcpy(t,result);
    printf("%s \n",t);
}
*/
#include<stdio.h>
#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize){
    char flag = strs[0][0];
    int i=0,j,k;
    while (strs[0][i] !='\0')
    {
        k = 0;
        for(j=1;j<strsSize;j++)
        {
            if(strs[j][i]!=flag)
            {
                k = 1;
            }
        }
        if(k==0)
        {
            i++;
            flag = strs[0][i];
        }
        else if(k==1)
        {
            strs[0][i] = '\0';
            break;
        }
    }
    return strs[0];
}

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;
    char t[100];
    char *result = longestCommonPrefix(strs, strsSize);
    strcpy(t, result);
    printf("%s \n", t);
    return 0;
}
