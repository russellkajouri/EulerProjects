# #########################################################
# Project number 22 ::Names Scores
# Author :: Kajo
# last modified :: May 17 2021
#
# #########################################################
import requests, string
# This code uses the following url to download the names file
url = "https://projecteuler.net/project/resources/p022_names.txt"

class compute:
    def __init__(self):
        self.alphabet= string.ascii_uppercase
    def Download(self, url):
        result = requests.get(url)
        return result.text
    # -------------------------------------------
    def NameScore(self, name):
        ans = 0
        for c in name:
            dummy = self.alphabet.find(c)
            if dummy >= 0:
                ans += dummy + 1
            else:
                raise ValueError("there is an error in find function\n")
        return ans
    # -------------------------------------------
    def EvaluateNamesScores(self, names):
        totalScore = 0
        tempScore = 0
        print("%-20s%-5s%-10s%-10s"%("Name", "Rank", "Score", "Total Score"))
        for nc in range(len(names)):
            tempScore = (nc+1) * self.NameScore(names[nc])
            print("%-20s%-5d%-10d%-10d"\
                %(names[nc],nc+1,self.NameScore(names[nc]),tempScore))
            totalScore += tempScore
            # end of the if scope
        # end of the loop scope - for loop counter nc
        return totalScore
    # -------------------------------------------
    #
# end of the class scope
def main():
    computer = compute()
    names = computer.Download(url)
    names = names.replace("\"", "")
    names = names.split(",")
    names = sorted(names)
    #print(*names, len(names), type(names))
    totalScore = computer.EvaluateNamesScores(names)
    print(totalScore)

main()
