import cv2 as cv
import random

path="C:\\Users\\mrbes\\PycharmProjects\\mypythonprojects\\venv\\Scripts\\normalstitch.jpg"

normalstitch=cv.imread(path)
normalstitch=cv.resize(normalstitch,(780,500))

##Opencv work with BGR so I split it according to that.

Blue,Green,Red=cv.split(normalstitch)

cv.imshow("Normalstitch",normalstitch)
cv.imshow("Bluestitch",Blue)
cv.imshow("Greenstitch",Green)
cv.imshow("Redstitch",Red)

for i in range(500):
    for j in range(780):
        Blue[i][j]=random.randint(190,255)

mergedstitch = cv.merge((Blue,Green,Red))
cv.imshow('Mergedstitch', mergedstitch)

cv.waitKey(0)
cv.destroyAllWindows()