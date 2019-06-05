#include "Pony.hpp"

void ponyOnTheHeap(){
    Pony *heap = new Pony("heap");
	heap->setPonyDetails("zoom", 3, "male", "blue");
    heap->getPonyDetails();
	delete heap;
}

void ponyOnTheStack(){
    Pony stack("stack");
	stack.setPonyDetails("Boom", 4, "female", "pink");
    stack.getPonyDetails();
}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}