# a = int(input("enter the number"))

# b = str(a)

# num_dig = len(b)

# sum = 0
# for i in range(num_dig):
#     sum = sum + int(b[i])
#     i+=2

# print(sum)


a = 1682
b = str(a)
num_dig = len(b)
d={}
for ind,i in enumerate(b):
 d[f"dig_{ind+1}"] = int(i)*2
#  print(d)
for j in range(4):
 print(d[f"dig_{j+1}"])