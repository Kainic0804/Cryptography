#include <stdio.h>
#include<string.h>

void encrypt(char a[100], int n){
    char ketqua[100];
    for(int i = 0; i < strlen(a); i++){
        ketqua[i] = (a[i] - 97 + n) % 26 + 97;
    }
    printf("%s", ketqua);
}

int main(){
    char a[100];
    int n;

    scanf("%s", a);
    scanf("%d", &n);

    encrypt(a, n);
    return 0;
}
