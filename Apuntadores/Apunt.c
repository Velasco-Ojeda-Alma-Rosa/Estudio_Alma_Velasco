#include<stdio.h>
int main(){
    char c='x';
    char *ap;
    ap=&c;
    printf("&c=%p\n",(void*)&c);
    printf("ap->%p\n",(void*)ap);
    printf("&ap=%p\n",(void*)&ap);
    return 0;

}