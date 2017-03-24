#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char num1[51];
    scanf("%s",num1);
    double num3;
    double count=0;
    for(int i=0;i<(strlen(num1));i++)
    {
        if(num1[i]=='2')
        count++;
    }
    int len;
    len=strlen(num1);
    if(num1[0]=='-'&&(num1[len-1]=='0'||num1[len-1]=='2'||num1[len-1]=='4'||num1[len-1]=='6'||num1[len-1]=='8'))
    {
        num3=count/(len-1)*1.5*2*100;
    }
    else if(num1[0]=='-')
    {
        num3=count/(len-1)*1.5*100;
    }
    else if(num1[0]!='-')
    {
        num3=count/len*100;
    }
    printf("%.2f%%",num3);
    return 0;
}
