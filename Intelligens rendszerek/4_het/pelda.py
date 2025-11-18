import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

oilPrice = ctrl.Antecedent(np.arange(5, 30, 1), 'oilPrice')
totalProvenReserves = ctrl.Antecedent(np.arange(0, 20, 1), 'totalProvenReserves')

oilPrice['Low'] = fuzz.trimf(oilPrice.universe, [0, 5, 15])
oilPrice['Good'] = fuzz.trimf(oilPrice.universe, [10, 16, 21])
oilPrice['Good'] = fuzz.trimf(oilPrice.universe, [10, 16, 21])

oilPrice.view()
plt.show()