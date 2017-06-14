#include<stdio.h>
void sort(int[], int,int);
int main(){
    int DATA[10],low,high,i;
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++){
        scanf("%d",&DATA[i]);
    }
    low=0;
    high=9;
    sort(DATA,low,high);
    printf("Sorted elements are: \n");
    for(i=0;i<10;i++){
        printf("%d\t",DATA[i]);
    }
return 0;
}
void sort(int DATA[],int low,int high){
    int tempe,i,j,pivot,k;
    if(low<high){
        i=low;
        j=high;
        pivot=low;
        while(i<j){
            while(DATA[i]<=DATA[pivot]&&i<j){
                i++;
            }
            while(DATA[j]>DATA[pivot]){
                j--;
            }
            if(i<j){
                tempe=DATA[i];
                DATA[i]=DATA[j];
                DATA[j]=tempe;
            }
            for(k=0;k<10;k++){
                printf("%d\t",DATA[k]);
            }
            printf("\n");
        }
        tempe=DATA[pivot];
        DATA[pivot]=DATA[j];
        DATA[j]=tempe;
        for(k=0;k<10;k++){
            printf("%d\t",DATA[k]);
        }
        printf("\n next\n");
        sort(DATA,low,j-1);
        sort(DATA,j+1,high);
    }
}
