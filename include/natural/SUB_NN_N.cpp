/*
  Бакиев Александр 5305
  Модуль: SUB_NN_N
  Назначение: Вычитание из первого большего натурального числа 
              второго меньшего или равного
  Зависимости: COM_NN_D
*/

struct NATURAL SUB_NN_N(struct NATURAL firstNum, struct NATURAL secondNum) {
	struct NATURAL firstTemp, secondTemp, result;
	bool check = true;
	int compare, i;
	
	compare = COM_NN_D(firstNum, secondNum);
	if (compare == 0) {
		result.seq = (int *)malloc(sizeof(int));
		*(result.seq) = 0;
		result.msd = 1;
		} else {
		if (n == 2) {
			firstTemp = firstNum;
			secondTemp = secondNum;
		} else {
			firstTemp = secondNum;
			secondTemp = firstNum;
		}

		for (i = 0; i < secondTemp.msd; i++) {
			result.seq = (int *)realloc(result.seq, (i + 1)*sizeof(int));
			if (*(firstTemp.seq + i) < *(secondTemp.seq + i)) {
				(*(firstTemp.seq + (i + 1)))--;
				*(firstTemp.seq + i) += 10;
				*(result.seq + i) = *(firstTemp.seq  + i) - *(secondTemp.seq + i);
			}
			*(result.seq + i) = *(firstTemp.seq + i) - *(secondTemp.seq + i);
		}
		
		for (i = secondTemp.msd; i < firstTemp.msd; i++) {
			if (*(firstTemp.seq + i) < 0) {
				(*(firstTemp.seq + (i + 1)))--;
				*(firstTemp.seq + i) += 10;
			}
		}

		for (i = firstTemp.msd; i > secondTemp.msd && check; i--) {
			if (*(firstTemp.seq + i) == 0)
				firstTemp.msd = firstTemp.seq - 1;
			else
				check = false;
		}

		for (i = secondTemp.msd; i < firstTemp.msd; i++) {
			result.seq = (int *)realloc(result.seq, (i + 1)*sizeof(int));
			*(result.seq + i) = *(firstTemp.seq + i);
		}
		result.msd = i;
	}
	
	return result;
}

