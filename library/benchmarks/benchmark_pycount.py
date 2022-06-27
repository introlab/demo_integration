import os
import time

from pycount import count_characters, count_values

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


def benchmark_count_values():
    script_dir = os.path.dirname(os.path.realpath(__file__))
    input_path = os.path.join(script_dir, 'input.txt')

    with open(input_path, 'r') as input_file:
        input_string = input_file.read()

    values = [ord(x) for x in input_string]

    start_time = time.time()
    for _ in range(N):
        _ = count_values(values)
    elapsed_time = time.time() - start_time

    print('benchmark_count_values:', elapsed_time / N, 's')


def benchmark_count_values_map():
    script_dir = os.path.dirname(os.path.realpath(__file__))
    input_path = os.path.join(script_dir, 'input.txt')

    with open(input_path, 'r') as input_file:
        input_string = input_file.read()

    values = [ord(x) for x in input_string]

    start_time = time.time()
    for _ in range(N):
        _ = count_values(values, lambda x: x * x)
    elapsed_time = time.time() - start_time

    print('benchmark_count_values_map:', elapsed_time / N, 's')


if __name__ == '__main__':
    benchmark_count_characters()
    benchmark_count_values()
    benchmark_count_values_map()
