#include "stdio.h"
main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("You're welcome.\n");
    }
    else {
        printf("%s has been thanked.\n", argv[1]);
    }
}
