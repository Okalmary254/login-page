#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Function to check if the email address is valid
int isValidEmail(char *email) {
    int i, at = 0, dot = 0;
    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            at++;
        }
        if (email[i] == '.') {
            dot++;
        }
    }
    if (at == 1 && dot >= 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char name[MAX_LENGTH];
    char email[MAX_LENGTH];
    char password[MAX_LENGTH];
    char confirm[MAX_LENGTH];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your email: ");
    scanf("%s", email);

    // Validating email
    while (!isValidEmail(email)) {
        printf("Invalid email address. Please enter a valid email: ");
        scanf("%s", email);
    }

    printf("Enter your password: ");
    scanf("%s", password);

    printf("Confirm your password: ");
    scanf("%s", confirm);

    // Checking if password matches the confirmation
    while (strcmp(password, confirm) != 0) {
        printf("Passwords do not match. Please re-enter your password: ");
        scanf("%s", password);
        printf("Confirm your password: ");
        scanf("%s", confirm);
    }

    // Convert details to uppercase
    for (int i = 0; name[i] != '\0'; i++) {
    name[i] = toupper(name[i]);
}

// Convert email to uppercase
for (int i = 0; email[i] != '\0'; i++) {
    email[i] = toupper(email[i]);
}

// Convert password to uppercase
for (int i = 0; password[i] != '\0'; i++) {
    password[i] = toupper(password[i]);
}


    // Output the details in uppercase
    printf("\nYour details:\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Password: %s\n", password);

    return 0;
}

