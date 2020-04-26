#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter the string: ");
    gets(a);
    int l = strlen(a);
    int ans=0;
    for(int i=l-1; i>=0; i--){
        b[ans] = a[i];
        ans++;
    }
    printf("The reverse of the string is: ");
    puts(b);
}