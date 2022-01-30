# Object Oriented Programming in C++

**A. Class And Object**

There the three types of the Access Modifiers
1. Private
2. Public
3. Protected

Class Syntax
    
    class Class_name
    {
        // member functions
    };    // remember there is the semicolon
    
Object Creation In class are of two types
1. Static allocation
2. Dynamic Allocation

**Static allocation**
    
    class_name object;

ex. class student;

**Dynamic Allocation**

    class_name *object_name = new class_name;
    
ex. student *s = new student;

Defining Member functions outside the class

    data_type class_name :: method_name()
    {
        // code
    }
    //method_name = which is already defined in the class
    
Types of Constructors:
There are three types of constructors in C++ :

1. Default constructor

        class_name()
        {
              // code
        }
2. Parameterized Constructor

        class_name(Parameters)
        {
              // code
        }
3. Copy Constructor
        
        // constructor
        class_name0(parameters)
        {
              // code
        }
        
        // copy constructor 
        // it copies the class_name0 data to the class_name
        class_name( class_name0& ptr)
        {
            // code
        }

Destructor : it works opposite to the constructor
  Note:
  1. it do not have return type
  2. Destructor don't have any parameters
  3. In class only one destructor can be called

Destructor Syntax:

         ~class_name()    
         {   
              // code   
         }
         


































































