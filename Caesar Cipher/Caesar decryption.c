#include <stdio.h>
#include<string.h>

void decrypt(char a[100], int i){
    char ketqua[100];
    for(int j = 0; j < strlen(a); j++){
        if(a[j] != ' '){
        ketqua[j] = (a[j] - 97 - i + 26) % 26 + 97;
    }
    else {
        ketqua[j] = ' ';
    }
    }
    ketqua[strlen(a)] = '\0';
    printf("%s", ketqua);
    printf("\n");
    printf("----\n");
}


int main(){
    char a[100];

    fgets(a, sizeof(a), stdin);

    for(int i = 0; i < 26; i++){
        decrypt(a, i);
    }
    return 0;
}
// Lười thiết lập công thức tính entropy lắm, có lẽ dùng python tính rồi vẽ bảng nó trực quan hơn