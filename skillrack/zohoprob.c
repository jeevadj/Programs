#include<stdio.h>
#include<stdlib.h>

void fillCombo(int arr[],int n,int combo[],int combosize,int filled,int orgfillsize,int givensum){

    combo[filled]=orgfillsize;

    //printf("\n%d",combo[filled]);
    filled++;
    orgfillsize++;
    printf("bow  %d",orgfillsize);
    int secondarray[n];
    for(int index=0;index<n;index++){
        secondarray[combo[index]]=1;
    }

    if(filled==combosize){
            int sum=0;

        for(int index=0;index<=combosize-1;index++){
            sum+=arr[index];
            secondarray[combo[index]]=0;
        }

        if(sum==givensum){
            printf("\n");
            for(int index=0;index<combosize;index++){
                printf("%d ",arr[combo[index]]);
            }
            printf("= ");
            for(int index=0;index<n;index++){
                if(secondarray[index]==1){
                    printf("%d ",arr[combo[index]]);
                }
            }
        }
        return;
    }
    while(orgfillsize<n){
            fillCombo(arr,n,combo,combosize,filled,orgfillsize,givensum);
            orgfillsize++;

    }
}
int main(){
int n,sum;
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
    sum+=array[i];
}

int combosize;
sum=sum/2;
for(combosize=1;combosize<=n;combosize++){
    int combo[combosize];
    int filled =0;
    int orgfillsize=0;
    for(orgfillsize=0;orgfillsize<=n-combosize;orgfillsize++){
            fillCombo(array,n,combo,combosize,filled,orgfillsize,sum);

    }

}


}
