//----------------------------------------------------------------------------------------
// Title:       Menu.c
// Author:      J. Gohlke
// Description: Implementation file for Menu.h
//----------------------------------------------------------------------------------------
#include "Menu.h"

//----------------------------------------------------------------------------------------
//                                      Functions
//----------------------------------------------------------------------------------------
void printHauptmenu (void);





//----------------------------------------------------------------------------------------
// Description: print the main menu    
//----------------------------------------------------------------------------------------
void printHauptmenu (void)
{
    printf("\r\n");
    printf("+-----------------------------+\r\n");
    printf("| Hauptmenu:                  |\r\n");
    printf("|-----------------------------|\r\n");
    printf("| 1 = Rezepte anzeigen        |\r\n");
    printf("| 2 = Rezept hinzufügen       |\r\n");
    printf("| 3 = Rezept löschen          |\r\n");
    printf("|                             |\r\n");
    printf("| STRG+c = Beenden            |\r\n");
    printf("+-----------------------------+\r\n");
    printf("\r\n");
}





//----------------------------------------------------------------------------------------
// Description: Hauptmenu
//----------------------------------------------------------------------------------------
void Hauptmenu (void)
{
    // Variables:
    static UINT8 input = 0;

    // Code:
    printHauptmenu();
    
    scanf("%c", &input);
    while (getchar() != '\n');

    switch (input)
    {
        case SHOW_RECIPES:  printf("Rezepte anzeigen\r\n");     break;
        case ADD_RECIPE:    add_Recipe();                       break;
        case OPEN_RECIPE:   printf("Rezept öffnen\r\n");        break;
        case DELETE_RECIPE: printf("Rezept löschen\r\n");       break;
        default:            printf("Ungültige Eingabe\r\n");    break;
    }
}