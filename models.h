#ifndef MODELS_H
#define MODELS_H

#include <time.h>

/* ---------- PERSON ---------- */
struct Person {
    char fullName[100];
    char ssn[10];              // XXX-XX-XXXX (educational only)
    char occupation[50];

    int yearlyIncome;
    int creditScore;

    int failedLoginAttempts;
    int isBlocked;
};

/* ---------- ACCOUNT ---------- */
struct Account {
    char accountNumber[20];
    int balance;               // stored in cents ideally
    int isFrozen;

    char pinHash[65];          // pretend hash
    struct Person* owner;      // relationship
};

struct Transaction{
    char* accountReceving;
    char* accountGiving;
    char* timestamp;
    
}


#endif
