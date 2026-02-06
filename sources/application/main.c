//----------------------------------------------------------------------------------------
// Title:       main.c
// Author:      J. Gohlke
// Description: main-application
//----------------------------------------------------------------------------------------
#include "main.h"

//----------------------------------------------------------------------------------------
//                                      Functions
//----------------------------------------------------------------------------------------





//----------------------------------------------------------------------------------------
// Description: starting point      
//----------------------------------------------------------------------------------------
int main (void)
{
    printf("Application startet...\r\n");
    
    Hauptmenu();
    //----

    CHAR ingredient [50];

    printf("Geben Sie eine Zutat ein: ");
    if (fgets(ingredient, sizeof(ingredient), stdin) != NULL)
    {
        // Entfernen des Zeilenumbruchs am Ende der Eingabe
        size_t len = strlen(ingredient);
        if (len > 0 && ingredient[len - 1] == '\n') ingredient[len - 1] = '\0';
    }

    FILE *file = fopen("../recipes/test.rez", "a");    // Anhängemodus

    if (file != NULL)
    {
        fprintf(file, "%s\n", ingredient);    // Zutat in die Datei schreiben
        fclose(file);
        printf("Zutat wurde gespeichert.\r\n");
    }
    else 
    {
        printf("Fehler beim Öffnen der Datei.\r\n");
    }
}