#include <stdio.h>

int main() {
    FILE *fptr;
    //writting in flie
    fptr=fopen("test.txt","w");
    char str[100];
    printf("Enter the string to be written=");
    scanf("%s",&str);
    fprintf(fptr,"%s",str);
    fclose(fptr);
    
    //appending in FILE
    fptr=fopen("test.txt","a");
    char append[100];
    printf("Enter the string to be appended=");
    scanf("%s",&append);
    fprintf(fptr,"%s",append);
    fclose(fptr);
    
    //reading from FILE
    fptr=fopen("test.txt","r");
    char read[200];
    for(int i=0;i<=200;i++){
        fscanf(fptr,"%c",&read[i]);
    }
    puts(read);
    fclose(fptr);
    
    return 0;
}
