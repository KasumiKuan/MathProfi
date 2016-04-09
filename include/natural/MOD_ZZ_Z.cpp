/*
	Салыкин Владимир 5305
	Модуль: MOD_ZZ_Z
	Назначение: Остаток от деления большего целого числа на меньшее 						
				или равное натуральное с остатком (делитель отличен от нуля)
	Зависимости: DIV_ZZ_Z
				 MUL_Z-_Z
				 MUL_ZZ_Z
			     SUB_Z_Z
*/

struct INTEGER MOD_ZZ_Z(struct INTEGER dividend, struct INTEGER divisor) {
	struct INTEGER remainder, private_d, inversion;

	private_d = DIV_ZZ_Z(dividend, divisor);
	inversion = MUL_Z - _Z(divisor);
	private_d = MUL_ZZ_Z(private_d, inversion);
	remainder = SUB_Z_Z(dividend, private_d);

	return remainder;
}