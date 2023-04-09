//various libraries, most of which are unused, because working from my template
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h> //console told me to try this and it worked

//referenced a version on includehelp.com for the initial definitions, then reused print file contents code for the rest
void main(){
    DIR *d;
    struct dirent* d2;

    char directory[50];
    printf("Please input the directory:");
    scanf("%s", directory);
    d = opendir(directory);

    if(d == NULL){
        printf("directory DNE\n\n");
    } else if (d != NULL){
        while((d2 = readdir(d)) != NULL){
            //had to reference geeks for geeks on how to make this print statement work
            printf("%s\n", d2 -> d_name);
        }
    }
}
