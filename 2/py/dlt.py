import numpy

def alg(ulazne, slike):
    x1 = ulazne[0][0]
    x2 = ulazne[0][1]
    x3 = ulazne[0][2]

    xp1 = slike[0][0]
    xp2 = slike[0][1]
    xp3 = slike[0][2]

    A = numpy.array([
        [0, 0, 0, -xp3*x1, -xp3*x2, -xp3*x3, xp2*x1, xp2*x2, xp2*x3],
        [xp3*x1, xp3*x2, xp3*x3, 0, 0, 0, -xp1*x1, -xp1*x2, -xp1*x3]
    ])

    for i in range(1, len(ulazne)):
        x1 = ulazne[i][0]
        x2 = ulazne[i][1]
        x3 = ulazne[i][2]

        xp1 = slike[i][0]
        xp2 = slike[i][1]
        xp3 = slike[i][2]

        A = numpy.vstack((A, numpy.array([0, 0, 0, -xp3*x1, -xp3*x2, -xp3*x3, xp2*x1, xp2*x2, xp2*x3])))
        A = numpy.vstack((A, numpy.array([xp3*x1, xp3*x2, xp3*x3, 0, 0, 0, -xp1*x1, -xp1*x2, -xp1*x3])))

    U, D, V = numpy.linalg.svd(A)

    return V[-1].reshape(3,3)