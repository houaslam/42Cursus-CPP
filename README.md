# CPP

QUESTION = why to use private member in class? 

ANSWER -> 

QUESTION = what is difference bettween a reference and a pointer? 

ANSWER -> 

{ 

    for the pointer , u should dereferencit to get the value

    for the reference , not neccecery

    for the pointer , its possible to initialize it with null

    for the reference , it always has to refer to an exist object

    for the pointer , can be reasigned

    for the reference , one it refer to an object , in reasigning case it reasign the original obj

}

QUESTION = why to use a reference ? 

ANSWER -> 

{
	answer above

}


QUESTION = what is an object ? 

ANSWER -> 

{
	is the type we create with a class

}


QUESTION = what is a pointer to member ? 

ANSWER ->

{
	when u create a pointer and pointe on a member 

}


QUESTION = what "this" parameter is used for? 

ANSWER -> 

{ 

    It can be used to pass current object as a parameter to another method.

    It can be used to refer current class instance variable.

    It can be used to declare indexers.

}

QUESTION = why to use initialization list ?

ANSWER -> 

{
	in const case if we should initialize the const not assign a value to it that why we use initialization list (it initialize not assign)

}


QUESTION = what function(parameter)const() means?

ANSWER -> 

{
	means the method will not modify any member variables of the class

}


QUESTION = what is the an instance member?

ANSWER -> 

{
	Instance members belong to the object that they are instantiated from.

}


QUESTION = what is the difference bettween instance and static member ?

ANSWER ->

{

    Static: Static members are shared with all objects of the class.

    Instance: Instance members belong to the object that they are instantiated from.

}

QUESTION = what is the difference bettween instance and object ?

ANSWER ->

{  

    let's say we have a class called "Car" that defines the properties and behaviors of a car

    When we create an object from that class

    such as "myCar," it becomes an instance of the "Car" class

    "myCar" represents a specific car with its own set of characteristics and actions.

}

QUESTION = why to use pointer to function

ANSWER ->

{

    it is just like variable pointers points to the address of the first line of code in a function

}

QUESTION = what is difference bettween function and function()?

ANSWER ->

{ 

    If we add the brackets to the function name

    it becomes a function call, but without it

    we can access the address of the corresponding function

}

QUESTION = why do i need to create an object to call a pointer to memeber function ?

ANSWER ->

{ 

    because member functions have a hidden "this" parameter

    and so can only be called if you supply an 

    object to play the role of "this"

}

QUESTION = what is the construction difference bettween pointer to function and pointer to memeber function ?

ANSWER ->

{

    *Declaring a pointer to an ordinary function:

        return_type (*pointer_name) (parameter types)

    *Declaring a pointer to a member function:

        return_type (class_name::*pointer_name) (parameter types)

    *Setting an ordinary function pointer to point to a function:

        pointer_name = &function_name;

    *Setting a member function pointer to point to a member function:

        pointer_name = &class_name::member_function_name;

    *Calling an ordinary function using a pointer to ordinary function:

        result = (*pointer_name)(arguments);

    *Calling the member function on an object using a pointer-to-member-function

		result = (object.*pointer_name)(arguments);

}

QUESTION = what are ::* | .* | ->* for ?

ANSWER ->

{

    ::* -> This operator allows us to create a pointer to a class member.

    .*  -> This operator uses the pointer to the member of a class to access the member of a class.

    ->* -> This operator uses the pointer to the member of a class to access member of a class.

}
