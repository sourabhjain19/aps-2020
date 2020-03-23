import re

string="hello454world55fgj85jjcx9hghjw10bfhgf4"

pattern='[0-9]+'

l=re.findall(pattern,string)

print(l)