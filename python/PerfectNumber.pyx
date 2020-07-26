def PerfectNumber(nn) :
    cdef unsigned int  k = 1
    cdef unsigned int s = 0
    cdef unsigned int n=nn;
    while k < n:
        if n % k == 0:
            s += k
        k += 1

    if s == n:
        return True

    return False