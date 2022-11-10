import matplotlib.pyplot as pyplot
import naivni
import dlt
import dlt_norm
import promena_koord

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

# Test primer
ulazne = [[-3, -1, 1],
          [3, -1, 1],
          [1, 1, 1],
          [-1, 1, 1]]

slike = [[-2, -1, 1],
         [2, -1, 1],
         [2, 1, 1],
         [-2, 1, 1]]

# draw(ulazne, slike)

#Naivni
print('\n----------------------------------------------')
print('Resenje sa naivnim algoritmom:\n')
M_naivni = naivni.alg(ulazne, slike)
print(M_naivni.round(5))
print('\n----------------------------------------------')

#DLT
print('\nResenje sa DLT algoritmom:\n')
M_dlt = dlt.alg(ulazne, slike)
print(M_dlt.round(5))
print('\n----------------------------------------------')

#Poredjenje DLT i naivnog
print('\nPoredjenje naivnog i DLT:\n')
M_dlt = (M_dlt / M_dlt[0, 0]) * M_naivni[0, 0]
print('Naivni:')
print(M_naivni.round(5))
print('\nDLT:')
print(M_dlt.round(5))
print('\n----------------------------------------------')


#DLT sa normalizacijom
print('Resenje sa modifikovanim DLT algoritmom:\n')
M_dlt_norm = dlt_norm.alg(ulazne, slike)
print(M_dlt_norm.round(5))
print('\n----------------------------------------------')

#Poredjenje DLT i DLT sa normalizacijom
print('Poredjenje DLT i modifikovanog DLT:\n')
M_dlt_norm = (M_dlt_norm / M_dlt_norm[0, 0]) * M_dlt[0, 0]
print('DLT:')
print(M_dlt.round(5))
print('\nDLT sa normalizacijom:')
print(M_dlt_norm.round(5))
print('\n----------------------------------------------')

#DLT sa vise korespodencija
print('DLT sa vise korespodencija:\n')
ulazne = [[-3, -1, 1],
          [3, -1, 1],
          [1, 1, 1],
          [-1, 1, 1],
          [1, 2, 3],
          [-8, -2, 1]]

slike = [[-2, -1, 1],
         [2, -1, 1],
         [2, 1, 1],
         [-2, 1, 1],
         [2, 1, 4],
         [-16, -5, 4]]

M_dlt2 = dlt.alg(ulazne, slike)
print(M_dlt2.round(5))
M_dlt2 = (M_dlt2 / M_dlt2[0, 0]) * M_naivni[0, 0]
print('\n')
print(M_dlt2.round(5))
print('\nNaivni:')
print(M_naivni.round(5))
print('\nDLT:')
print(M_dlt2.round(5))
print('\n----------------------------------------------')

#Modifikovani DLT sa vise korespodencija
print('Modifikovani DLT sa vise korespodencija:\n')
M_dlt_norm2 = dlt_norm.alg(ulazne, slike) #todo
print(M_dlt_norm2.round(5))
M_dlt_norm2 = (M_dlt_norm2 / M_dlt_norm2[0, 0]) * M_naivni[0, 0]
print('\n')
print(M_dlt_norm2.round(5))
print('\nNaivni:')
print(M_naivni.round(5))
print('\nDLT sa normalizacijom:')
print(M_dlt_norm2.round(5))
print('\n----------------------------------------------')

#Promena koordinata kod DLT algoritma
promena_koord.alg(ulazne, slike)










