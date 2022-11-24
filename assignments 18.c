/* 1
#include<stdio.h>
int lenght(char str[]);
int main()
{
    char str[50];
    printf("enter the string");
    gets(str);
    int l;
    l=lenght(str);
    printf("\n lenght of give string %d",l);
    return 0;
}
int lenght(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}*/
/* 2
#include<stdio.h>
void reverse(char str[]);
int main()
{
    char str[100];
    printf("enter the string");
    gets(str);
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    int i,l;
    char ch;
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("\n reverse string\n");
    printf("%s",str);
}*/
/* 3
#include<stdio.h>
int compare(char a[],char b[]);
int main()
{
    char a[50],b[50];
    printf("enter the first string");
    gets(a);
    printf("\nenter the second string");
    gets(b);
    int x;
    x=compare(a,b);
    if(x==0)
        printf("string are equal ");
    else
        printf("string are not a equal");
    return 0;
}
int compare(char a[],char b[])
{
    int i=0;
    while(a[i]!='\0'||b[i]!='\0')
    {
        if(a[i]!=b[i])
            return 1;
            i++;
    }
    return 0;
}*/
/* 4
 #include<stdio.h>
 void upper(char str[]);
 int main()
 {
     char str[50];
     printf(" enter the string ");
     gets(str);
     upper(str);
     return 0;
 }
 void upper(char str[])
 {
     int i;
     for(i=0;str[i];i++)
     {
         if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
     }
     printf("\n%s",str);
 }*/
/* 5
 #include<stdio.h>
 void lower(char str[]);
 int main()
 {
     char str[50];
     printf("enter the string");
     gets(str);
     lower(str);
     return 0;
 }
 void lower(char str[])
 {
     int i;
     for(i=0;str[i];i++)
     {
         if(str[i]>='A'&&str[i]<='Z')
         str[i]=str[i]+32;
     }
     printf("\n lowercase\n");
     printf("%s",str);
 }*/
/* 6
 #include<stdio.h>
 int alphanumeric(char str[]);
 int main()
 {
     char str[50];
     printf("enter the string ");
     gets(str);
     int x;
     x=alphanumeric(str);
     if(x==1)
        printf("\nstring is a alphanumeric");
     else
        printf("\n not alphanumeric");
     return 0;
 }
 int alphanumeric(char str[])
 {
     int i,a=0,d=0;
     for(i=0;str[i];i++)
     {
         if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            a=1;
         if(str[i]>='0'&&str[i]<='9')
            d=1;
     }
     if(a==1&&d==1)
     return (a,d);
 }*/
/* 7
 #include<stdio.h>
 int palidrome(char str[]);
 int main()
 {
     char str[50];
     printf("enter the string ");
     gets(str);
     int x;
     x=palidrome(str);
     if(x==1)
        printf("palidrome");
     else
        printf("not palidrome");
     return 0;
 }
 int palidrome(char str[])
 {
     int i,l;
     for(l=0;str[l];l++);
     for(i=0;i<l/2;i++)
     {
         if(str[i]!=str[l-1-i])
            return 0;
     }
     return 1;
 }*/

/* 8
#include<stdio.h>
int words(char str[]);
int main()
{
    char str[50];
    printf("enter the string ");
    gets(str);
    int x;
    x=words(str);
    printf("total words %d",x);
    return 0;
}
int words(char str[])
{
    int i,count=1;
    for(i=0;str[i];i++)
    {
        if(  str[i]==' '&&str[i+1]!=' ')
            count++;
    }
    return count;
}*/

/* 9
#include<stdio.h>
void swap(char str[],int start,int end);
int main()
{
    char str[50];
    printf("enter the string ");
    gets(str);
    int i=0,start=0,end=0,flag=0;
    while(str[i]!='\0')
    {
        while(str[i]!=' ')
        {
            if(str[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(str,start,end-1);
        if(flag==1)
            break;
        start=end++;
        i++;
    }
    swap(str,0,i-1);
    printf("\n %s",str);
    return 0;
}
void swap(char str[],int start,int end)
{
    char ch;
    while(start<=end)
    {
         ch=str[start];
         str[start]=str[end];
         str[end]=ch;
         start++;
         end--;
    }
}*/

#include<stdio.h>
void repeated(char str[],int freq[]);
int main()
{
    char str[50];
    printf("enter the string ");
    gets(str);
    int freq[150]={0};
    repeated(str,freq);
    return 0;
}
void repeated(char str[],int freq[])
{
    int i=0;
    while(str[i]!='\0')
    {
        freq[str[i]]++;
        i++;
    }
    printf("\n repeated word in string \n");
    for(i=0;i<150;i++)
    {
        if(freq[i]>1)
        printf("%c =[%d] \n",i,freq[i]);
    }
}
