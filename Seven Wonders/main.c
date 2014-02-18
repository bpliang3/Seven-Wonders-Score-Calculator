//
//  main.c
//  Seven Wonders
//
//  Created by Ben Liang on 1/5/14.
//  Copyright (c) 2014 Ben Liang. All rights reserved.
//

#include <stdio.h>

int sum(int tablet, int wheel, int compass);

int main()
{
    int result, tablet, wheel, compass, blue, purple, yellow, black, leaders, coin, army, final, n;
    char check;
    
    printf("Do you just want to check green card total? (y/n) ");
    scanf("%c", &check);
    if (check == 'y') {
        printf("Please input number of tablets: ");
        scanf("%d", &tablet);
        printf("Please input number of wheels: ");
        scanf("%d", &wheel);
        printf("Please input number of compass: ");
        scanf("%d", &compass);
        
        result = sum(tablet, wheel, compass);
        
        printf("\nTotal points from Green cards: %d\n\n\n", result);
        
        return 0;
    }

    else{
        
        printf("Please input the number of players ");
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            
            printf("Player %d\n", i+1);
            printf("Please input number of points from leader cards: ");
            scanf("%d", &leaders);
            printf("Please input number of points from black cards: ");
            scanf("%d", &black);
            printf("Please input number of points from yellow cards: ");
            scanf("%d", &yellow);
            printf("Please input number of points from blue cards: ");
            scanf("%d", &blue);
            printf("Please input number of points from army: ");
            scanf("%d", &army);
            printf("Please input number of points from coin: ");
            scanf("%d", &coin);
            printf("Please input number of points from purple cards: ");
            scanf("%d", &purple);
            
            printf("Please input number of tablets: ");
            scanf("%d", &tablet);
            printf("Please input number of wheels: ");
            scanf("%d", &wheel);
            printf("Please input number of compass: ");
            scanf("%d", &compass);
            
            result = sum(tablet, wheel, compass);
            
            printf("\nTotal points from Green cards: %d\n\n\n", result);
            
            final = result + leaders + black + yellow + army + coin + purple +blue;
            
            printf("The final score for Player %d is: %d\n", i+1, final);
        }
        
        return 0;
    }
}


int sum(int tablet, int wheel, int compass)
{
    int result=0;
    int sets;
    
    sets=tablet;
    
    if (sets > compass) {
        sets=compass;
    }
    if (sets > wheel) {
        sets = wheel;
    }
    

    
    result = (sets * 7) + (tablet*tablet) + (wheel*wheel) + (compass*compass);
    return result;
}


