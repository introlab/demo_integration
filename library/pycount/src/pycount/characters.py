from typing import Dict

from .values import count_values


def count_characters(string: str) -> Dict[str, int]:
    return count_values(string)


def count_characters_ignoreCase(string: str) -> Dict[str, int]:
    return count_values(string.upper())
