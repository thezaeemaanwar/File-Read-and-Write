//---------------------
//     2018-CS-44
//    Zaeema Anwar
//   Lab 14 Task 02
//---------------------


#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

    char path[50];
    char buffer[100] = {' '};
    int f_descriptor;

    printf("Enter file path for reading : ");
    scanf("%s", path);
    // Open the desired path for read purpose
    f_descriptor = open (path , O_RDONLY);

    // If the file is availabe and can be read
    if (f_descriptor >= 0){
        // Read the file to the end and save it in buffer
        while(read(f_descriptor, buffer, sizeof(buffer))){
            // Write the data stores in buffer to screen
            write(1, buffer, sizeof(buffer));
        }
    }
    // If the file is unavailable or can't be read
    else {
        printf("Error reading file !");
    }

    close(f_descriptor);

    return 0;
}