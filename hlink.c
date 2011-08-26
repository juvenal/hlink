#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int ret;

    if (argc != 3) {
        return 1;
    }

    if ((ret = link(argv[1], argv[2])) != 0){
        perror("link");
    }

    return ret;
}