#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
    if (begin == nullptr || end == nullptr || begin >= end) {   //nullptrの方が良いとありました
        return false;
    }

    size_t size = end - begin;  //要素数
    if (size == 1) {
        return true;
    }

    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - 1 - i; j++) {
            if (begin[j].key > begin[j + 1].key) {
                // 要素を入れ替える
                item tmp = begin[j];
                begin[j] = begin[j + 1];
                begin[j + 1] = tmp;
            }
        }
    }
    
    return true;
}
