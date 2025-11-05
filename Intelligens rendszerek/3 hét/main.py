import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# univerzumok
quality = ctrl.Antecedent(np.arange(0, 10, 0.1), 'quality')
service = ctrl.Antecedent(np.arange(0, 10, 0.1), 'service')
tip = ctrl.Consequent(np.arange(0, 25, 0.1), 'tip')

# tagsagi fuggvenyek
quality['borzaszto'] = fuzz.trimf(quality.universe, [-5, 0, 5])
quality['kozepes'] = fuzz.trimf(quality.universe, [0, 5, 10])
quality['finom'] = fuzz.trimf(quality.universe, [5, 10, 15])

service['rossz'] = fuzz.trimf(service.universe, [-5, 0, 5])
service['elfogadthato'] = fuzz.trimf(service.universe, [0, 5, 10])
service['kituno'] = fuzz.trimf(service.universe, [5, 10, 15])

tip['alacsony'] = fuzz.trimf(tip.universe, [0, 0, 13])
tip['kozepes'] = fuzz.trimf(tip.universe, [0, 13, 25])
tip['magas'] = fuzz.trimf(tip.universe, [13, 25, 25])

# tagsagi fuggvenyek le rajzolasa
quality.view()
plt.show()
service.view()
plt.show()
tip.view()
plt.show()

# szabalyok
rule1 = ctrl.Rule(quality['borzaszto'] | service['rossz'], tip['alacsony'])
rule2 = ctrl.Rule(service['elfogadthato'], tip['kozepes'])
rule3 = ctrl.Rule(service['kituno'] | quality['finom'], tip['magas'])

# fuzzy iranyito rendszer letre hozzasa es szimulacio
tipping_ctrl = ctrl.ControlSystem([rule1, rule2, rule3])
tipping = ctrl.ControlSystemSimulation(tipping_ctrl)

tipping.input['quality'] = 6.5
tipping.input['service'] = 9.8
tipping.compute()
print('Borravalo ' + str(tipping.output['tip']))

plt.ion()
tip.view()
plt.title('Eredmeny')
plt.show()
plt.ioff()

upsaqmpled = np.linspace(0, 10, 10)
x, y = np.meshgrid(upsaqmpled, upsaqmpled)
z = np.zeros_like(x)

for i in range(10):
    for j in range(10): 
        tipping.input['quality'] = x[i, j]
        tipping.input['service'] = y[i, j]
        tipping.compute()
        z[i, j] = tipping.output['tip']

fig = plt.figure(figsize = (8, 8))
ax = fig.add_subplot(111, projection = '3d')
surf = ax.plot_surface(x, y, z, rstride = 1, cstride = 1, cmap = 'viridis', linewidth = 0.4, antialiased = True)

ax.set_xlabel('quality')
ax.set_ylabel('service')
ax.set_zlabel('tip')
ax.view_init(30, 200)
plt.show()
plt.ioff()