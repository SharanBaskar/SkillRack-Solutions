X, Y, Z = [int(val) for val in input().split()]

if X < Y < Z:
    print("Ascending Order")
elif X > Y > Z:
    print("Descending Order")
else:
    print("Random Order")
