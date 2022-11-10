import matplotlib.pyplot as pyplot
import naivni
import dlt

def draw(ulazne, slike):
    xs = [p[0] for p in ulazne]
    ys = [p[1] for p in ulazne]
    xs.append(ulazne[0][0])
    ys.append(ulazne[0][1])

    xd = [p[0] for p in slike]
    yd = [p[1] for p in slike]
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

draw(ulazne, slike)

#naivni
M = naivni.alg(ulazne, slike)
print(M.round(5))

#dlt
M = dlt.alg(ulazne, slike)
print(M.round(5))






