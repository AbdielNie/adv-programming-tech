#include <iostream>
#include <string>


#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

#define NUM_COLOURS 7
#define NUM_READ 5
#define NUM_PROPS 2
#define PROP_NUMBER 7
/**
 * Topics:
 * 
 * 1. Revision/New:
 *  - 1D Array
 *  - 2d Array
 *  - std::string
 *  - Function
 * 2. Classes:
 *  - Declaration (all one file for now)
 *  - Definition (all one file for now)
 *  - Constructor
 *  - Calling methods
 *  - Copy??
 * 3. Pointers & Memory
 *  - Computer Memory Layout
 *  - Variables
 *  - Memory address
 *  - Pointer
 *   - Referencing
 *   - De-referencing
 *   - nullptr
 *  - Pass-by-reference
 *  - References
 * 4. Classes:
 *  - Pass-by-reference with pointer
 *  - De-reference notation (->)
 *  - "this" keyword
 */


void colourInfo(int colour);
void colourInfoArray(int colour);

int main(void) {

   // Goal: Implement Red 7!
   // Starting point: Represent Cards
   int number = 1;
   int colour = 0;
   int cardsPerColour = 7;
   int totalColours = 7;
   int totalCards = cardsPerColour * totalColours;

   std::cout << "Card Colour: " << colour << "\n";
   std::cout << "Card Number: " << number << std::endl;
   std::cout << "Total cards: " << totalCards << std::endl;

   // Read Colours from User (with defines)
   int cards[NUM_READ][NUM_PROPS] = {};
   for (int i = 0; i< NUM_READ;++i) {
      int c = 0;
      std::cin >> c;
      
      // store
      if (std::cin.good())
      {
         cards[i][PROP_COLOUR] = c;
         colourInfoArray(c);

         int number = 0 ;
         std::cin >> number;
         if(std::cin.good()){
            cards[i][PROP_NUMBER] =number;
         }

      }
   }

   printCards(cards);
   
   return EXIT_SUCCESS;
}


void colourInfo(int colour) {
   // Show Variable Scope
   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Ingido";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";
  
   std::cout << "Card Colour " << colour << " corresponds to ";
   if (colour == RED) {
      std::cout << red;
   } else if (colour == ORANGE) {
      std::cout << orange;
   } else if (colour == YELLOW) {
      std::cout << yellow;
   } else if (colour == GREEN) {
      std::cout << green;
   } else if (colour == BLUE) {
      std::cout << blue;
   } else if (colour == INDIGO) {
      std::cout << indigo;
   } else if (colour == VIOLET) {
      std::cout << violet;
   } else {
      std::cout << unknown;
   }
   std::cout << " with rule ";
   if (colour == RED) {
      std::cout << "Highest Card";
   } else if (colour == ORANGE) {
      std::cout << "Most of one Number";
   } else if (colour == YELLOW) {
      std::cout << "Most of one Colour";
   } else if (colour == GREEN) {
      std::cout << "Most Even Cards";
   } else if (colour == BLUE) {
      std::cout << "Most different Colours";
   } else if (colour == INDIGO) {
      std::cout << "Most Cards in a Row";
   } else if (colour == VIOLET) {
      std::cout << "Most Cards below 4";
   } else {
      std::cout << "???";
   }
   std::cout << std::endl;

   return;
}


void colourInfoArray(int colour) {
   std::string names[NUM_COLOURS] = {
      "Red",
      "Orange",
      "Yellow",
      "Green",
      "Blue",
      "Ingido",
      "Violet"
   };
   std::string rules[NUM_COLOURS] = {
      "Highest Card",
      "Most of one Number",
      "Most of one Colour",
      "Most Even Cards",
      "Most different Colours",
      "Most Cards in a Row",
      "Most Cards below 4"
   };

   // LEAVE OUT IF to show beyond array
   if (colour >= 0 && colour < NUM_COLOURS) {
      std::cout << "Card Colour " << colour << " corresponds to "
                << names[colour] << " with rule '"
                << rules[colour] << "'" << std::endl;
   } else {
      std::cout << "Card Colour " << colour << " is UNKNOWN" << std::endl;
   }

   return;
}
