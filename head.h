#include <stdio.h>
#include <iostream>
#include <time.h>

//! Заголовочный файл.
    /*!
      \ Вызов функций
      \ Две сортировки
      \ Пузырьком и слиянием
      \ P_Sort(), MergeSort(), Merge()
    */

void P_Sort ( char *Mass, int n );
void MergeSort(char *A, int first, int last);
void Merge(char *A, int first, int last);