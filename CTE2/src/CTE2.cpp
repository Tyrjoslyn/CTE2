/*pseudocode for CTE2
  1. Create a for loop that iterates three times
  2. Create variable string s1 and ask user for input
  3. Create variable string s1 and ask user for input
  4. Create variable string c
  5. Copy s1 into c
  6. Concatenate s2 into c
  7. display string of letters
  8. after three iterations, end program
*/

#include <iostream>
#include <cstring>

int main() {
    for (int i = 0; i < 3; ++i) {
        char s1[100];
        char s2[100];
        char c[200];

        std::cout << "input a string of letters: ";
        std::cin.getline(s1, 100);
        std::cout << "your input was: " << s1 << std::endl;
        std::cout << "enter another string: ";
        std::cin.getline(s2, 100);
        std::cout << "your 2nd string was: " << s2 << std::endl;
        strcpy(c, s1);
        strcat(c, s2);
        std::cout << "Concatenated string: " << c << std::endl;
        std::cout << " " << std::endl;
    }
    std::cout << "end of program" << std::endl;

    return 0;
}

