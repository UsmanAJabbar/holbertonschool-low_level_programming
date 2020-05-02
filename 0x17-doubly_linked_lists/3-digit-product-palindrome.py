#!/usr/bin/python3

palindrome = 0
value = 0

# Left Value Loop
for l in range(100, 1000):
    # Right Value Loop
    for r in range(100, 1000):
        # Convert to a string to compare
        calc = str(l * r)

        # Check if the value is a palindrome
        # 3 digit products could only have 5/6 digit outputs
        if len(calc) == 5:
            if calc[0] == calc[4] and calc[1] == calc[3]:
                    palindrome = int(calc)
        elif len(calc) == 6:
            if calc[0] == calc[5] and calc[1] == calc[4] and calc[2] == calc[3]:
                    palindrome = int(calc)

        # Update the value of palindrome if we got a new palindrome
        if palindrome > value:
            value = palindrome
print("The largest palindrome found is {:d}".format(value))
