/*
	Бакиев Александр 5305
	Модуль: ADD_1N_N
	Назначение: Добавление 1 к натуральному числу
*/

struct NATURAL ADD_1N_N(struct NATURAL nNum) {
	int check = 0;

	for (int i = 0; i < nNum.msd && !check; i++) {
		if (nNum.seq[i] == 9) {
			nNum.seq[i] = 0;
			if (i == nNum.msd - 1) {
				nNum.seq = (int *)realloc(nNum.seq, (nNum.seq + 1)*sizeof(int));
				nNum.seq[nNum.msd] = 1;
				(nNum.msd)++;
				check = 1;
			}
		} else {
			nNum.seq[i]++;
			check = 1;
		}
	}

	return nNum;
}
