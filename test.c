#include <stdio.h>

#define NL "\n"


/* Парсим xml-файл FLK - ответ-результат форматно-логического контроля
 * из ФОМС
 * 
*/

int check_cmd_line(int, char *[]);

int main(int argc, char *argv[])
{

	int i;

	printf(NL);
	printf("Результат chek_cmd_line: %d\n", check_cmd_line(argc, argv));
	printf(NL);

	return 0;
}

/* Проверяет правильность переданных параметров на предмет правильных символов.
 * Возвращает 0, если все Ок или -1, если всё плохо.
 */
int check_cmd_line(int argc, char *argv[])
{
	int result = 0;
	int i = 0;

	/* Проверяем количество параметров 
	 */
	if(argc < 2)
		return -1;

	/* Проверяем первый параметр (имя файла) на правильность символов
	 */

	while(argv[1][i] != '\0')
		printf("%d. %d %d\n", i++, argv[1][i], sizeof(argv[1][i]));
	

	return result;
}
