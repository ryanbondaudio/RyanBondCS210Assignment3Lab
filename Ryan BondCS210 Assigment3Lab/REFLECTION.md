1. In LinkedList::deleteFront(), why does it take two separate delete calls instead of one?
Name exactly what each one frees, and name the two new calls back in the program responsible
for putting them on the heap in the first place.

deleteFront() first deletes the data held in the pointer of the temporary variable called “doomed,” then deletes the
node pointer itself. The two calls responsible for putting them on the heap are new int (created as the argument for 
addFront in main.cpp), and new Node created inside the addFront function in LinkedList.h; finally, in deleteFront, 
doomed is set to point to the head node as a temporary variable, and head is moved to head->next. Then doomed is 
destroyed.

2. ArrayList never had a destructor before today. Explain, in your own words, why switching
from T data[CAPACITY] to T* data [CAPACITY] is what made a destructor necessary, and what
would happen if you forgot to write one. Would you get a compiler error? Why or why not?

A destructor becomes necessary when using pointers because we need to clean up unmanaged heap memory to prevent memory
leaks and undefined behavior. If you forget to write a destructor, both can happen, and the program can break when 
it’s released, which will make the lead dev upset about your messy garbage collection. Despite having no compile 
errors, this code still runs. This is because the compiler doesn’t flag a memory leak or undefined behavior as a 
reason to crash; the compiler lets it run, assuming that you know what you’re doing.

3. search() and addFront() both take a T*, but they treat that pointer completely differently.
Explain the difference in terms of ownership: which one is allowed to delete what you hand it,
and which one is never allowed to?

Since the functions serve different purposes, the pointers must be treated differently. While addFront takes ownership
of the T* pointer, search does not. In addFront, the T* allocates a new node in memory and is held in a temporary 
variable before being assigned to the list. In search, T* is used merely as a key to find a matching item in the list.

4. You swapped LinkedList<T> for ArrayList<T> inside makeList() and reran main.cpp without
changing a single line there. What two mechanisms, by name, made that possible?

The two mechanisms that made this possible are polymorphism and inheritance.

5. Pick one keyword from the Key Terms glossary that you either had to add today or wouldn’t have
thought to add on your own (explicit, override, virtual, const, or any other). Describe, in
your own words and without copying the guide’s wording, the smallest example you can think
of where leaving it out would cause a real problem

Virtual: I would not have used this because I didn’t know what this keyword does. This keyword tells the compiler to 
evaluate the function at runtime, choosing which function to call based on the context in the code. If there is no 
virtual keyword, the program will call the base function and not the inherited one.