from typing import Dict, Iterable, Callable, Any
from collections import defaultdict


def count_values(iterable: Iterable[Any], pred: Callable[[Any], Any] = None) -> Dict[Any, int]:
    counts = defaultdict(int)

    if pred is None:
        for v in iterable:
            counts[v] += 1
    else:
        for v in iterable:
            counts[pred(v)] += 1

    return dict(counts)
