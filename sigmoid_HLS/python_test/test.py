import numpy as np

def sigmoid(x):
    return 1.0/(1.0 + np.exp(-x))

x = 1.6
print np.exp(x)
print sigmoid(x)
