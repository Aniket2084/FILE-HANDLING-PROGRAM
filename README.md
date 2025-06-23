# FILE-HANDLING-PROGRAM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ANIKET KESHRI

*INTERN ID*: CT04DG990

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH 

This C program is used to write, append, and read text from a file named "test.txt". It shows how to use file handling functions in C such as fopen(), fputs(), and fgetc() to perform these operations.

Let’s break down the program step by step and understand what it does.


**Step 1: Writing to a File**-->
The program opens a file named test.txt in write mode ("w").

If the file already exists, its old contents will be deleted.

It then asks the user to type a string using fgets(), and writes that string into the file using fputs().

The file is then closed using fclose().

Example:
If the user types: Hello, this is the first line.
This line will be saved into the file "test.txt".


**Step 2: Appending to the File**--->
Now, the program re-opens test.txt in append mode ("a").

This time, it asks the user for another input string to add at the end of the file.

The new string is added without deleting the old content.

The file is again closed.

Example:
If the user now types: This is the second line.
The file "test.txt" now contains:
Hello, this is the first line.
This is the second line.

**Step 3: Reading from the File**--->
The file is opened one more time, now in read mode ("r").

It uses a loop and fgetc() to read each character from the file until it reaches the end of file (EOF) or reads 199 characters.

The characters are stored one by one in the read[] array.

After the loop, a null character \0 is added to end the string.

Finally, it uses puts() to display the full content of the file on the screen.

**Output on screen:**

Hello, this is the first line.

This is the second line.

**Summary**
This program is a good example of how to:

Write to a file and replace old content.

Append new data to the end of an existing file.

Read the complete file content and display it.

It uses simple C functions and is very useful when you want to store user input and work with file data.


## OUTPUT:

![Image](https://github.com/user-attachments/assets/5ff4a744-e200-45db-97bc-bbb8fb5648c6)


### test.txt file

![Image](https://github.com/user-attachments/assets/ed4608e0-ee81-4c49-9da0-4fdf242792d2)


