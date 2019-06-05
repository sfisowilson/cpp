#ifndef PONY_HPP
#define PONY_HPP
	#include <iostream>

	class Pony {
      private:
        std::string _gender;
        std::string _color;
        std::string _name;
		std::string _location;
        int _number_of_legs;

      public:
        Pony(std::string loc);
        ~Pony();
        void getPonyDetails();
        void setPonyDetails(std::string Name, int legs, std::string sex, std::string colour);
        
    };
	void ponyOnTheHeap();
	void ponyOnTheStack();
#endif