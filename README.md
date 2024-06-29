# Array Sum Program
This project contains C programs `arraySum.c` and `arraySum2.c` that calculate the sum of elements in arrays, compiled using a Makefile to create two separate executables.


## Compilation
To compile the programs, use the provided Makefile. Open a terminal and navigate to the directory containing arraySum.c, arraySum2.c, and the Makefile. Run the following command:

This will compile `arraySum.c` into `array1` and `arraySum2.c` into `array2`.


## Usage
After compilation, you can run the executables from the terminal:
```console
User@Github:~$ ./array1
User@Github:~$ ./array2
```
Follow the prompts to input array sizes and elements for each program.


## Cleaning
To clean up compiled executables, run:
```console
make clean
```

This will remove the `array1` and `array2` executables.


## Test cases

### Test Case 1: Valid Input

**Input:**
```console
Enter Array Size (up to 100):
5
Enter Array Elements:
10 20 30 40 50
```

**Expected Output:**

```console
Sum of the Array = 150
```
### Test Case 2: Edge Case - Minimum Size

**Input:**
```console
Enter Array Size (up to 100):
1
Enter Array Elements:
100
```

**Expected Output:**
```console
Sum of the Array = 100
```

### Test Case 3: Edge Case - Maximum Size

**Input:**
```console
Enter Array Size (up to 100):
100
Enter Array Elements:
1 2 3 ... (up to 100 numbers)
```

**Expected Output:**
```console
Sum of the Array = 5050
```
### Test Case 4: Invalid Input - Negative Size

**Input:**
```console
Enter Array Size (up to 100):
-5
```

**Expected Output:**
```console
Invalid array size. Please enter a size between 1 and 100.
```

### Test Case 5: Invalid Input - Exceeding Maximum Size

**Input:**
```console
Enter Array Size (up to 100):
150
```

**Expected Output:**

```console
Invalid array size. Please enter a size between 1 and 100.
```