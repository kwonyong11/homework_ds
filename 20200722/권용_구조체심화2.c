#include <stdio.h>

void main(){
    int size;
    double numArray[30];
    double sum=0;
    double avg=0;
    printf("배열의 크기 입력 : ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("%d번째 입력 : ",i+1);
        scanf("%lf",&numArray[i]);

        numArray[i]=(float)((int)((numArray[i]*100)+0.5))/100;
        sum+=numArray[i];
    }
    avg=sum/size;
    for(int i=0;i<size;i++){
        printf("%.2lf ",numArray[i]);
    }
    printf("\nsum : %.2lf",sum);
    printf("\navg : %.2lf",avg);
}