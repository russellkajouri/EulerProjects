# ###################################################################
# Prject number 21 : amicable numbers
# Class file
# Author : Kajo
# Last modified : May 16 21
# ###################################################################

class compute:
    def __init__(self):
        last_summation = None
    # -------------------------------------------
    def is_divisor(self, a : int = 1, b : int = 1) -> bool:
        if a == b:
            return True
        elif a <= 0 or b <= 0:
            raise ValueError("negative input in the \"is_divisor\" func.\n")
        else:
            divider = b if b > a else a
            divisor = a if a < b else b

            return divider % divisor == 0
    # -------------------------------------------
    def divisorList(self, num : int = 1) -> list:
        divisor_list = []
        if num <= 0:
            raise ValueError("invalid input, zero input, divisorList\n")
        else:
            for n in range(1, num):
                if(self.is_divisor(n, num)):
                    divisor_list.append(n)
                # end of the if scope
            # end the loop scope :: for with n iterator
        return divisor_list
    # -------------------------------------------
    def is_amicable_number(self, num : int = 0) -> bool:
        divisors_list = self.divisorList(num)
        if len(divisors_list) == 0:
            print("%d is a prime number.")
        else:
            #print("d(%d) = " %num, *divisors_list)
            sum_divisors = sum(divisors_list)
            self.last_summation = sum_divisors
            if sum_divisors == num: return False
            return True if sum(self.divisorList(sum_divisors)) == num else False
    # -------------------------------------------
    def Last_summation(self):
        return self.last_summation
# end of the class scope
def main():
    limit = int(10E3)
    amicable_numbers = []
    computer = compute()



    for n in range(2, limit):
        if computer.is_amicable_number(n):
            amicable_numbers.append([n, computer.Last_summation()])

    summation = 0
    for i in range(len(amicable_numbers)):
        print("%d -> %d"%(amicable_numbers[i][0], amicable_numbers[i][1]))
        summation += amicable_numbers[i][1]


    print("ans: ", summation)

main()
