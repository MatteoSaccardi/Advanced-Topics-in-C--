#include <iostream>

#define FUNCTION_A(name, a   ) int     fun_##name() {return a;  }
#define FUNCTION_B(name, b, c) double  fun_##name() {return b+c;}

FUNCTION_A(pippo,    12    )
FUNCTION_A(pluto,     2    )
FUNCTION_B(paperino, 23, 10)

#undef FUNCTION_A
#define FUNCTION_A 34
#define OUTPUT(a) std::cout << #a << std::endl

int main()
{
    std::cout << "pippo   : " << fun_pippo()    << std::endl ;
    std::cout << "pluto   : " << fun_pluto()    << std::endl ;
    std::cout << "paperino: " << fun_paperino() << std::endl ;
    std::cout << "FUNCTION: " << FUNCTION_A     << std::endl ;
    OUTPUT(minnie) ;
}