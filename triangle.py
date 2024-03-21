# triangle

def triangle(l):
    aft=l
    for i in range(0,aft):
        for j in range(0,l+i):
            if j>aft:
                print("*",end=' ')
            else:
                print(" ",end=' ')
        print('\n')
        aft-=1

# number triangle

def num_triangle(l):
    aft=l
    for i in range(0,aft):
        for j in range(0,l+i):
            if j>aft:
                print(i,end=' ')
            else:
                print(" ",end=' ')
        print('\n')
        aft-=1
            
print("------------triangle----------")
triangle(5)
print("------------num_traingle--------------")
num_triangle(5)
print("---------right angle traingle---------")
# right angle triangle

for i in range(1,5):
    for j in range(1,i+1):
        print("* ",end=' ')
         # if you want to  print the numbers  just change the "*" value to j
    print("\n")

