#ifndef CPPCOUNT_VALUES_H
#define CPPCOUNT_VALUES_H

#include <unordered_map>
#include <iterator>
#include <type_traits>

template<class T, class M>
using map_result_of_t = typename std::result_of<M(typename std::iterator_traits<T>::value_type)>::type;

template <class T, class M>
std::unordered_map<map_result_of_t<T, M>, size_t> countValues(T first, T last, M map)
{
    std::unordered_map<map_result_of_t<T, M>, size_t> counts;

    for (; first != last; ++first)
    {
        counts[map(*first)]++;
    }

    return counts;
}

template <class T>
std::unordered_map<typename std::iterator_traits<T>::value_type, size_t> countValues(T first, T last)
{
    return countValues(first, last, [](const typename std::iterator_traits<T>::value_type& x) { return x; });
}

#endif
