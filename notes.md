## Reference
A reference is an alias for an already existing variable
```
    int x = 10;
    int &y = x;
    cout<<&x<<endl; // 0x61feb8
    cout<<&y<<endl; // 0x61feb8
```

## Pass by value vs Pass by reference
In pass by value, copies of function arguments are created but in pass by reference, copies are not created i.e the caller and the callee use the same variables for the function parameter. In pass by value, the caller and the callee use different variables with the same value.


## Pointer vs reference
A pointer has its own memory address but reference shares the same memory address as the original variable. References can behave as pointers as well, but unlike pointers they are not NULLable.

Consider the following:
```
Car* c1 = new Car();
Car* c1 = new Car;
```
The difference between the two of them is that in the first case, the user wants to explicitly call the constructor but in the second case, it doesn't matter if the constructor is called or not.
```
int* test = new int - we have any initialization and value of *test can be any.

int* test = new int() - *test will have 0 value.
```

Constructors do not have any return type because they are not called directly by the code written by a user but they are called at runtime during object initialization.

### Overloaded assignment operator vs copy constructor
Copy constructor is called when a new object is created from an existing object, as a copy of the existing object while the assignment operator is called when an already initialized object is assigned a new value from another existing object. Copy constructor creates a separate memory block for the new object whereas the assignment operator does not create a new memory space. Assignment operator is overloaded by default.

```
void operator = (const Number &num){
    this->value = num.value*10;        
}

Number n1(1);
Number n2 = n1; // n2.value will be 1

Number n3;
n3 = n1; // n3.value will be 10
```

### Why (const type &) is used in copy constructor ?
Let's say we use `const type` as an argument to a copy constructor. This is a case of pass by value. The copy constructor is invoked whenever a copy of an object is created. Passing by value invokes the copy constructor which produces an infinite recursion. `const` is used to ensure that the user doesn't modify the original object when dealing with the copy constructor.

## Shallow copy and deep copy
In shallow copy, an object is created by simply copying the data of all variables of the original object. If some variables are dynamically allocated, then the copied object variable will also reference the same memory location which is not good because changes in one would change the another variable as well.
In deep copy, an object is created by copying the data of all variables, and it also allocates similar memory resources with the same value as the object. In order to perform deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well.

### lvalue and rvalue
`lvalue` refers to an object that has an identifiable location in memory. Expressions referring to editable locations are known as modifiable `l-values`. A modifiable l-value cannot have an array/incomplete type or a type with const attribute. It may appear at either left side or right of the assignment operator.

`rvalue` refers to data value that is stored at some address in memory. It is basically an expression that cannot have a value assigned to it. `rvalue` can appear on the right but cannot appear on the left of assignment operator.

```
int x = 10;
int &lref = x;
int &&rref = 10;  // && is symbol for rvalue reference
```
lvalue references can be assigned with rvalues but rvalue references cannot be assigned with lvalues.

lvalue references can be used to create an alias for an existing object, or for performing pass by reference operations, specially with copy constructors. rvalue references are used with the move constructor.

### Runtime polymorphism
A process in which a call to an overridden method is resolved at runtime rather than compile time.

A virtual function is a function that is originally declared in the base class and can be redefined in derived classes. Virtual functions cannot be static but can be friends. A class may have a virtual destructor but cannot have a virtual constructor. Runtime polymorphism is only achieved through a pointer of base class type. If a pointer or reference to the base class refers or points to an object of the derived class, then the version of virtual functions in derived classes can be called. Virtual functions are a little bit slower and difficult to debug.

## Empty Class
A class that does not contain any data members. However, it may contain member functions. The size of an empty class is one byte. A class without an object doesn't need any space allocated to it. Space is actually allocated when the class is instantiated, so 1 byte is allocated by the compiler to an object for its unique address identification. Note: this quantity is one byte because the minimum amount of memory that can be reserved is 1 byte.

## Virtual Destructor
Deleting an object of the derived class using a pointer to the base class type that has a non virtual destructor results in undefined behavior (destructor for the derived class is not called). To deal with it, a virtual destructor should be defined in the base class. Making the destructor of the base class virtual guarantees that the objects of the derived classes are destroyed properly.


## Exception Handling
C++ supports exception handling. Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. There are two types of execptions : synchronous and asynchronous. Asynchronous exceptions are beyond a program's control (for example: disk failure,keyboard interrupts, etc.)

```
try -> contains a block of code that may throw an exception.
catch -> contains a block of code that is executed when a particular exception is thrown
throw -> used to throw an exception. Also used to list the exceptions that a function throws but doesn't handle itself.
```
Note: implicit type conversion does not occur in exception handling.
catch(...) is used to catch all types of exceptions!
If an exception is thrown and not caught, the program terminates abnormally. Exceptions of the derived class should be caught before exceptions of the base class. However, in C++, the compiler does not check whether an exception is caught or not. So, it is not necessary to specify all uncaught exceptions. 

V.Imp: Whenever an exception is caught, all the objects in the enclosing try block are destroyed before control is passed to the catch block.


## Copy Semantics
Copy semantics means copying the actual data of an object to another object rather than making another object point to the already existing object.

## Move Semantics
It makes it possible for compilers to replace extensive copying operations with less expensive moves. Note: `void f(Widget&& w);` w is an lvalue, even if its type is rvalue reference to widget!  `std::move` and `std::forward` are function templates that perform casts. `std::move` casts its argument to an rvalue, while `std::forward` performs this cast only if a particular condition is fulfilled. Move requests into const objects are silently transformed into copy operations. 
## Move Constructor
On declaring a new object and assigning it with rvalue, firstly a temporary object is created, and then the temporary object is used to assign values to the object. Due to this, the copy constructor is called several times which decreases the computational power of code. To avoid this situation, move constructors are used.

A move constructor enables the resources owned by an rvalue object to be moved into an lvalue without copying. Move constructor makes the pointer of the declared object point to data of temporary object and NULLs out the pointer of temporary object. Thus, it prevents unnecessary copying of data.

## Dangling Pointer
Wild pointers that do not point to a valid object of any appropriate type. They are produced during object destruction, when the incoming reference is deallocated, without changing the value of the pointer. Thus, dangling pointers arise when objects are destroyed while pointers still point to them.

## Smart Pointers
They are wrappers around regular (raw) pointers that act much like regular pointers but avoid various pitfalls. There are four smart pointers in C++ : `std::auto_ptr`, `str::unique_ptr`,`std::shared_ptr` and `std::weak_ptr`. All of them keep in mind that objects are destroyed at appropriate time and manner. 

`unique_ptr` is used for exclusive-ownership resource management. It is movable but not copyable. Moving it transfers ownership from the source pointer to the destination pointer and the source pointer is set to NULL. Use it whenever you want to have single ownership of a resource.

`shared_ptr` is used for shared-ownership resource management. Many `shared_ptr` can point to a single resource. It maintains a value known as `reference count` which keeps a track of the number of `shared_ptr` pointing to an object.`shared_ptr` are twice the size of a raw pointer because they internally contain a raw pointer to the resource as well as a raw pointer to the resource's reference count. The resource is deleted when the reference count becomes zero.  There's a control block for each object managed by `shared_ptr` . `shared_ptr` constructors increase the reference count, `destructors` decrease the reference count. Copy assignment operators may do both. If sp1 and sp2 are shared_pointers to different objects, then the assignment sp1=sp2 modifies sp1 such that it points to the object pointed by sp2. The reference count for the object originally pointed by sp1 decreases and the reference count for the object pointed by sp2 incrases.
Move constructing a `std::shared_ptr` from another shared_ptr sets the source shared_ptr to NULL which means that the old shared_ptr stops pointing to the resource at the moment a new shared_ptr starts. As a result, no reference count manipulation is required.

`std::weak_ptr` is used to look for dangling pointers. They can neither be dereferenced nor be tested for NULLness. `weak_ptr` is not an standalone pointer, but it is augmented with `shared_ptr`. They are typically created from `shared_ptr`. They point to the same place wheret he shared_ptr initializes them and they not have any effect on reference count. They can be used to detect dangling pointers by calling wpw.expired() where `wpw` is a weak_ptr.

```
std::shared_ptr<Widget> spw1 = wpw.lock(); //null if wpw has expired
std::shared_ptr<Widget> spw3(wpw); // throw std::bad_weak_ptr if wpw has expired.
```
Size of weak_ptr is same as that of a shared_ptr.

### make_shared and make_unique vs new
make functions eliminate source code duplication, improve exception safety and generate faster code.


## Iterators
An iterator is an object that points to an element inside a container. There are five types of iterators::random-access, bidirectional,forward, input and output. Random access iterators are used in vectors. Pointer is a type of random access iterator.