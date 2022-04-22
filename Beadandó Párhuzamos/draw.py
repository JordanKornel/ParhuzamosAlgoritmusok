import csv

from operator import delitem
from matplotlib import pyplot as plt

with open("adatok.csv","r") as csv_file:
    reader = csv.reader(csv_file)
    adatok=[]
    for line in reader:
        adatok.append(line)
print(adatok[0], adatok[1])
adat1=list(map(float, adatok[0]))

data = {'Pthread':adat1, 'OpenMP':adat1}
courses = list(data.keys())
values = list(data.values())

fig = plt.figure(figsize = (10, 5))

# creating the bar plot
plt.bar(courses, values, color ='maroon',
        width = 0.4)

plt.xlabel("Courses offered")
plt.ylabel("Time taken")
plt.title("Difference between Pthread and OpenMP")
plt.show()