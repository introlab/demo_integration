import unittest

from src.pycount import count_characters


class TestCharacters(unittest.TestCase):
    def test_upper(self):
        counts = count_characters('Bonjour Bob')
        expected_counts = {
            'B': 2,
            'o': 3,
            'n': 1,
            'j': 1,
            'u': 1,
            'r': 1,
            ' ': 1,
            'b': 1
        }
        self.assertEqual(counts, expected_counts)


if __name__ == '__main__':
    unittest.main()
