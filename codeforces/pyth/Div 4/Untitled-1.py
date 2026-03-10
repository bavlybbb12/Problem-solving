y = open('D:\Courses\intro roadmap.txt')

def remover (l) :
    if "\n" in l :
        l.strip("\n")

for line in y:
    line = remover(line)
    print(line)