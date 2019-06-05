#include <iostream>

main (){
    std::string phrase = "HI THIS IS BRAIN";
    std::string *ptr = &phrase;
    std::string &ref = phrase;
    return 0;
}