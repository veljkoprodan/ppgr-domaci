import matplotlib.pyplot as pyplot
import naivni
import dlt
import dlt_norm
import numpy

def skaliraj(matrix):
	(m,n) = matrix.shape
	fst = matrix[0][0]
	for i in range(m):
		for j in range(n):
			matrix[i][j] /= fst
	return matrix

def draw(ulazne, slike):
    xs = [t[0] for t in ulazne]
    ys = [t[1] for t in ulazne]
    xs.append(ulazne[0][0])
    ys.append(ulazne[0][1])

    xd = [t[0] for t in slike]
    yd = [t[1] for t in slike]
    xd.append(slike[0][0])
    yd.append(slike[0][1])

    pyplot.plot(xs, ys)
    pyplot.plot(xd, yd)
    pyplot.show()

ulazne = [[2, 1, 1],
          [1, 2, 1],
          [3, 4, 1],
          [-1, -3, 1]]

slike = [[0, 1, 1],
         [5, 0, 1],
         [2, -5, 1],
         [-1, -1, 1]]

draw(ulazne, slike)

print('\n----------------------------------------------')
print('Ulazne koordinate:')
print(ulazne)
print('\nSlike:')
print(slike)

#Naivni
print('\n----------------------------------------------')
print('Resenje sa naivnim algoritmom:\n')
M_naivni = naivni.alg(ulazne, slike)
print(M_naivni.round(5))

#C1 = numpy.cov(M_naivni,bias=1)
#M_naivni_sk = numpy.cov(M_naivni/C1[0][0]**0.5, bias=1)

M_naivni_sk = skaliraj(M_naivni)
print('\n\nSkalirano:\n')
print(M_naivni_sk.round(5))
print('\n----------------------------------------------')

#DLT
print('\nResenje sa DLT algoritmom:\n')
M_dlt = dlt.alg(ulazne, slike)
print(M_dlt.round(5))

#C2 = numpy.cov(M_dlt,bias=1)
#M_dlt_sk = numpy.cov(M_dlt/C2[0][0]**0.5, bias=1)

M_dlt_sk = skaliraj(M_dlt)
print('\n\nSkalirano:\n')
print(M_dlt_sk.round(5))
print('\n----------------------------------------------')

#DLT sa normalizacijom
print('Resenje sa modifikovanim DLT algoritmom:\n')
M_dlt_norm = dlt_norm.alg(ulazne, slike)
print(M_dlt_norm.round(5))

#C3 = numpy.cov(M_dlt_norm,bias=1)
#M_dlt_norm_sk = numpy.cov(M_dlt_norm/C3[0][0]**0.5, bias=1)

M_dlt_norm_sk = skaliraj(M_dlt_norm)
print('\n\nSkalirano:\n')
print(M_dlt_norm_sk.round(5))

print('\n\n*******************************************************\n\n')

ulazne = [[2, 1, 1],
          [1, 2, 1],
          [3, 4, 1],
          [-1, -3, 1],
          [-2, 5, 1]]

slike = [[0, 1, 1],
         [5, 0, 1],
         [2, -5, 1],
         [-1, -1, 1],
         [4, 1, 2]]

print('Ulazne koordinate:')
print(ulazne)
print('\nSlike:')
print(slike)
print('\n----------------------------------------------')

#DLT
print('\nResenje sa DLT algoritmom:\n')
M_dlt = dlt.alg(ulazne, slike)
print(M_dlt.round(5))

#C4 = numpy.cov(M_dlt,bias=1)
#M_dlt_sk = numpy.cov(M_dlt/C4[0][0]**0.5, bias=1)

M_dlt_sk = skaliraj(M_dlt)
print('\n\nSkalirano:\n')
print(M_dlt_sk.round(5))
print('\n----------------------------------------------')

#DLT sa normalizacijom
print('Resenje sa modifikovanim DLT algoritmom:\n')
M_dlt_norm = dlt_norm.alg(ulazne, slike)
print(M_dlt_norm.round(5))

#C5 = numpy.cov(M_dlt_norm,bias=1)
#M_dlt_norm_sk = numpy.cov(M_dlt_norm/C5[0][0]**0.5, bias=1)

M_dlt_norm_sk = skaliraj(M_dlt_norm)
print('\n\nSkalirano:\n')
print(M_dlt_norm_sk.round(5))


print('\n\n*******************************************************\n\n')

ulazne = [[0, -3, 1],
          [0, -1, 1],
          [4, -1, 1],
          [-7, -4, 1],
          [0, 5, 1]]

slike = [[3, -1, 1],
         [4, 4, 1],
         [9, 1, 1],
         [5, -2, 1],
         [7, 2, 2]]

print('Ulazne koordinate:')
print(ulazne)
print('\nSlike:')
print(slike)
print('\n----------------------------------------------')

#DLT sa normalizacijom
print('Resenje sa modifikovanim DLT algoritmom:\n')
M_dlt_norm = dlt_norm.alg(ulazne, slike)
print(M_dlt_norm.round(5))

#C6 = numpy.cov(M_dlt_norm,bias=1)
#M_dlt_norm_sk = numpy.cov(M_dlt_norm/C6[0][0]**0.5, bias=1)

M_dlt_norm_sk = skaliraj(M_dlt_norm)
print('\n\nSkalirano:\n')
print(M_dlt_norm_sk.round(5))
print('\n----------------------------------------------')
