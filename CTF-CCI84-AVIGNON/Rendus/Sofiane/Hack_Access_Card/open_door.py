
while True:
    print('Bonjour !: ')
    
    data = input("A = ") # A?
    a=int(data)
    if not data:
        break
    print("OK")

    
    data = input("M = ") # ?
    m=int(data)
    if not data:
        break
    print("OK")
   
    data =  input("O = ") # ?
    o=int(data)
    if not data:
        break
    print("OK")

    
    data = input("N = ") # ?
    n=int(data)
    if not data:
        break
    print("OK")

    
    data = input("G = ") # ?
    g=int(data)
    if not data:
        break
    print("OK")

    
    data = input("U = ") # ?
    u=int(data)
    if not data:
        break
    print("OK")

    
    data = input("S = ") # ?
    s=int(data)
    if not data:
        break
    print("OK")


    result = 0

    if a*4+m*6+o*8+n*2+g+u*8+s*2 == 3395:
        if a*4+m*6+o*8+n*2+g == 2369:
            if a > 100 and a < 120:
                result+=1
            if "16" in str(m):
                result+=1
            if str(o).count("1") == 3:
                result+=1
            if int(str(n)[0])+int(str(n)[1])+2 == int(str(n)[2]) :
                result+=1
            if len(str(g))==2 and "7" in str(g) and "9" in str(g):
                result+=1
            if u > 100 and u < 105:
                result+=1
            if s+99==200:
                result+=1

    if result == 7:
        print("OK")
    else:
        print("False")
