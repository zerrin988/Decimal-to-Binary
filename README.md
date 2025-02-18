# **Decimal to Binary Conversion**  

## **Overview**  
This program converts a **decimal integer** into its **binary representation** using **repeated division by 2** and stores the remainders in an array.  

## Input
You have to manually change the input from the code as there is no Input mechanism impletmented

## **How It Works**  

### **1. Storing Remainders (Binary Digits)**  
- **Loop:**  
  - `input % 2` gets the remainder (0 or 1).  
  - The remainder is stored in `result[counter]`.  
  - `input /= 2` updates `input` for the next iteration.  
  - `counter++` tracks the number of binary digits.  

### **2. Printing the Binary Number**  
- **Loop:**  
  - Reads `result[]` in **reverse order** to print the correct binary sequence.  

## **Example Run**  
```plaintext
Input: 10
Binary Representation: 1010
```

## **Main Components**  

### **Loop 1: Storing Remainders**  
```c
while (input > 0) {
    remainder = input % 2;
    result[counter] = remainder;
    input /= 2;
    counter++;
}
```
- Converts `10` to binary:  
  ```plaintext
  10 ÷ 2 → remainder 0  
  5 ÷ 2 → remainder 1  
  2 ÷ 2 → remainder 0  
  1 ÷ 2 → remainder 1  
  ```
  Stored as `{0, 1, 0, 1}`.  

### **Loop 2: Printing Binary Digits in Reverse Order**  
```c
for (i = counter; i > 0; i--)
{
    printf("%d", result[i - 1]);
}
```
- Outputs `1010`.  

## **Notes**  
- **Hardcoded array size (`result[5]`)**.
- **Can use bitwise shifts**: Instead of division, `input >> 1` is an alternative, it is also a better method.  

## **Compilation & Execution**  
```sh
gcc decimal_to_binary.c -o decimal_to_binary  
./decimal_to_binary  
```

## **Example Output**  
```sh
1010
```
-------------
## License
This project is open-source and available under the [MIT License](LICENSE).
