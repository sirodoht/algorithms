flatten = lambda x: [y for z in x for y in flatten(z)] if type(x) is list else [x]

a = [[1,2,[3]],4]
print flatten(a)
