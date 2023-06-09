#ifndef ROWSADD_H
#define ROWSADD_H

/*!
 * @def DIGITS_COUNT
 * Количество цифр в десятичной системе счисления
 * @def ADD_NUM
 * Добавляемое число
 */
#define DIGITS_COUNT 10
#define ADD_NUM 100

#include "matrixio.h"
#include <stdbool.h>

/*!
 * Функция ввода цифры
 * @param[out] digit - цифра
 * @return Код ошибки
 */
int digit_input(int *digit);

/**
 * @brief Функция присваивания значений одной строки другой
 *
 * @param[out] in_row - строка присваивания
 * @param[in] row_assign - присваеваемая строка
 * @param[in] n - размер строк
 */
void row_assign(int in_row[], const int row_assign[], size_t n);

/*!
 * Функция добавления строки
 * @param[in, out] matrix - матрица
 * @param[in] add_row -Добавляемая строка
 * @param[in] index - индекс строки после которой добавляется новая строка
 * @param[in] n, m - размер матрицы
 */
void row_add(int matrix[][M], int add_row[], size_t index, size_t n, size_t m);

/*!
 * Функция считает кол-во элементов строки, у которых первая цифра совпадает с заданной и у которых последняя циффра совпадает с заданной
 * @param[in] num - элемент строки
 * @param[in] digit - заданная цифра
 * @param[in,out] last - кол-во цифр нулевого разряда элементов строки, равных заданной цифре
 * @param[in,out] first - кол-во цифр наибольшего разряда элементов строки, равных заданной цифре
 */
void nums_get(int num, int *last, int *first, int digit);

/*!
 * Функция проверки строки на соответсвие условию
 * Условие: кол-во элементов, начинающихся на заданную цифру, равно кол-ву элементов, заканчивающихся на эту же цифру
 * @param[in] row - строка матрицы
 * @param[in] m - размер строки
 * @param[in] digit - цифра
 * @return значение логического типа
 */
bool row_check(const int row[], size_t m, int digit);

/*!
 * Функция добавления строк по определенному признаку
 * @param[in,out] matrix - матрица
 * @param[in,out] n - количество строк матрицы
 * @param[in] m - количество столбцов матрицы
 * @param[in] digit - цифра
 */
void rows_add(int martix[][M], size_t *n, size_t m, int digit);

/**
 * Функция формирования ряда
 * @param[out] row - ряд для формирования
 * @param[in] m - длина ряда
 */
void row_form(int row[], size_t m);

#endif //ROWSADD_H
