﻿#include "tasks.h"

/*	Task X. Chocolate [шоколадка]
*
*   Шоколадка имеет вид прямоугольника, разделенного на N×M равных долек.
*   Шоколадку можно один раз разломить по прямой на две части.
*   Определите, можно ли таким образом отломить от шоколадки ровно K долек.
*   Отломить можно всего один раз между дольками по разделительной линии.
*
*	Примечание
*	Не забудьте использовать "защиту от дурака", т.к. все величины должны быть больше нуля.
*	В случае неверных данных необходимо возвратить значение false.
*
*	Формат входных данных [input]
*	Функция получает на вход три целых числа n, m и k.
*
*	Формат выходных данных [output]
*	Функция должна возвратить значение булевского типа.
*
*	[ input 1]: 4 2 6
*	[output 1]: true
*
*	[ input 2]: 3 4 4
*	[output 2]: true
*
*	[ input 3]: 2 10 7
*	[output 3]: false
*
*	[ input 4]: -2 10 7
*	[output 4]: false
*
*	[ input 5]: 2 10 -7
*	[output 5]: false
*
*	[ input 6]: 0 10 7
*	[output 6]: false
*
*	[ input 7]: 3 5 15
*	[output 7]: false
*
*	[ input 7]: 3 5 30
*	[output 7]: false
*/

bool taskX(int n, int m, int k) {
    if (n <= 0 || m <= 0 || k <= 0 || k >= n * m  /*|| (k < n && k < m)*/) {
        return false;
    }
    if ((k % n == 0) || (k % m == 0)) {
        return true;
    }
    return false;
}