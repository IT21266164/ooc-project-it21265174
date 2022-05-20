 
class Recipe
{
private:
 char recipeID;
 char recipeName;
 double recipePrice;

public:
 Recipe(char recipeID, char recipeName, double 
 recipePrice);
 void addRecipe();
 void displayRecipe();
 ~Recipe();
};