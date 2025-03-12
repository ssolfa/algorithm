import math

def solution(numer1, denom1, numer2, denom2):
    answer = [numer1*denom2 + numer2 * denom1,denom1 * denom2]
    
    gcd = math.gcd(answer[0], answer[1])
    
    return [answer[0] // gcd, answer[1] // gcd]