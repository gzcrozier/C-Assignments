# C++ Assignments
HW assignments for my Intro to Programming (C++) course.

#### Q0 
Write a program that takes two integers from the user, stores them in two variables, and print their values in the following format:
”{var1} : {val1} and {var2} : {val2}” where {var1} is the name of the first variable, {val1} is its value, etc. Swap the values of your two variables and print their values in the same format.

#### Q1 
Write a program that reads a string using cin, reverses it using a for loop, and prints it out. Eg. For the input ”Hello”, your program should print ”olleH”.

#### Q2
Write a program that declares an array of integers, of length 15, and ini- tialise it with [-12, 4, 12, 3, 1, 7, 25, 0, 25, 1, 127, -15, 12, 13, 25]. Using a single for loop find both the maximum, and the minimum elements of the array. Print both of them.

#### Q3
Write a program that declares a 2 dimensional 4 × 5 array of integers. Initialise the array manually with your favourite values. Create another array, this time one dimensional, of length 4. Using two nested for loops, assign the product of all values in the nth array of the 2-d array to the nth element of your 1-d array. (eg. if arr1[2] = {4, -2, -1, 12, 7}, arr2[2] = 672). Print the elements of the 1-d array.

#### Q4
Write a program that takes a string, prints ”true” if the string is a palin- drome and prints ”false” otherwise. A palindrome is a string that reads the same whether it is read from left to right or from right to left.
For instance, ”wow” is an odd-length palindrome, and ”abba” is an even length palindrome.

#### Q5 
Write a program that takes a string and converts all the lower case alphabet- ical characters to upper case and vice versa, and leave the non-alphabetical characters as they are.
For instance, given the input ”12aSd@Az”, your program should print ”12AsD@aZ”.

#### Q6 
Write a program that takes an integer as its input, stores it in a variable called n, and prints out a triangle with n lines. The first line should contain a single ∗, the second line should contain 3 ∗s, and so on.
Note that your program should print the right number of leading spaces.

### Q7 
Create a struct called Point with two member variables x and y of type double. Create a constructor that takes two doubles and assigns them to its member variables.
Create a struct called Rectangle with 4 member variables of type double named x1, x2, y1, y2. Create a constructor that takes the 4 arguments (2 xs and 2 ys) and assigns them to Rectangle’s member variables. Assign the smaller x to the member variable x1, and the larger x to x2 (you will need to compare the two arguments and assign them to the right member variable in the body of your constructor). Assign the lower y value to y1 and the larger y value to y2.
Create another constructor for Rectangle that takes two Points. Assign the member variables of your Points to the member variables of your Rectangle. Make sure x1 < x2, and y1 < y2. Note that you can use a previously defined constructor for the very struct in the initialiser list of different constructors for the same struct.
