#include <stdio.h>

// returns 0 if strigns are equal
int stringEquals(char str[4], char str2[4]) {
    if (str[0] == str2[0] && str[1] == str2[1] && str[2] == str2[2] && str[3] == str2[3]) {
        return 0;
    }
    return 1;
}

int main()
{
    char user[4]= "jojo";
    char user2[4]= "jojo";

    char userInput[4];
    int efforts=3, password=2424, passInput;
    
    for (int i=efforts; i>0; i--) {
        printf("Efforts left %d\n", i);
        printf("Enter username:\n");
        scanf("%s",userInput);
        printf("Enter password:\n");
        scanf("%d", &passInput);
        
        if (stringEquals(userInput, user) != 0 && passInput != password) {
            printf("Wrong username & password!\n");
        } else if (stringEquals(userInput, user) == 0 && passInput != password) {
            printf("Right username, but wrong password!\n");
        } else if (stringEquals(userInput, user) != 0 && passInput == password) {
            printf("Wrong username, but right password!\n");
        } else {
            break;
        }
    }

    if (stringEquals(userInput, user) != 0 && passInput != password) {
        printf("OUT OF EFFORTS, YOUR ACCOUNT IS LOCKED");
    } else {
        printf("Correct username & password\n");
        printf("You can now login to your account\n");
    }
    
    return 0;
}
