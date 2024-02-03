# CPP03

## Inheritance

[**Inheritance**](https://www.geeksforgeeks.org/inheritance-in-c/)

[**Multiple Inheritance**](https://www.geeksforgeeks.org/multiple-inheritance-in-c/)

[**Multiple, Multilevel and Hierarchical Inheritance**](https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance)

[**Constructor and Destructor Inheritance**](https://stackoverflow.com/questions/14184341/c-constructor-destructor-inheritance)

```CPP
Class Cat : public Animal // Cat is an animal and inherits from Animal class
{
	... //inherits attributes and methods from Animal, but those attributes and methods may be changed, if they're protected or public.
}
```

## Public vs Protected vs Private

Public: accessible from anywhere.

Protected: only accessible from an instance of a class or from an instance of a child class.

Private: always accessible from an instance of a class, not from an instance of a child class.

## [Access Modes in C++ Inheritance](https://www.programiz.com/cpp-programming/inheritance)

The various ways we can derive classes are known as **access modes**.
1.	**Public**: The members of the base class are inherited by the derived class just as they are.
2.	**Protected**: The **public members** of the base class become **protected members** in the derived class.
3.	**Private**: **All members** of the base class become **private** members in the derived class.

Note: private members of the base class are inaccessible to the derived class.

## [Virtual base class in C++](https://www.geeksforgeeks.org/virtual-base-class-in-c/)

**Virtual base classes** are used in **virtual inheritance** in a way of preventing multiple instances of a given class appearing in an inheritance hierarchy when using multiple inheritances.

Consider the situation where we have one class A. This class A is inherited by two other classes B and C. Both these classes are inherited into another in a new class D.\
Data members/functions of class A are inherited twice to class D, one through class B and second through class C. This causes ambiguity, and a compiling error.

To resolve this ambiguity, when class A is inherited in both class B and class C, it is declared as virtual base class by using the keyword **virtual**:

```CPP
class B : virtual public A
{
};

class C : virtual public A
{	
};
```

Now, only one copy of data/function member will be copied to class C and class B, and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances. When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data member. A single copy of its data members is shared by all the base classes that use the virtual base.