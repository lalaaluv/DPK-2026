#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {
    char * nama1 ="baso malang";
    char * nama2 ="Bakso Bakar";
    char * nama3 ="Bakso Bakar Malang";

    if (argc < 4) {
        printf("Argumen kurang\n");
        printf("Gunakan: %s %s %s", argv[0], nama1, nama2, nama3);
        return -1;
    }

    printf("Halo %s\n", argv[1]);
    printf("Halo juga %s\n", argv[2]);
    printf("Halo juga %s\n", argv[3]);

    return 0;
}