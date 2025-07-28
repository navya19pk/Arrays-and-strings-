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

