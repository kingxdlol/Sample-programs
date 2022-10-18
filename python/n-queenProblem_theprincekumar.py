import random
#number of queens
N = 8

#number of chromosomes
M = 100

#number of generations
G = 100

#mutation rate
MR = 0.1

#chromosome class
class Chromosome:
    def __init__(self):
        self.gene = []
        self.fitness = 0

    def __str__(self):
        return str(self.gene) + " " + str(self.fitness)

    def __repr__(self):
        return str(self.gene) + " " + str(self.fitness)

#generate initial population
def generate_population():
    population = []
    for i in range(M):
        chromosome = Chromosome()
        for j in range(N):
            chromosome.gene.append(random.randint(0, N-1))
        population.append(chromosome)
    return population

#calculate fitness of each chromosome
def calculate_fitness(population):
    for chromosome in population:
        chromosome.fitness = 0
        for i in range(N):
            for j in range(i+1, N):
                if chromosome.gene[i] == chromosome.gene[j]:
                    chromosome.fitness += 1
                if abs(chromosome.gene[i] - chromosome.gene[j]) == abs(i - j):
                    chromosome.fitness += 1
        chromosome.fitness = 1 / (1 + chromosome.fitness)

#select chromosomes for crossover
def select(population):
    population.sort(key=lambda x: x.fitness, reverse=True)
    return population[:int(M/2)]

#perform crossover
def crossover(population):
    new_population = []
    for i in range(int(M/2)):
        for j in range(i+1, int(M/2)):
            chromosome1 = Chromosome()
            chromosome2 = Chromosome()
            chromosome1.gene = population[i].gene[:int(N/2)] + population[j].gene[int(N/2):]
            chromosome2.gene = population[j].gene[:int(N/2)] + population[i].gene[int(N/2):]
            new_population.append(chromosome1)
            new_population.append(chromosome2)
    return new_population

#perform mutation
def mutate(population):
    for chromosome in population:
        if random.random() < MR:
            chromosome.gene[random.randint(0, N-1)] = random.randint(0, N-1)
    return population

#check if solution is found
def is_solution_found(population):
    for chromosome in population:
        if chromosome.fitness == 1:
            return True
    return False

#find solution
def find_solution():
    population = generate_population()
    for i in range(G):
        calculate_fitness(population)
        if is_solution_found(population):
            print("Solution found in generation", i)
            return
        population = select(population)
        population = crossover(population)
        population = mutate(population)
    print("Solution not found")

if __name__ == "__main__":
    find_solution()
