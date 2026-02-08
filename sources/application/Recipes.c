//----------------------------------------------------------------------------------------
// Title:       Recipes.c
// Author:      J. Gohlke
// Description: Implementation file for Recipes
//----------------------------------------------------------------------------------------
#include "Recipes_data.h"





//----------------------------------------------------------------------------------------
//                                      Functions   
//----------------------------------------------------------------------------------------





//----------------------------------------------------------------------------------------
// Description: add a recipe
//----------------------------------------------------------------------------------------
void add_Recipe (void)
{
    // Variables:
    tRecipe new_recipe;
    FILE *file;
    CHAR file_name [MAX_FILE_NAME_LENGTH] = "../recipes/";

    // Code:
    printf("Name des neuen Rezeptes:\t");

    scanf("%s", new_recipe.name);
    while (getchar() != '\n');

    strcat(file_name, new_recipe.name);
    strcat(file_name, ".rez");

    file = fopen(file_name, "a");    // Anhängemodus

    if (file != NULL)
    {
        fprintf(file, "Rezept: %s\n", new_recipe.name);
        fclose(file);
        printf("Rezept %s.rez wurde gespeichert.\r\n", new_recipe.name);
    }
    else 
    {
        printf("Fehler beim Erstellen der Datei %s.\r\n", file_name);
    }
}