#include <stdio.h>

struct people{
    char name[20];
    int age;
};

void main(){
    struct people mA[5]={0};
    int max=100;

    char *Pname;
    for(int i=0;i<5;i++){
        printf("%d의 이름 : ",i);
        scanf("%s",mA[i].name);
        printf("%d의 나이 : ",i);
        scanf("%d",&mA[i].age);
    }

    for(int i=0;i<5;i++){
        if(max>mA[i].age){
            Pname=mA[i].name;
            max=mA[i].age;
        }
    }

    printf("%s %d",Pname,max);
}