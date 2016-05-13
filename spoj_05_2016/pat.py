# x = range(0, 100)
i = 1
for k in range(1, 499999999999942):
    x = k**3
    if str(x).endswith('888'):
        if i in [4000, 392, 100, 1000, 20000, 2000000000000]:
            print '{} --> {}'.format(i, k)
        i += 1

# print 10442**3
