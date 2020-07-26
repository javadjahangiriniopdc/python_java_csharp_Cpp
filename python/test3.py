import time
from numba import jit

start_time = time.time()


@jit(nopython=True)
def PerfectNumber(n):
    k = 1
    s = 0
    while k < n:
        if n % k == 0:
            s += k
        k += 1

    if s == n:
        return True

    return False


n = int(input("Enter a Number:"))
k = 1
while k <= n:
    if PerfectNumber(k):
        print(k)
    k += 1

print("--- %s seconds ---" % (time.time() - start_time))
