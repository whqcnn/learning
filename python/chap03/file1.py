try:
    aa = open('sketch.txt')

    for bb in aa:
        try:
            (a1, a2) = bb.split(":", 1)
            print a1,
            print ' said: ',
            print a2,
        except:
            pass
    aa.close()
except:
    print ('The aa file is missing!')
