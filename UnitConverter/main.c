#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Switch Variables
    static double userRaw = 0;
    static double userConvert = 0;
    bool valid = true;
    int menuSelection = -1;
    //Menu
     char* menu[] = {"1. Pounds to Kilograms", "2. Fahrenheit to Celsius", "3. Miles to Kilometers", "4. Ounces to Mililiters", "5. Exit"};
     //Size in bytes? of total array devided by one equal sized element
    int menuSize = sizeof(menu)/sizeof(menu[0]);
    printf("Unit Converter\n");
    //Main program Loop
    while (menuSelection != menuSize){
        printf("Please select an option:\n");
        for (int i = 0; i < menuSize; i++){
            printf("%s\n", menu[i]);
        }

        //int data validation
        while (valid = true){
        scanf("%d", &menuSelection);
        if (menuSelection >= 1 && menuSelection <= 5){
                break;
            }
        printf("Invalid Selection, please try again.\n");
        }

        switch(menuSelection){

        case 1:
            printf("Pounds to Kilograms-\n");
            printf("Input pounds to convert: ");
            scanf("%lf", &userRaw);
            userConvert = userRaw / 2.2046;
            printf("%f lbs. is %f kg.", userRaw, userConvert);
            break;
        case 2:
            printf("Fahrenheit to Celsius-\n");
            printf("Input degree(F) to convert: ");
            scanf("%lf", &userRaw);
            userConvert = ((userRaw -32) * 5) / 9;
            printf("%f F is %f C", userRaw, userConvert);
            break;
        case 3:
            printf("Miles to Kilometers-\n");
            printf("Input miles to convert: ");
            scanf("%lf", &userRaw);
            userConvert = userRaw * 1.609344;
            printf("%f miles is %f km", userRaw, userConvert);
            break;
        case 4:
            printf("Ounces to Mililiters-\n");
            printf("Input ounces to convert: ");
            scanf("%lf", &userRaw);
            userConvert = userRaw * 29.57352956;
            printf("%f oz is %f ml", userRaw, userConvert);
            break;
        }


    }
    printf("Exiting");
    return 0;
}
