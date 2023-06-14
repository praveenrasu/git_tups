#include<stdio.h>
#include<stdlib.h>

int main()
{
        int i,j;
        int n=5;
int a=10;
int* memory=(int *)malloc(n*sizeof(int));
                if(memory == NULL)
                {
                printf("malloc fail");
                }else
                {
                        for(i=0;i<n;i++)
                        {
                        scanf("%d",&memory[i]);
                        }

                        for(i=0;i<n;i++)
                        {
                        printf("%d",memory[i]);
                        }
                }

}

