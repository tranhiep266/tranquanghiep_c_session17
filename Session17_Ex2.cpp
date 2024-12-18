#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scanString(char *str,int size){
    printf("Nhap vao chuoi: ");
    fgets(str, size, stdin);
}

void printString(char *str){
    printf("Chuoi hien tai: %s\n",str);
}

void countWord(char *str){
    int count=0;
    while(*str){
        if((*str>='A'&&*str<='Z')||(*str>='a'&&*str<='z')){
            count++;
        }
        str++;
    }
    printf("So luong chu cai trong chuoi: %d\n",count);
}

void countNumber(char *str){
    int count=0;
    while(*str){
        if(*str>='0'&&*str<='9'){
            count++;
        }
        str++;
    }
    printf("So luong chu so trong chuoi: %d\n",count);
}

void countSWord(char *str){
    int count=0;
    while(*str) {
        if(!((*str >= 'A'&&*str<='Z')||(*str>='a'&&*str<='z')||(*str>='0'&&*str<='9')||*str==' ')){
            count++;
        }
        str++;
    }
    printf("So luong ky tu dac biet trong chuoi: %d\n",count);
}

int main(){
    char str[100];
    int menu;
    for(;;){
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&menu);

        if(menu==1){
            scanString(str, sizeof(str));
        }
        
        else if(menu==2){
            printString(str);
        }
        
        else if(menu==3){
            countWord(str);
        }
        
        else if(menu==4){
            countNumber(str);
        }
        
        else if(menu==5){
            countSWord(str);
        }
        
        else if(menu==6){
            printf("THOAT\n");
            break;
        }else{
            printf("Moi ban nhap lai\n");
        }
    }
    return 0;
}

