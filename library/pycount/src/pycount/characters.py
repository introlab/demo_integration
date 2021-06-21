from collections import defaultdict


def count_characters(string):
    counts = defaultdict(int)

    for character in string:
        counts[character] += 1

    return dict(counts)

def count_characters_ignoreCase(string):
    return count_characters(string.upper())