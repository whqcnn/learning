import pickle

with open('123.pickle', 'wb') as mydata:
    pickle.dump([1, 2, 'three'], mydata)

with open('123.pickle', 'rb') as my123:
    a_list = pickle.load(my123)

print(a_list)
