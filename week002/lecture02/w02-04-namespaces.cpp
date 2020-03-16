
#include <iostream>
#include <string>

using namespace std;

namespace test {
   void foo() {
      std::cout << "test::foo" << std::endl;
   }

   namespace more {
      void foo() {
         std::cout << "test::more::foo" << std::endl;
      }
   }
}

void foo() {
   std::cout << "foo" << std::endl;
}

using namespace std;

int main (void) {

   // Strings
   std::string s = "this is a string";
   std::cout << "string: " << s << std::endl;


   return EXIT_SUCCESS;
}
