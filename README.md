# **Arduion_library_creation_guide**
This repo will tell you how to create your own custom library.



1. Open your arduion ide and create a normal ino file as you do for your projects.
 
    - add a .h and .cpp file to it by using (...) 3 dots which located at Right hand top corner under serial monitor.
    ![image](/assets/images/arduinodot.png "test")
    - name it whatever you want in my case TestLib.h and TestLib.cpp
    - in .h file create ifndef loop to check whetere your lib pre existed or not and name it whever you want.
    - now if you seed in my example code TestLib.h file we are checknig arduion version and define the lib.
    - creating a class to hold your variables.
    - ending the class with (;).
    - ending the #ifndef by #endif

2. Code in .cpp file 
    - you write you logic in .cpp file what operation you have to perform in my case it's additon.
    - you have to initialize the TestLib.h in .cpp file you created Like #include "TestLib.h"
    - To call the members of calls will be like this TestLib:: . 
    - In my case I'm creating a int called sum which will return addition of the two Varriables.


3. calling the lib in main code
    - initialize the lib by #include "TestLib.h" 
    - declared the type as TestLib  and it's name what you want to use in your code.
    - passing 2 int to call like this testlib.sum(1,2); testlib what we declared, sum is a function will return additon of two numbers.

4. creation of keywords.txt
    - this file is helpful to colour the syntax in ide by defining it's grade
    1. KEYWORD1
    2. KEYWORD2
    - Are the examples 
5. you can put the 3 file .h .cpp .txt in arduion library files by creating name of folder TestLib


### 6. take a look at comment you will understand the code easily than steps.