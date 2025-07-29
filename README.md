Aim: To study and implement Arrays and Strings in C++

#Program a: Printing Array elements 
This program initializes an integer array with predefined values {10, 20, 30, 40, 50}. It calculates the size of the array and then prints each element using a for loop. The output displays all the array elements in a single line.

Algorithm:

Step- 1: Start
Step- 2: Declare and initialize the array with fixed elements.
Step- 3: Calculate the size of the array using:
size = sizeof(array) / sizeof(array[0])
Step- 4: Use a loop from i = 0 to i < size to:
Step- 5: Print each element array[i]
Step- 6: End the loop.
Step- 7: End

#Program b: To find a given number in an array
This program searches for a number (entered by the user) in a predefined array using linear search. It compares each element of the array with the entered number and prints the index if found. If not found, it informs the user accordingly.

Algorithm:

Step- 1: Start
Step- 2: Declare and initialize an array.
Step- 3: Calculate the size of the array.
Step- 4: Prompt the user to enter a number (key) to search.
Step- 5: Set a flag variable found = false.
Step- 6: Use a loop from i = 0 to i < size:
Step- 7: If arr[i] == key:
Print the index i
Step- 8: Set found = true and break the loop.
Step- 9: After the loop, if found == false, print that
Step- 10: End

#Program c: To find the sum and average of Array elements 
This program calculates the sum and average of the elements in a predefined array {10, 20, 30, 40, 50}. It uses a for loop to sum all the elements, then divides the total by the number of elements to find the average. Both the sum and average are displayed as output.

Algorithm:

Step- 1: Start
Step- 2: Declare and initialize the array with elements.
Step- 3: Calculate the number of elements in the array:
size = sizeof(arr) / sizeof(arr[0])
Step- 4: Initialize sum = 0
Step- 5: Loop from i = 0 to i < size:
Step- 6: Add each element to sum
Step- 1: After the loop, calculate the average:
average = sum / size (typecast sum to float to avoid integer division)
Step- 7: Display the sum and average
Step- 8: End

#Program d: To find the minimum and maximum in an Array
This program takes the array size and elements as input from the user. It then scans through the array to find the maximum and minimum values using a for loop. The final output displays both the highest and lowest values from the array.

Algorithm:

Step- 1: Start
Step- 2: Prompt the user to enter the size of the array.
Step- 3: Declare an array of the given size.
Step- 4: Use a loop to take input for all elements of the array.
Step- 5: Initialize two variables:
max = arr[0]
min = arr[0]
Step- 6: Loop from i = 1 to i < size:
Step- 7: If arr[i] > max, set max = arr[i]
Step- 8: If arr[i] < min, set min = arr[i]
Step- 9: Print the values of max and min.
Step- 10: End

#Program e: Different ways to declare and initialize a string
This program firstly contains std::string str1;: This line declares a string object str1 using the default constructor. Initially, str1 is empty because no value is assigned when the object is created.Then it have std::getline(std::cin, str1);: This reads a full line of text from the user input (including spaces) and stores it in str1. std::cin reads input, and std::getline() is used to capture the entire line, even if it contains spaces and finally displays the value entered by the user for str1.

Algorithm:

Step- 1: Declare an empty string (str1) using std::string:
Step- 2: Declare str1 as an empty string.
Step- 3: Prompt user to enter a string.
Step- 4: Use std::getline() to take input and display str1.
Step- 5: Declare and initialize a string (str2) with user input:
Step- 6: Declare str2 as a std::string.
Step- 7: Prompt user to enter a string for str2.
Step- 8: Use std::getline() to get input and display str2.
Step- 9: Declare and initialize another string (str3) with user input:
Step- 10: Declare str3 as a std::string.
Step- 11: Prompt user to enter a string for str3.
Step- 12: Use std::getline() to take input and display str3.
Step- 13: Create a string (str4) with repeated characters (*):
Step- 14: Use std::string str4(repeatCount, '*') to create the string and display it.
Step- 15: Create a copy of str2 into str5:
Step- 16: Declare str5 as a copy of str2.
Step- 17: Display str5.
Step- 18: Declare and initialize a C-style string (cstr1) using std::cin.getline():
Step- 19: Declare cstr1 as a character array of size 100.
Step- 20: Prompt user for input and store it using std::cin.getline().
Step- 21: Display cstr1.
Step- 22: Declare and initialize another C-style string (cstr2) using std::cin.getline():
Step- 23: Declare cstr2 as a character array of size 100.
Step- 24: Prompt user for input and store it using std::cin.getline().
Step- 25: Display cstr2.
Step- 26: Initialize a constant pointer to a C-string literal (cstr3):
Step- 27: Declare cstr3 as a pointer to a constant C-string.
Step- 28: Display cstr3
Step- 29: End.

