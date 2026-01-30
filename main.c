#include "libraries.h"
#include "config.h"

struct Person {
    // Identification
    char* SSN;
    char* fullName;
    char* accountNumber;
    char* pin;

    // Financial info
    int currentBalance;
    int yearlyIncome;
    int creditScore;

    // Personal info
    char* Occupation;
};


int main(void){
   system("clear");
    printf("Welcome\n");
    sleep(2);
    system("clear");
    return 0;
}
