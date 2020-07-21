#include <stdio.h>

int main(){
    char* mos[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
    ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    char a;

    char start='A';
    int result;
    printf("input char:");
    scanf("%c",&a);

    if(a>=97||a<=122){
        a=a-32;
    }//소문자 입력 시 대문자로 변환

    result=a-start;
    printf("%s",mos[result]);

    return 0;
}