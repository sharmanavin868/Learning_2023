#include <stdio.h>
#include <string.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile, int option) {
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 1) {  // -u option: Convert to uppercase
            ch = toupper(ch);
        } else if (option == 2) {  // -l option: Convert to lowercase
            ch = tolower(ch);
        } else if (option == 3) {  // -s option: Convert to purely uppercase
            if (islower(ch))
                ch = toupper(ch);
        }

        fputc(ch, destinationFile);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    int option = 0;
    FILE *sourceFile, *destinationFile;

    if (strcmp(argv[1], "-u") == 0) {
        option = 1;
    } else if (strcmp(argv[1], "-l") == 0) {
        option = 2;
    } else if (strcmp(argv[1], "-s") == 0) {
        option = 3;
    }

    if (option == 0) {
        printf("Invalid option.\n");
        return 1;
    }

    sourceFile = fopen(argv[2], "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    destinationFile = fopen(argv[3], "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        return 1;
    }

    copyFile(sourceFile, destinationFile, option);

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
