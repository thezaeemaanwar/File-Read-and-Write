//---------------------
//     2018-CS-44
//    Zaeema Anwar
//   Lab 14 Task 01
//---------------------


#include<stdio.h>
#include<stdlib.h>

int main(){

    const int SIZE = 2000;
    char path[50];
    char buffer[SIZE];
    FILE *fp_read, *fp_write;

    printf("Enter File Path for reading : ");
    scanf( "%s" , path);
    
    // opens file with path for reading purpose and stores
    // descriptor into fp_read
    fp_read = fopen(path, "r");
    
    printf("Enter File Path for writing : ");
    scanf( "%s" , path);
    
    // opens file with path for writing purpose and stores
    // descriptor into fp_write
    fp_write = fopen(path, "r");

    if (fp_read != NULL && fp_write != NULL){

        // Get data from fp_read descriptor to size of SIZE
        // Store the data into buffer array
        while(fgets(buffer, SIZE, fp_read)){

            // Put the data stored in buffer into 
            // file with descriptor fp_write
            fputs(buffer, fp_write);
        }
        printf("Data written successfully !! ");
    }
    else{
        printf("Error in opening files !! ");
    }

    // Close both files
    fclose(fp_read);
    fclose(fp_write);

    return 0;
}

