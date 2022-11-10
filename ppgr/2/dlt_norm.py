import numpy
import math
import dlt

def norm(ulazne):
    x = sum([t[0]/t[2] for t in ulazne]) / len(ulazne)
    y = sum([t[1]/t[2] for t in ulazne]) / len(ulazne)
    
    r = 0.0

    for i in range(len(ulazne)):
        pom1 = float(ulazne[i][0]/ulazne[i][2]) - x
        pom2 = float(ulazne[i][1]/ulazne[i][2]) - y
        r = r + math.sqrt(pom1**2 + pom2**2)

    r = r / float(len(ulazne))
    S = float(math.sqrt(2)) / r

    return numpy.array([[S, 0, -S*x], [0, S, -S*y], [0, 0, 1]])

def alg(ulazne, slike):

    T = norm(ulazne)
    Tp = norm(slike)

    M = T.dot(numpy.transpose(ulazne))
    Mp = Tp.dot(numpy.transpose(slike))

    M = numpy.transpose(M)
    Mp = numpy.transpose(Mp)

    P = dlt.alg(M, Mp)

    return (numpy.linalg.inv(Tp)).dot(P).dot(T)



