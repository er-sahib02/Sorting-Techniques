#include<stdio.h>
int main()
{
    int data[100], i, j, temp, n, y, big, big_index, ans;
    printf("Enter no. of elements you want to enter \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element no %d : \t", i+1);
        scanf(" \n %d",&data[i]);
    }
    printf(" \n Enter your choice for sorting technique to be used");
    printf("\n 1: bubble \n 2: insertion  \n 3: selection \n");
    scanf("%d", &ans);
    switch(ans)
    {
    case 1:
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(data[j]>data[j+1])
                {
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
        }
        printf(" \n sorted elements are: \n");
            for(i=0;i<n;i++)
            {
                printf("|%d| \t",data[i]);
            }
        break;
    case 2:
        for(i=1;i<n;i++)
        {
            y=data[i];
            for(j=i-1;j>=0;j--)
            {
                if(data[j]>y)
                {
                    data[j+1]=data[j];
                }
                else{
                    break;
                }
            }
            data[j+1]=y;
        }
        printf(" \n sorted elements are: \n");
            for(i=0;i<n;i++)
            {
                printf("|%d| \t",data[i]);
            }
        break;
    case 3:
        for(j=0;j<n;j++)
        {
            big_index=0;
            big=data[0];
            for(i=1;i<n-j;i++)
            {
                if(data[i]>big){
                    big=data[i];
                    big_index=i;
                }
            }
            temp=data[n-1-j];
            data[n-1-j]=data[big_index];
            data[big_index]=temp;
        }
        printf(" \n sorted elements are: \n");
            for(i=0;i<n;i++)
            {
                printf("|%d| \t",data[i]);
            }
        break;
    default: printf("\n Wrong Choice entered");

    }

return 0;
}
