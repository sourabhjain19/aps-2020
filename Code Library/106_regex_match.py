import re

matchcond='^(hello).*d$' #check if starting word is hello and end letter is d

if re.match(matchcond,"hello World"):
    print("True")
else:
    print("False")
