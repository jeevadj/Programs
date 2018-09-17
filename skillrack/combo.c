#include<stdio.h>
int sum=0;
void fillCombo(int arr[], int N, int combo[],
    int comboSize, int filled, int fillIndex){
    combo[filled] = fillIndex;
    filled++;
    fillIndex++;
    if(filled == comboSize){
        int index=0, currSum=0;

        int secodHalf[N];
        for(index=0; index<N; index++){
            secodHalf[index] = 1;
        }
        for(index=0; index<=comboSize-1; index++){
            currSum += arr[combo[index]];
            secodHalf[combo[index]]=0;
        }
        if(currSum == sum){
            printf("\n");
            for(index=0; index<=comboSize-1; index++){
                printf("%d ", arr[combo[index]]);
            }
            printf("=");
            for(index=0; index<=N-1; index++){
                if(secodHalf[index]==1)
                printf("%d ", arr[index]);
            }
        }
        return;
    }
    while(fillIndex < N){
        fillCombo(arr, N, combo, comboSize,
                  filled, fillIndex);
        fillIndex++;
    }
}

int main(){
    int N, index;
    scanf("%d", &N);
    int arr[N];
    for(index=0; index<=N-1; index++){
        scanf("%d", &arr[index]);
        sum += arr[index];
    }
    sum /= 2;
    int comboSize;
    for(comboSize=1; comboSize<=N; comboSize++){
        int combo[comboSize];
        int filled = 0, fillIndex;
        for(fillIndex=0; fillIndex<=N-comboSize;fillIndex++){
        fillCombo(arr, N, combo,
                  comboSize, filled, fillIndex);
        }
    }
}
