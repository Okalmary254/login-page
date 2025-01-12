#include <stdio.h>

#define MAX_STUDENTS 2
#define MAX_LENGTH 50

struct Student {
    char admission_number[MAX_LENGTH];
    char name[MAX_LENGTH];
    int score;
};

int main() {
    struct Student students[MAX_STUDENTS] = {
        {"P05/00023/2023", "Joy Wachira", 56},
        {"P05/00124/2023", "Nancy Kwamboka", 90}
        {"PO5/0022/2023", "Jael Gracia", 68}
    };

    printf("ADMISSION NUMBER\tNAME\t\t\tSCORE\n");
    

    return 0;
}

