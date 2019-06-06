#include <iostream>

main (){
    std::string phrase = "HI THIS IS BRAIN";
    std::string *ptr = &phrase;
    std::string &ref = phrase;

    std::cout << "string : "<<phrase<<std::endl;
	std::cout << "pointer : " << *ptr << std::endl;
	std::cout << "reference : " << ref << std::endl;
    
    return 0;
}