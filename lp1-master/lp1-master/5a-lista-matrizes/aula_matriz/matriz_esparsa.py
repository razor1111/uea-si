matriz = [[0,0,0,0,0],
          [0,0,0,0,6],
          [0,3,0,0,0],
          [0,0,0,0,10],
          [2,0,0,0,0]]

matriz_esparsa = {(1,4):6,(2,1):3,(3,4):10,(0,4):2}


print(matriz_esparsa[3,4])
