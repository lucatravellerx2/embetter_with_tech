def tester():
    x = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
    for num in x:
        if num == 7:
            x.append(89)
        if num == 9:
            x.insert(9,99)
        
        if num == 11:
            x.remove(11)
            print(x)
        
        print(num)

if __name__ == "__main__":
    tester()