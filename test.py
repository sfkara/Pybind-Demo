import module_name

from time import perf_counter

# t2_start = perf_counter()
# print(module_name.some_fn_2())
# t2_stop = perf_counter()


# def pfor():
#     for i in range(5000):
#         for j in range(50):
#             print(i, j)
#     return 0


# t1_start = perf_counter()
# print(pfor())
# t1_stop = perf_counter()
# print("Elapsed time:", t1_stop, t1_start)


# print("Elapsed time during the whole program in seconds:", t1_stop - t1_start)


# print("Elapsed time  2:", t2_stop, t2_start)


# print("Elapsed time during the whole program in seconds   2:", t2_stop - t2_start)


# print(dir(module_name))

m = module_name.PyClass(5)

print(m.multiply(5))


print(m.multiply_list([1, 2, 3, 4, 5]))
