//
//  main.c
//  Fake
//
//  Created by Julian Pitterson on 2021-08-30.
//

#include <stdio.h>
#include "style.h"
#include <unistd.h>
#include <ranlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>


int exitQ();

int rand_password(){
    const char* list_of_passwords[] = {"Bigbootybitcheswithfloppydicks123", "balls123", "ilikeitwhenYou1122", "WHSy65HbdNMuwO0?", "44eaH7t5JHs9dmkdsg", "HackersYouCantGuessThisPasswordButIfYouDoFuckYOU!", "helloGoodbye123", "bingobongobango", "bhillybhob", "ilikecats;)123", "theresasnakeupmyass", "imgay2468", "holyshityouguessedmypasswordguessihavetochangeit", "ilikewindows", "fuckshit", "peepeepoopoo123", "imhorny", "imnotthatgay", "ieatpoo", "ihavehiv", "ohshitimfucked"};
   int i;
   time_t t;
   srand((unsigned)time(&t));
 
   for(i=0;i<1;i++){
        printf("%sPassword = '%s'\n%s", green, list_of_passwords[rand()%20], reset);
   }
    return 0;
}

int pwdattk(){
    int max = 100;
    int e = 20;
    char user[100];
    
    printf("Username of victim\n");
    scanf("%s", user);
    printf("[Attack Method]: Password Attack\n");
    printf("Connecting to servers\n");
    printf("this may take a while...\n");
    printf("%s[Report Log will be hidden until Password Attack is finished ", red);
    printf("for faster speeds]%s\n", reset);
    sleep(10);
    
    
    while (e <= max){
        printf("Trying Password %d out of 1000\n", e);
        e++;
        //sleep(2);
        }
    printf("%sPASSWORD FOUND FOR USER %s\n\n%s", green, user, reset);

    rand_password();
    sleep(20);
    printf("Logging In...\n");
    sleep(6);
    printf("Logged In!\n");
    //("Chaining Password...\n");
    sleep(9);
    printf("%sPassword was changed successfully\n%s", green, reset);
    exitQ();
    printf("exiting quietly\n");
    sleep(15);
    printf("shutting down bots\n");
    sleep(16);
    printf("closing connections\n");
    sleep(9);
    printf("[STATUS] exiting... GOODBYE\n");
    return 0;
}

int massReport(){
    int e = 0;
    char user[100];
    double d = 0.10;
    printf("Enter Username\n");
    scanf("%s", user);
    printf("%sStarting Mass_Report\n", green);
    sleep(3);
    printf("%s[Report Log will be hidden until Mass_Report is finished ", red);
    printf("for faster speeds]%s\n", reset);
    sleep(5);
    while (e < 4000) {
        printf("reported %s %d times\n", user, e);
        sleep(d);
        e++;
        
    }
    printf("%sUser: %s was reported 5,000 times\n", green, user);
    exitQ();
    return 0;
}

int hack(char plat[]){
    int method;
    char bs[100];
    
    printf("[PLATFORM]: %s\n", plat);
    printf("%sMethods%s\n"
           "\t\t1)\tPassword Attack\n"
           "\t\t2)\tMass Report\n", yellow, reset);
    scanf("%d", &method);
    
    if (method == 1) {
        pwdattk();
    } else if (method == 2){
        massReport();
    } else {
        printf("Invalid Input\n");
        hack(bs);
    }
    
    return 0;
}

int exitQ(){
    char answer;
    printf("[WOULD YOU LIKE TO EXIT]\n (y/n)");
    scanf("%c", &answer);
    if (answer == 'y') {
        exit(1);
    } else if (answer == 'n'){
        hack("discord");
    } else {
        printf("ANSWER WITH Y OR N\n");
        exitQ();
    }
    return 0;
}

int test(){
    int a = 0;
    
    while (a < 100) {
        printf("%d\n", a);
        a++;
        if (a == 69) {
            printf("%d haha nice\n", a);
            continue;
        } else {
            continue;
        }
    }
    
    
    return 0;
}




int main() {
    int choice;
    printf("BPS Script\n"
           "\t%sSupported Platforms\n"
           "%s\t\t1)\tDiscord\n"
           "\t\t2)\tTwitter\n"
           "\t\t3)\tInstagram\n", green, reset);
    scanf("%d", &choice);
    
    if (choice == 1) {
        hack("discord");
    } else if (choice == 2){
        hack("twitter");
    } else if (choice == 3){
        hack("instagram");
    } else if (choice == 4){
        test();
    } else {
        printf("invalid input\n");
        main();
    }
    
    
    return 0;
}
