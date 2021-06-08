from collections import defaultdict

def count_characters(string):
    counts = defaultdict(int)

    for character in string:
        counts[character] += 1

    return counts
