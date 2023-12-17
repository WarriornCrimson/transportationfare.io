#include <stdio.h>
#include <string.h>
int puntaLoc();
int mactanLoc();
int saacLoc();
int iboLoc();
int mepzLoc();
int marinaLoc();
int pusokLoc();
int sssLoc();
int llcLoc();
int gimLoc();
int mllLoc();
void error();
void passStat(int fee, char loc[20], char des[20]);
void ticket(char passStat, char loc[20], char des[20], int discount, int fee, int money, int change);

int main() {
    int location;
    char decision;
    printf("-------TRANSPORTATION FARE SYSTEM-------\n");
    printf("BUS ROUTE: Punta Engano --> Opon Public Market\n\n");
    do {
    printf("-----------------------------------------------------------------------------------------------------\n");
        printf("Choose your location:\n\n1. Punta Engano\n2. Mactan Shrine\n3. Saac\n4. Ibo\n5. Mepza\n6. Marina Mall\n7. Pusok\n8. SSS\n9. Lapu-Lapu City Hall\n10. Gaisano Island Mall\n11. Metro Lapu-Lapu\n0. Exit\n");
        printf("\nPlease enter a number corresponding to your current location: ");
        if (scanf("%d", &location) != 1) {
            error();
        }
        else {
        switch (location) {
            
            case 1:
                puntaLoc();
                break;
            case 2:
                mactanLoc();
                break;
            case 3:
                saacLoc();
                break;
            case 4:
                iboLoc();
                break;
            case 5:
                mepzLoc();
                break;
            case 6:
                marinaLoc();
                break;
            case 7:
                pusokLoc();
                break;
            case 8:
                sssLoc();
                break;
            case 9:
                llcLoc();
                break;
            case 10:
                gimLoc();
                break;
            case 11:
                mllLoc();
                break;
            default:
            printf("\nInvalid Location!");
            break;
            }
        if (location == 0) {
            printf("\nExiting program...\n");
            break;
        }
        }
        
        printf("\n\nWould you like to start again?\n\nEnter Y for YES and N for NO: ");
        scanf(" %c", &decision);
    } while(decision == 'Y' || decision == 'y');

    if (decision == 'N' || decision == 'n') {
        printf("\n\nExiting Program...");
    }

    return 0;
}

int puntaLoc() {
    char loc[20] = "Punta Engano";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Mactan Shrine\n");
    printf("2. Saac \n");
    printf("3. Ibo\n");
    printf("4. Mepza\n");
    printf("5. Marina Mall\n");
    printf("6. Pusok\n");
    printf("7. SSS\n");
    printf("8. Lapu-Lapu City Hall\n");
    printf("9. Gaisano Island Mall\n");
    printf("10. Metro Lapu-Lapu\n");
    printf("11. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "Mactan Shrine");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "Saac");
            fee = 16;
            passStat(fee, loc, des);
            break;
        case 3:
            strcpy(des, "Ibo");
            fee = 20;
            passStat(fee, loc, des);
            break;
        case 4:
            strcpy(des, "Mepza");
            fee = 23;
           passStat(fee, loc, des);
            break;
        case 5:
            strcpy(des, "Marina Mall");
            fee = 24;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "Pusok");
            fee = 26;
            passStat(fee, loc, des);
            break;
        case 7 :
            strcpy(des, "SSS");
            fee = 29;
            passStat(fee, loc, des);
            break;
        case 8 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 30;
            passStat(fee, loc, des);
            break;
        case 9 :
            strcpy(des, "Gaisano Island Mall");
            fee = 31;
            passStat(fee, loc, des);
            break;
        case 10 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 34;
           passStat(fee, loc, des);
            break;
        case 11 :
            strcpy(des, "Opon Public Market");
            fee = 37;
           passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
            error();
            break;
    }
    return fee;
}

int mactanLoc() {
    char loc[20] = "Mactan Shrine";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Saac \n");
    printf("2. Ibo\n");
    printf("3. Mepza\n");
    printf("4. Marina Mall\n");
    printf("5. Pusok\n");
    printf("6. SSS\n");
    printf("7. Lapu-Lapu City Hall\n");
    printf("8. Gaisano Island Mall\n");
    printf("9. Metro Lapu-Lapu\n");
    printf("10. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
          case 1:
            strcpy(des, "Saac");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "Ibo");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3:
            strcpy(des, "Mepza");
            fee = 17;
            passStat(fee, loc, des);
            break;
        case 4:
            strcpy(des, "Marina Mall");
            fee = 18;
           passStat(fee, loc, des);
            break;
        case 5:
            strcpy(des, "Pusok");
            fee = 20;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "SSS");
            fee = 23;
            passStat(fee, loc, des);
            break;
        case 7 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 24;
            passStat(fee, loc, des);
            break;
        case 8 :
            strcpy(des, "Gaisano Island Mall");
            fee = 25;
            passStat(fee, loc, des);
            break;
        case 9 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 28;
            passStat(fee, loc, des);
            break;
        case 10 :
            strcpy(des, "Opon Public Market");
            fee = 31;
            passStat(fee, loc, des);
            break;
            default:
            printf("Invalid destination!\n");
            error();
            break;
    }
    return fee;
}

int saacLoc() {
    char loc[20] = "Saac";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Ibo\n");
    printf("2. Mepza\n");
    printf("3. Marina Mall\n");
    printf("4. Pusok\n");
    printf("5. SSS\n");
    printf("6. Lapu-Lapu City Hall\n");
    printf("7. Gaisano Island Mall\n");
    printf("8. Metro Lapu-Lapu\n");
    printf("9. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "Ibo");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "Mepza");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3:
            strcpy(des, "Marina Mall");
            fee = 14;
           passStat(fee, loc, des);
            break;
        case 4:
            strcpy(des, "Pusok");
            fee = 15;
            passStat(fee, loc, des);
            break;
        case 5:
            strcpy(des, "SSS");
            fee = 18;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 19;
            passStat(fee, loc, des);
            break;
        case 7 :
            strcpy(des, "Gaisano Island Mall");
            fee = 21;
            passStat(fee, loc, des);
            break;
        case 8 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 24;
            passStat(fee, loc, des);
            break;
        case 9 :
            strcpy(des, "Opon Public Market");
            fee = 26;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int iboLoc() {
    char loc[20] = "Ibo";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Mepza\n");
    printf("2. Marina Mall\n");
    printf("3. Pusok\n");
    printf("4. SSS\n");
    printf("5. Lapu-Lapu City Hall\n");
    printf("6. Gaisano Island Mall\n");
    printf("7. Metro Lapu-Lapu\n");
    printf("8. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "Mepza");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "Marina Mall");
            fee = 14;
           passStat(fee, loc, des);
            break;
        case 3:
            strcpy(des, "Pusok");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 4:
            strcpy(des, "SSS");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 5 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 15;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "Gaisano Island Mall");
            fee = 17;
            passStat(fee, loc, des);
            break;
        case 7 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 20;
            passStat(fee, loc, des);
            break;
        case 8 :
            strcpy(des, "Opon Public Market");
            fee = 22;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int mepzLoc() {
    char loc[20] = "Mepza";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Marina Mall\n");
    printf("2. Pusok\n");
    printf("3. SSS\n");
    printf("4. Lapu-Lapu City Hall\n");
    printf("5. Gaisano Island Mall\n");
    printf("6. Metro Lapu-Lapu\n");
    printf("7. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "Marina Mall");
            fee = 14;
           passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "Pusok");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3:
            strcpy(des, "SSS");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 4 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 5 :
            strcpy(des, "Gaisano Island Mall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 17;
            passStat(fee, loc, des);
            break;
        case 7 :
            strcpy(des, "Opon Public Market");
            fee = 19;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int marinaLoc() {
    char loc[20] = "Marina Mall";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Pusok\n");
    printf("2. SSS\n");
    printf("3. Lapu-Lapu City Hall\n");
    printf("4. Gaisano Island Mall\n");
    printf("5. Metro Lapu-Lapu\n");
    printf("6. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "Pusok");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2:
            strcpy(des, "SSS");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 4 :
            strcpy(des, "Gaisano Island Mall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 5 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 16;
            passStat(fee, loc, des);
            break;
        case 6 :
            strcpy(des, "Opon Public Market");
            fee = 18;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int pusokLoc() {
    char loc[20] = "Pusok";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. SSS\n");
    printf("2. Lapu-Lapu City Hall\n");
    printf("3. Gaisano Island Mall\n");
    printf("4. Metro Lapu-Lapu\n");
    printf("5. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1:
            strcpy(des, "SSS");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3 :
            strcpy(des, "Gaisano Island Mall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 4 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 5 :
            strcpy(des, "Opon Public Market");
            fee = 16;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int sssLoc() {
    char loc[20] = "SSS";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Lapu-Lapu City Hall\n");
    printf("2. Gaisano Island Mall\n");
    printf("3. Metro Lapu-Lapu\n");
    printf("4. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1 :
            strcpy(des, "Lapu-Lapu City Hall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2 :
            strcpy(des, "Gaisano Island Mall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 4 :
            strcpy(des, "Opon Public Market");
            fee = 14;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int llcLoc() {
    char loc[20] = "Lapu-Lapu City Hall";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Gaisano Island Mall\n");
    printf("2. Metro Lapu-Lapu\n");
    printf("3. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1 :
            strcpy(des, "Gaisano Island Mall");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 3 :
            strcpy(des, "Opon Public Market");
            fee = 14;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int gimLoc() {
    char loc[20] = "Gaisano Island Mall";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Metro Lapu-Lapu\n");
    printf("2. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1 :
            strcpy(des, "Metro Lapu-Lapu");
            fee = 14;
            passStat(fee, loc, des);
            break;
        case 2 :
            strcpy(des, "Opon Public Market");
            fee = 14;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

int mllLoc() {
    char loc[20] = "Metro Lapu-Lapu";
    char des[20];
    int destination;
    int fee;
    printf("\n--Choose your destination--\n\n");
    printf("1. Opon Public Market\n");
    printf("\nEnter a number corresponding to your desired destination: ");
    scanf("%d", &destination);

    switch (destination) {
        case 1 :
            strcpy(des, "Opon Public Market");
            fee = 14;
            passStat(fee, loc, des);
            break;
        default:
            printf("Invalid destination!\n");
             error();
            break;
    }
    return fee;
}

void error() {
    printf("\n\nYou made an error!\n");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void passStat(int fee, char loc[20], char des[20]) {
    int passStat;
    int discount = fee - (fee * 0.20);
    int money;
    int change;
    char destination;
    char location;

    printf("\n\n\nAre you a STUDENT / PWD / SENIOR CITIZEN?\n");
    printf("Enter 1 for YES and 0 for NO: ");
    if (scanf(" %d", &passStat) != 1) {
        error();
    } 
    else if (passStat == 1) {
        printf("Total Fare Payable: P%d\n", discount);

        do {
            printf("\nEnter the money paid: P");
            if (scanf("%d", &money) != 1) {
                printf("Invalid Payment!\n");
                error();
                return;
            }

            else if (money < discount) {
                printf("Insufficient Payment!\n");
            }

        } while (money < discount);

        change = money - discount;
        printf("Change: P%d\n", change);
        ticket(passStat, loc, des, discount, fee, money, change);
    }
    
    else if (passStat == 0 ) {
        printf("Since you are neither of the three, your total fee is P%d\n", fee);
        do {
            printf("Paid money: ");
            if (scanf("%d", &money) != 1){
                printf("Invalid Payment!\n");
                error();
                return;
            }
            else if (money < fee) {
                printf("Insufficient payment!\n");
            }

        } while (money < fee);

        change = money - fee;
        printf("Change: P%d\n", change);
        ticket(passStat, loc, des, discount, fee, money, change);
    }
    else {
        error();
        return;
    }
}

void ticket(char passStat, char loc[20], char des[20], int discount, int fee, int money, int change) {
    printf("\n-----------------------------\n");
    printf("----UDOTCO BUS TICKET----\n");
    printf("Location: %s\n", loc);
    printf("Destination: %s\n", des);
    printf("Status: %s\n", (passStat == 1) ? "Discounted" : "Regular");
    if (passStat == 1) {
    printf("Fare: %d\n", discount);
}
else
{
    printf("Fare: %d\n", fee);
}
    printf("\nMoney paid: %d", money);
    printf("\nChange: %d\n", change);

    printf("\n----Have a safe trip!----\n");
    printf("------------------------------\n");
}