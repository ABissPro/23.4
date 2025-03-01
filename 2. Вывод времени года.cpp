#include <iostream>

//Определите один из этих макросов перед компиляцией!
 #define SPRING
// #define SUMMER
// #define AUTUMN
// #define WINTER

#if defined(SPRING) && !defined(SUMMER) && !defined(AUTUMN) && !defined(WINTER)
int main() {
    std::cout << "Spring" << std::endl;
}
#elif defined(SUMMER) && !defined(SPRING) && !defined(AUTUMN) && !defined(WINTER)
int main() {
    std::cout << "Summer" << std::endl;
}
#elif defined(AUTUMN) && !defined(SPRING) && !defined(SUMMER) && !defined(WINTER)
int main() {
    std::cout << "Autumn" << std::endl;
}
#elif defined(WINTER) && !defined(SPRING) && !defined(SUMMER) && !defined(AUTUMN)
int main() {
    std::cout << "Winter" << std::endl;
}
#else
#error "Ровно один макрос должен быть определен: SPRING, SUMMER, AUTUMN или WINTER"
#endif
