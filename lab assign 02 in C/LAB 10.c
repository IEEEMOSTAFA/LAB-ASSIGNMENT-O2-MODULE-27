#include <stdio.h>

int beautiful7(int* arr,int n){
    int beauti=0;
    for (int i = 0; i <n; i++){
        while(arr[i]!=0){
            int dig = arr[i]%10;
            if (dig==7){
                beauti++;
            }
            arr[i]/=10;
        }
    }

    return beauti;

}
int main(){

    int n;
    printf("Enter the total number of element array\n");
scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }

    if (beautiful7(&arr,n)>=3){
        printf("Beautiful");
    }
    else{
        printf("Ugly");
    }


}
