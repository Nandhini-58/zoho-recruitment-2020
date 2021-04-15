#include<stdio.h>
int main(){
    int i,j,k,m=1,n,mid;
    printf("Enter the String: ");
    char s[100];
    scanf("%s",s);
    n=strlen(s);

    for(i=n;i>=1;i--)
    {
        mid=n/2;
        for(j=1;j<=i-1;j++)
        {
          printf(" ");
        }
        for(k=1;k<=m;k++)
        {
            if(mid==n)
                mid=0;
            printf("%c",s[mid++]);
        }
        printf("\n");
        m++;
    }
    return 0;
}
