## NAME SORTING PROGRAM ##
Description : A C++ console application that implements a name sorting system with a user-friendly interface
Author : Sylvelter Judin

## IMPLEMENTATION APPROACH ##

1. *Vector-Based Storage*
    - uses `vector<string>` to store names entered dynamically
    - this approach allows flexible storage of variable number of names

2. *Program Flow*
    - user-based continuos operation using a while loop (`programIsRunning`)
    - clear vector and screen between sorts
    - 2-second delay before exit to allow closing message to be shown

3. *Input Handling*
    - uses `cin` for integer input (number of names)
    - uses `getline` for string input (names)
    - uses `cin.ignore()` for input buffer management

4. *Sorting Implementation*
    - uses C++ STL `sort()` algorithm
    - sorts name in ascending alphabetical order
    - in-place sorting for the vector

5. *User Interface*
    - uses ANSI color codes for visual enhancement
    - uses ASCII characters for formatted borders
    - dynamic width calculation for aligned output
    - color-coded sections :-
    ```cpp
    #define RESET   "\033[0m"       //default color and headers
    #define RED     "\033[31m"      //RED for error messages
    #define GREEN   "\033[32m"      //GREEN for success messages
    #define YELLOW  "\033[33m"      //YELLOW for prompts
    #define CYAN    "\033[36m"      //CYAN for borders colors
    ```

## USAGE EXAMPLE ##
```plaintext
+----------------------------------------------+
|            Name Sorting Program              |
+----------------------------------------------+
| Enter the number of names: 3
+----------------------------------------------+

+----------------------------------------------+
|            Enter 3 names below               |
+----------------------------------------------+
| Name 1: Alice                                
| Name 2: Bob                                  
| Name 3: Charlie                              
+----------------------------------------------+

+----------------------------------------------+
|                Sorted Names                  |
+----------------------------------------------+
| 1. Charlie                                   |
| 2. Bob                                       |
| 3. Alice                                     |
+----------------------------------------------+

Continue sort? (Y/N):
```
## REQUIREMENTS ##
- Windows operating system
- C++ compiler (GCC recommended)
- Support for ANSI color codes in terminal

## HOW TO COMPILE ##

```bash
g++ sortNames.cpp -o sortNames
```

## HOW TO RUN ##

```bash
./sortNames
```
