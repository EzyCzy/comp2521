Abstraction
is the process of hiding or generalising the details of an object or system
to focus on its high-level meaning or behaviour

Assembly languages abstract away machine code
Modern programming languages abstract away assembly code

A function abstracts the details or whatever step of computation

To use a system it must be enough to understand WHAT its components do
without knowing HOW...

a data type is a collection or grouping of values
- atomic
- composite/structured
- collection of operations on those values

An abstract data type:
- description of a data type from pov of a user
- operations on the data type
- behaviour of these operations

ADT doesnt specify how the datatype or operations is to be implemented

sets operations provided by an ADT is called the interface
users only SEE and INTERACT with the interface

ADT MUST:
1. clearly describe the behaviour of each operation
2. describe the conditions under which each operation can be used

ADTs
- Design by Contract
  - Programmers don't need to know how the ADT will be implemented, in order to start uisng it.
- Modular
  - The implementation of the ADT can be changed without updates being required to the broader application
- Security
  - Prevents operations which shouldn't be possible, from being executed on the data

.h file contains interface
.c file contains implementation

Interface includes:
- forward declaration of the struct for the concrete reprensentation
  - via typedef struct t *T
  - the struct is not defined in the interface
- function prototypes for all operations
- clear description of operations
  - via comments
- a contract between ADT and clients
  - docs describes how an operation is used
  - and what the expected result is as long as the operation is used correctly

Implementation includes: 
- concrete definition of the data structures
  - definition of struct t
-  function implementations for all operations

A user of an ADT #includes the interface and uses the interface functions to interact with the ADT
