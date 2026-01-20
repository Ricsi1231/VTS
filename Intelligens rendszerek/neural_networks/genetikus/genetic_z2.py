import numpy
import utils
import matplotlib.pyplot as plt
from numpy import genfromtxt

data = genfromtxt("values.csv", delimiter=',')

num_weights = 3

sol_per_pop = 20

num_parents_mating = 2


pop_size = (sol_per_pop, num_weights)  
low = -10
high = 10
new_population = numpy.random.uniform(low=low, high=high, size=pop_size)


mut = 100  


num_generations = 100

plt.ion() 
for generation in range(num_generations):
    print("Generation : ", generation)
    g = generation + 1 
    fitness = utils.cal_pop_fitness(new_population, data)    
    parents = utils.select_mating_pool(new_population, fitness, num_parents_mating)   
    offspring_crossover = utils.crossover(parents, offspring_size=(pop_size[0] - parents.shape[0], num_weights))
    offspring_mutation = utils.mutation(offspring_crossover, mut, g)

    new_population[0:parents.shape[0], :] = parents
    new_population[parents.shape[0]:, :] = offspring_mutation
    print("Best solution : ", numpy.min(utils.cal_pop_fitness(new_population, data)))
    fitness = utils.cal_pop_fitness(new_population, data)
    best_match_idx = numpy.where(fitness == numpy.min(fitness))
    utils.testsq(new_population[best_match_idx, :][0][0], data)


fitness = utils.cal_pop_fitness(new_population, data)
best_match_idx = numpy.where(fitness == numpy.min(fitness))

if isinstance(best_match_idx, list):
    best_match_idx = best_match_idx[0]

print("Best solution: ", new_population[best_match_idx, :])
print("Best solution fitness : ", fitness[best_match_idx])

utils.testsq(new_population[best_match_idx, :][0][0], data, final=1)
