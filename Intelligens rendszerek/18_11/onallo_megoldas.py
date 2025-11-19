import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

oilPrice = ctrl.Antecedent(np.arange(5, 30, 1), 'oilPrice')
totalProvenReserves = ctrl.Antecedent(np.arange(0, 20, 1), 'totalProvenReserves')
engage = ctrl.Consequent(np.arange(0, 51, 1), 'engage')

oilPrice['Low'] = fuzz.trapmf(oilPrice.universe, [5, 5, 10, 14])
oilPrice['Good'] = fuzz.trimf(oilPrice.universe, [10, 16, 21])
oilPrice['High'] = fuzz.trapmf(oilPrice.universe, [16, 23, 50, 50])

totalProvenReserves['Low'] = fuzz.trapmf(totalProvenReserves.universe, [0, 0, 5, 10])
totalProvenReserves['Moderate'] = fuzz.trimf(totalProvenReserves.universe, [4, 11, 16])
totalProvenReserves['High'] = fuzz.trapmf(totalProvenReserves.universe, [13, 17, 50, 50])

engage['NR'] = fuzz.trapmf(engage.universe, [0, 0, 5, 10])
engage['CA'] = fuzz.trimf(engage.universe, [5, 15, 25])
engage['MA'] = fuzz.trimf(engage.universe, [15, 25, 35])
engage['AA'] = fuzz.trimf(engage.universe, [25, 35, 45])
engage['HR'] = fuzz.trapmf(engage.universe, [40, 45, 50, 50])

oilPrice.view()
plt.show()

totalProvenReserves.view()
plt.show()

rule1 = ctrl.Rule(oilPrice['High']   & totalProvenReserves['Low'],      engage['HR'])
rule2 = ctrl.Rule(oilPrice['High']   & totalProvenReserves['Moderate'], engage['AA'])
rule3 = ctrl.Rule(oilPrice['High']   & totalProvenReserves['High'],     engage['MA'])

rule4 = ctrl.Rule(oilPrice['Good']   & totalProvenReserves['Low'],      engage['MA'])
rule5 = ctrl.Rule(oilPrice['Good']   & totalProvenReserves['Moderate'], engage['CA'])
rule6 = ctrl.Rule(oilPrice['Good']   & totalProvenReserves['High'],     engage['CA'])

rule7 = ctrl.Rule(oilPrice['Low']    & totalProvenReserves['Low'],      engage['CA'])
rule8 = ctrl.Rule(oilPrice['Low']    & totalProvenReserves['Moderate'], engage['NR'])
rule9 = ctrl.Rule(oilPrice['Low']    & totalProvenReserves['High'],     engage['NR'])

tipping_ctrl = ctrl.ControlSystem([rule1, rule2, rule3, 
                                   rule4, rule5, rule6,
                                   rule7, rule8, rule9])

tipping = ctrl.ControlSystemSimulation(tipping_ctrl)
tipping.input['oilPrice'] = 8
tipping.input['totalProvenReserves'] = 11
tipping.compute()
print('Output ' + str(tipping.output['engage']))

engage.view()
plt.title('Output')
plt.show()

upsampled_oil = np.linspace(5, 30, 10)
upsampled_reserves = np.linspace(0, 20, 10)
x, y = np.meshgrid(upsampled_oil, upsampled_reserves)
z = np.zeros_like(x)

for i in range(10):
    for j in range(10):
        tipping.input['oilPrice'] = x[i, j]
        tipping.input['totalProvenReserves'] = y[i, j]
        tipping.compute()
        z[i, j] = tipping.output['engage']

fig = plt.figure(figsize = (8, 8))
ax = fig.add_subplot(111, projection = '3d')
surf = ax.plot_surface(x, y, z, rstride = 1, cstride = 1, cmap = 'viridis', linewidth = 0.4, antialiased = True)

ax.set_xlabel('oilPrice')
ax.set_ylabel('totalProvenReserves')
ax.set_zlabel('engage')
ax.view_init(30, 200)
plt.show()
plt.ioff()