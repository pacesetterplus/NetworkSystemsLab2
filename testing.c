#include <stdio.h>
#include <fcntl.h>
 #include <unistd.h>
#include <dirent.h>
#include <dirent.h>
#include <unistd.h>

#define BUFLEN 1500

int main(){
    char buf[BUFLEN];

    printf("I am testing\n");
    int inf = open("website",O_RDONLY);
    printf("%d\n",inf);
    int rlen = read(inf, buf, BUFLEN);
    printf("%d, %s\n",rlen, buf);

            //open directory
        DIR *dir_open = opendir("website");

        if(dir_open){
            printf("Dir is now open\n");
            struct dirent *file = readdir(dir_open);
            while(file){
                printf("Filename is %s\n", file->d_name);
                file = readdir(dir_open);
            }
        closedir(dir_open);
        close(inf);
        }
}