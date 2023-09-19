1.
#include <iostream>

int main()
{
    char  sym;
    do{
        std::cout << "Enter the latter: ";
        std::cin >> sym;
        
    }while(sym < 'A' || sym > 'Z');
    sym = sym + 32;
    std::cout << sym;
   return 0;
}


2. 
