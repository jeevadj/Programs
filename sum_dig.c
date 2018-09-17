#include<stdio.h>
#include<stdlib.h>

void fillCombo(int arr[], int N, int combo[], int comboSize, int filled, int fillIndex,int givensum){
    combo[filled] = arr[fillIndex];
    //printf("\n%d",combo[filled]);
    filled++;
    fillIndex++;
    if(filled == comboSize){
        int index = 0;
        int sum=0;
        //printf("\n");
        for(index = 0; index<=comboSize-1;index++){
           // printf("%d ",combo[index]);
           sum+=combo[index];
        }
        if(sum==givensum){
                printf("\n ");
           for(index=0;index<comboSize;index++){
                printf("%d ",combo[index]);
            }
        }
        return;
    }

    while(fillIndex < N){
        fillCombo(arr, N, combo, comboSize, filled, fillIndex,givensum);
        fillIndex++;
    }
}

int main(){

    int N, index,sum;
    scanf("%d %d",&N,&sum);
    int arr[N];

    for(index = 0; index <= N-1; index++){
        scanf("%d", &arr[index]);
    }

    int comboSize;

    for(comboSize = 1; comboSize<=N; comboSize++){
        int combo[comboSize];
        int filled = 0, fillIndex;

        for(fillIndex = 0; fillIndex <=N-comboSize; fillIndex++){
            fillCombo(arr, N, combo, comboSize, filled, fillIndex,sum);
        }
    }

}
