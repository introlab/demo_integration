import os
import time

from cppcount_pybind11 import count_characters

N = 100


def benchmark_count_characters():
    script_dir = os.path.dirname(os.path.realpath(__file__))
    input_path = os.path.join(script_dir, 'input.txt')

    with open(input_path, 'r') as input_file:
        input_string = input_file.read()

    start_time = time.time()
    for _ in range(N):
        _ = count_characters(input_string)
    elapsed_time = time.time() - start_time

    print('benchmark_count_characters:', elapsed_time / N, 's')


if __name__ == '__main__':
    benchmark_count_characters()
