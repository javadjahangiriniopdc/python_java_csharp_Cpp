import pnmt
import time

n = int(input("enter num:"))
t = int(input("enter thread count:"))

start_time = time.time()

pnmt.PerfectNumber(n, t)

print("--- %s seconds ---" % (time.time() - start_time))
