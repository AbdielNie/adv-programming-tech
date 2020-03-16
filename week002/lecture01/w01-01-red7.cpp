#include <iostream>
#include <string>

/**
 * Topics:
 * 
 * 1. The basics:
 *  - comments 
 *  - data types (int/float/double/string)
 *  - operators
 *  - if/else
 *  - while/for
 * 2. Differences:
 *  - strings
 *  - read / write / endl
 *  - Declarations (#defines) & Compiler process - see slide
 * 3. Concepts:
 *  - Types & Typecasting
 *  - Declaration / Definition / Initialisation
 * 4. More differences:
 *  - Functions - parameter passing
 *  - Arrays
 *  - Namespace
 *  - Global Variables
 */

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

void printColour(int colour);

int main(void) {
   int cardNo = 3;
   int colour = 0;
   // char cardColorChar = 'i';

   std::cout << "Card no: " << cardNo << std::endl;
   // std::cout << "Card colour: " << cardColorChar << std::endl;

   // for (int colour = 0; colour < 8; colour++) {
   while (!std::cin.eof()) {
      std::cin >> colour;

      printColour(colour);

      std::cout << "actual read colour " << colour << std::endl;
   }

   return EXIT_SUCCESS;
}

void printColour(int colour) {
   colour = 1;

   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Ingido";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";

   std::cout << "Card Colour: ";
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
   std::cout << std::endl;
}
