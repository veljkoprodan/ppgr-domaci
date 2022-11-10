import numpy
import dlt
import dlt_norm

def alg(ulazne,slike):

    C1 = numpy.array([[0, 1, 2], 
                     [-1, 0, 3], 
                     [0, 0, 1]])
    
    C2 = numpy.array([[1, -1, 5], 
                     [1, 1, -2], 
                     [0, 0, 1]])

    ulazne2 = []
    slike2 = []

    for i in range(len(ulazne)):
        ulazne2.append(numpy.dot(C1, ulazne[i]))
        slike2.append(numpy.dot(C2, slike[i]))
 
    ulazne2 = numpy.array(ulazne2)
    slike2 = numpy.array(slike2)

    M_dlt = dlt.alg( ulazne, slike) 
    M_dlt2 = dlt.alg(ulazne2, slike2)
  
    M_prom = numpy.dot(numpy.linalg.inv(C2), M_dlt2)
    M_prom = numpy.dot(M_prom, C1)
    M_prom = (M_dlt[0] / M_prom[0]) * M_prom

    print("Poredjenje DLT pre i posle promene koordinata:\n")
    print("Pre promene:")
    print(M_dlt.round(5))
    print('\nPosle promene:')
    print(M_prom.round(5))
    print('\n----------------------------------------------')

    M_dlt_norm = dlt_norm.alg(ulazne, slike)
    M_dlt_norm2 = dlt_norm.alg(ulazne2, slike2)

    M_prom = numpy.dot(numpy.linalg.inv(C2), M_dlt_norm2)
    M_prom = numpy.dot(M_prom, C1)
    
    print('Poredjenje modifikovanog DLT pre i posle promene koordinata:\n')
    print('Pre promene:')
    print(M_dlt_norm.round(5))
    print('\nPosle promene')
    print(M_prom.round(5))
    print('\n----------------------------------------------')
