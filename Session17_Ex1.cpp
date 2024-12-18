#include <stdio.h>
#include <stdlib.h>

int sumE(int *arr,int length){
    int sum=0;
    for (int i=0;i<length;i++){
        sum+=arr[i];
    }
    return sum;
}

int maxE(int *arr,int length){
    int max=arr[0];
    for (int i=1;i<length;i++){
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int *arrPtr;
    int menu,length;
    for(;;){
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        if(menu==1){
            printf("So phan tu co trong mang: ");
            scanf("%d",&length);
            arrPtr=(int*)malloc(length*sizeof(int));
            for(int i=0;i<length;i++) {
                printf("Phan tu arr[%d]= ",i);
                scanf("%d", &arrPtr[i]);
            }
        }
        
        else if(menu==2){
            printf("Mang hien tai: \n");
            for(int i=0;i<length;i++) {
                printf("%4d",arrPtr[i]);
            }
            printf("\n");
        }
        
        else if(menu==3){
            printf("Do dai mang: %d\n",length);
        }
        
        else if(menu==4) {
            printf("Tong cac phan tu trong mang: %d\n",sumE(arrPtr,length));
        }
        
        else if(menu == 5) {
            printf("Phan tu lon nhat: %d\n",maxE(arrPtr,length));
        }
        
        else if(menu==6){
            printf("THOAT\n");
            free(arrPtr);
            break;
        }else{
            printf("Moi ban nhap lai\n");
        }
    }
    return 0;
}

