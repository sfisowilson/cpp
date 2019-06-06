#include <iostream>

class Brain
{
private:
    std::string _brain_address;
public:
    Brain();
    ~Brain();
    std::string identify();
    void setAddress(void);
};

