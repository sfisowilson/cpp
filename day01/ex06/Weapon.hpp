#ifndef WEAPON_HPP
#define WEAPON_HPP

    #include <iostream>
    class Weapon
    {
    private:
        std::string _type;
        
    public:
        Weapon(std::string );
        ~Weapon();
        void    setType(std::string);
        const std::string& getType(void);
    };



#endif