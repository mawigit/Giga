# Giga
Giga Engine

What is the difference between git and github?
* Git is a version control system, Github is a web-app using git (provides GUI)

Name 3 benefits of a version control system:
* (Commit) History, Versioning, easy collab and teamwork

Name 3 alternatives to git:
* Plastic, Perforce, SVN

Name 2 differences between git and other version control systems:
* Perforce: Efficient handling of large binary files
* Integration with game development tools like Unity and Unreal Engine

Name known issues related to game engines (Unreal, Unity) and version control systems:
* Large File/Project Sizes

Describe a logging system with your own words:
* Used to write (to console or file) certain messages depending on their severity (usually: TRACE, INFO, WARN, ERROR) - mainly used for debugging

What is the difference between git submodules and git subtrees?
* Git submodules and Git subtrees allow you to include external repositories, they differ in their approach to integration, referencing, and updating. Submodules maintain a separation between repositories, while subtrees integrate the histories

What is a build system in C++? Name 3 build systems:
* A build system is a set of tools and processes that automate the compilation, linking, and other tasks involved in transforming source code into an executable or library
* Make, CMake, Bazel

What is a package manager in C++? Name 3 package manager:
* A package manager is a tool that simplifies the process of managing libraries, dependencies, and other external components, it automates the download, installation, and configuration of libraries
* Hunter, Conan, vcpkg

What is the difference between a dynamic linked library and a static library?
* Static libraries are integrated into the executable during the compilation phase, resulting in larger executables, while dynamic libraries are linked at runtime, providing more flexibility, shared code among multiple programs, and easier updates without recompilation

What is a Design Pattern?
* A design pattern is a general reusable solution to a commonly occurring problem within a particular context in software design. It is a description or template for solving problems that can be adapted to fit the needs of different situations. Design patterns are not finished designs or concrete implementations but rather guidelines for solving certain problems in a flexible and maintainable way.
 
Name and describe 2 Design Patterns (except façade or adapter):
* Singleton: Used to ensure the class can only have 1 instance 
* Factory: Useful when a superclass with multiple sub-classes needs to create a sub-class based on input

What is a precompiled header? Name pros and cons:
* In summary, precompiled headers can be a powerful tool for improving compilation times, especially in large projects with many common headers. However, their adoption should be carefully considered based on the specific characteristics of the project and the development environment. The pros and cons listed above can help guide decisions about whether to use precompiled headers in a given context.
* Pros:Compilation Speed Improvement, Reduced Redundant Work, Ease of Maintenance:
* Cons: Dependency on Compiler and Platform, Increased Memory Usage, Build System Complexity

Describe the layer of abstraction with your own words:
* A layer of abstraction is a conceptual barrier that separates the implementation details of a system or component from the rest of the system, providing a simplified and well-defined interface. Hides complexity

Name the SOLID principles and describe them briefly:
* Single Responsibility Principle (SRP):
  - Principle: A class should have only one reason to change, meaning that a class should have only one responsibility or job.
  - Brief Description: A class should be designed to have only one reason to change, and it should encapsulate only one responsibility. This principle promotes modularity and makes classes more focused and easier to maintain.

* Open/Closed Principle (OCP):
  - Principle: Software entities (e.g., classes, modules, functions) should be open for extension but closed for modification.
  - Brief Description: Once a class is implemented, it should be closed for direct modification but open for extension through the addition of new functionality. This principle encourages the use of interfaces, abstract classes, and inheritance to allow for future enhancements without modifying existing code.

* Liskov Substitution Principle (LSP):
        Principle: Subtypes must be substitutable for their base types without altering the correctness of the program.
        Brief Description: Objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program. This principle ensures that derived classes adhere to the behavioral expectations of their base classes.

* Interface Segregation Principle (ISP):
  - Principle: Clients should not be forced to depend on interfaces they do not use.
  - Brief Description: A class should not be forced to implement interfaces it does not use. Instead of having large, monolithic interfaces, it's better to have smaller, specific interfaces tailored to the needs of the implementing class. This principle helps prevent the creation of "fat" interfaces that contain more methods than a class needs.

* Dependency Inversion Principle (DIP):
  - Principle: High-level modules should not depend on low-level modules. Both should depend on abstractions. Abstractions should not depend on details. Details should depend on abstractions.
  - Brief Description: High-level modules (e.g., business logic) should not depend on low-level modules (e.g., database access); both should depend on abstractions (e.g., interfaces or abstract classes). This principle promotes the use of dependency injection and inversion of control to decouple components, making the system more flexible and easier to maintain.
