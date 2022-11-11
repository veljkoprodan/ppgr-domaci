import numpy as np
import cv2
import math
import dlt_norm
from tkinter import filedialog

global count
count = 0

ulazne = [[0,0,0],
          [0,0,0],
          [0,0,0],
          [0,0,0]
         ]

slike = [[0,0,0],
         [0,0,0],
         [0,0,0],
         [0,0,0]
        ]

# GL, GD, DD, DL
def click_event(event, x, y, flags, params):
        global count
        if event == cv2.EVENT_LBUTTONDOWN and count < 4:
                ulazne[count] = [x,y,1]
                count += 1
                print(x, ' ', y)
                cv2.circle(img, (x,y), radius=4, color=(0, 0, 255), thickness=-1)
                cv2.imshow('image', img)

path = filedialog.askopenfilename(initialdir="./input/img", filetypes=[("JPG, *.jpg"), ("JPEG, *.jpeg"), ("PNG, *.png")])
img = cv2.imread(path)
hh, ww = img.shape[:2]

cv2.imshow('image', img)
cv2.setMouseCallback('image', click_event)
cv2.waitKey(0)
cv2.destroyAllWindows()

if count == 4:
        width = round(math.hypot(ulazne[0][0]-ulazne[1][0], ulazne[0][1]-ulazne[1][1]))
        height = round(math.hypot(ulazne[0][0]-ulazne[3][0], ulazne[0][1]-ulazne[3][1]))

        x = ulazne[0][0]
        y = ulazne[0][1]

        slike = [[x,y,1],
                [x+width-1,y,1],
                [x+width-1,y+height-1,1],
                [x,y+height-1,1]
                ]

        matrix = dlt_norm.alg(ulazne, slike)
        output = cv2.warpPerspective(img, matrix, (ww,hh), cv2.INTER_LINEAR, borderMode=cv2.BORDER_CONSTANT, borderValue=(0,0,0))

        cv2.imwrite("output.jpg", output)

        cv2.imshow("result", output)
        cv2.waitKey(0)
        cv2.destroyAllWindows()