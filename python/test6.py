import PerfectNumber
import time



n = int(input("Enter a Number:"))

start_time = time.time()

PerfectNumber.PerfectNumber(n)

print("--- %s seconds ---" % (time.time() - start_time))
