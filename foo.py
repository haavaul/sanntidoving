from threading import Thread


# Potentially useful thing:
#   In Python you "import" a global variable, instead of "export"ing it when you declare it
#   (This is probably an effort to make you feel bad about typing the word "global")
i = 0

def incrementingFunction():
    global i
    for k in xrange(1,1000000):
        i+=1
    # TODO: increment i 1_000_000 times

def decrementingFunction():
    global i
    for k in xrange(1,1000000):
        i-=1
    # TODO: decrement i 1_000_000 times



def main():
    # TODO: Something is missing here (needed to print i)
    global i

    incrementing = Thread(target = incrementingFunction, args = (),)
    decrementing = Thread(target = decrementingFunction, args = (),)

    # TODO: Start both threads
    incrementing.start()
    decrementing.start()
    
    incrementing.join()
    decrementing.join()
    
    print("The magic number is %d" % (i))


main()