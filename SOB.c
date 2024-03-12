#include <stdio.h>
#include <string.h>

int main() {
    char abbreviation[5];

    printf("Enter the abbreviation of the school: ");
    scanf("%s", abbreviation);
   
    printf("Full name of the school: ");
   // switch statement at work
    switch (abbreviation[0]) {
        case 'S':
            if (strcmp(abbreviation, "SAHS") == 0)
                printf("School of Applied and Health Sciences\n");
            else if (strcmp(abbreviation, "SOB") == 0)
                printf("School of Business\n");
            else if (strcmp(abbreviation, "SOET") == 0)
                printf("School of Engineering\n");
            else
                printf("Invalid abbreviation\n");
            break;
        case 'I':
            if (strcmp(abbreviation, "ICI") == 0)
                printf("School of Computing\n");
            else
                printf("Invalid abbreviation\n");
            break;
        case 'H':
            if (strcmp(abbreviation, "SHSS") == 0)
                printf("School of Hospitality and Social Sciences\n");
            else
                printf("Invalid abbreviation\n");
            break;
        default:
            printf("Invalid abbreviation\n");
    }

    return 0;
}

