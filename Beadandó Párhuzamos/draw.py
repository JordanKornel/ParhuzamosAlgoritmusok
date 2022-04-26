import csv

from operator import delitem
from matplotlib import pyplot as plt

def load_times(path):
        """
        Load the measured times from the file.
        """
        with open(path, "r") as time_file:
                pthread_time = float(next(time_file))
                omp_time = float(next(time_file))
                return {
                        'pthread_time': pthread_time,
                        'omp_time': omp_time
                }

if __name__ == '__main__':
        times = load_times('adatok.csv')
        fig = plt.figure(figsize = (10, 5))
        plt.bar(times.keys(), times.values(), color ='maroon', width = 0.4)
        plt.xlabel("The columns")
        plt.ylabel("Time taken")
        plt.title("Difference between Pthread and OpenMP")
        plt.show()
