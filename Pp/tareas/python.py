# genera_matrix_vector.py
import random

rows = 1000
cols = 1000

# Matriz
with open("matrix.txt", "w") as f:
    f.write(f"{rows}\n{cols}\n")
    for _ in range(rows * cols):
        f.write(f"{random.randint(0, 10)}\n")

# Vector
with open("vector.txt", "w") as f:
    f.write(f"{cols}\n1\n")
    for _ in range(cols):
        f.write(f"{random.randint(0, 10)}\n")
