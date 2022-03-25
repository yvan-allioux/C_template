#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *str = "Temporary string to be written to file!\n";

int main(void) {
    const char* filename = "out.txt";

    //ouverture fichier
    FILE* output_file = fopen(filename, "w+");
    if (!output_file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fwrite(str, 1, strlen(str), output_file);
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        fwrite(str, 1, strlen(i), output_file);
        i++;
    }
    
    
    


    printf("Done Writing!\n");

    fclose(output_file);

    exit(EXIT_SUCCESS);
}
