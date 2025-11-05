#include<stdio.h>
#include<string.h>

//Print initials of a name with the surname displayed in full.


int main()
{
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    printf("%c. ", name[0]);

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0') {
            if(name[i+2] == ' ' || name[i+2] == '\n') {
                continue;
            }
            if(name[i+2] != '\0' && name[i+3] == '\0') {
                printf("%c", name[i+1]);
            } else if(name[i+2] != '\0' && name[i+3] != '\0') {
                printf("%c. ", name[i+1]);
            }
        }
    }

    
    char *surname = strrchr(name, ' ');
    if(surname != NULL) {
        printf("%s", surname + 1);
    }

    return 0;
}
