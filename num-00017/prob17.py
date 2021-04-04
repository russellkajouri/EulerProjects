#! /usr/bin/python3
# #########################################################
# Euler Project : Problem number 17
#
# @author : kajothecoder@gmail.com
# last Modified : 03 Apr. 2021
#
# website : www.github.com/rasoulkajouri
# #########################################################


ones = ["zero", "one", "two", "three", "four",\
       "five", "six", "seven", "eight", "nine",\
       "ten", "eleven", "twelve","thirteen",\
       "fourteen", "fifteen", "sixteen",\
       "seventeen", "eighteen", "nineteen"]

# the two first Nones are for the counting modification
tens = [None, None, "twenty", "thirty", "forty",\
        "fifty", "sixty", "seventy", "eighty", "ninety"]

def Counting(n : int) -> str:
    if 0 <= n < 20:
        return ones[n]
    elif 20 <= n <= 90 and n % 10 == 0:
        return tens[n // 10]
    elif 20 < n < 100:
        return tens[n // 10] + "-" + ones[n % 10]
    elif 100 <= n <= 900 and n % 100 == 0:
        return ones[n // 100] + " hundred"
    elif 100 < n < 1000:
        return ones[n // 100] + " hundred and " + Counting(n % 100)
    elif 1000 < n < 10000:
        pass
    elif n == 1000:
        return "one thousand"
    else:
        raise ValueError("unexpected input")
# end of the Counting function
# ---------------------------------------------------------

def main():
    lengths = 0
    for i in range(1000):
        letters = Counting(i+1).replace(" ", "").replace("-", "")
        lengths += len(letters)
        pass
    print("The total length is: ", lengths)
# end of the main function
# ---------------------------------------------------------

if __name__ == "__main__":
    main()
