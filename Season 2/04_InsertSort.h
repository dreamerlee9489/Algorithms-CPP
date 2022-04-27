#ifndef INSERT_SORT_H
#define INSERT_SORT_H
#include "./01_ISort.h"
/**
 * @brief 插入排序
 * @date 2022-04-27 
 * @tparam T 
 */
template <typename T>
class InsertSort : public ISort<T>
{
    void sort_algorithm() override
    {
        for (size_t beg = 1; beg < this->_size; ++beg)
        {
            size_t cur = beg;
            T val = this->_array[cur];
            while (cur > 0 && this->compare(val, this->_array[cur - 1]) < 0)
                this->_array[cur--] = this->_array[cur - 1];
            this->_array[cur] = val;
        }
    }

public:
    InsertSort() = default;
    ~InsertSort() = default;
};

#endif /* INSERT_SORT_H */
