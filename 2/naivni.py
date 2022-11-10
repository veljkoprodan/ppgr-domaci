import numpy

def matrix(tacke):
    M = numpy.array([
        [tacke[0][0], tacke[1][0], tacke[2][0]],
        [tacke[0][1], tacke[1][1], tacke[2][1]],
        [tacke[0][2], tacke[1][2], tacke[2][2]]
    ])

    D = numpy.array([tacke[3][0], tacke[3][1], tacke[3][2]])
    rez = numpy.linalg.solve(M, D)

    L1 = rez[0]
    L2 = rez[1]
    L3 = rez[2]

    return numpy.column_stack([numpy.array([L1*tacke[0][0], L1*tacke[0][1], L1*tacke[0][2]]),
                               numpy.array([L2*tacke[1][0], L2*tacke[1][1], L2*tacke[1][2]]),
                               numpy.array([L3*tacke[2][0], L3*tacke[2][1], L3*tacke[2][2]])])

def alg(ulazne, slike):

    P1 = matrix(ulazne)
    P2 = matrix(slike)

    return numpy.dot(P2, numpy.linalg.inv(P1))