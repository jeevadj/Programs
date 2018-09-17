#include<stdio.h>
#include<stdlib.h>

void fillCombo(int arr[],int n,int combo[],int combosize,int filled,int orgfillsize,int givensum){

    combo[filled]=arr[orgfillsize];
    //printf("\n%d",combo[filled]);
    filled++;
    orgfillsize++;
    if(filled==combosize){
            int sum=0;
        for(int index=0;index<=combosize-1;index++){
            sum+=combo[index];
        }

        if(sum==givensum){
            printf("\n");
            for(int index=0;index<combosize;index++){
                printf("%d ",combo[index]);
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
scanf("%d %d",&n,&sum);
int array[n];
for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
int combosize;
for(combosize=1;combosize<=n;combosize++){
    int combo[combosize];
    int filled =0;
    int orgfillsize=0;
    for(orgfillsize=0;orgfillsize<=n-combosize;orgfillsize++){
            fillCombo(array,n,combo,combosize,filled,orgfillsize,sum);

    }

}


}
