#include <stdio.h>

#define NL "\n"


/* Парсим xml-файл FLK - ответ-результат форматно-логического контроля
 * из ФОМС
 * 
*/

int check_cmd_line(int, char *[]);
int print_valid_params(void);

int main(int argc, char *argv[])
{
	int i;

	printf(NL);
	if (check_cmd_line(argc, argv) < 0)
	{
		print_valid_params();
		return -1;
	}
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
	char c;

	/* Проверяем количество параметров 
	 */
	if(argc < 2)
		return -1;

	/* Проверяем первый параметр (имя файла) на правильность символов
	 */

	for(i = 0; (c = argv[1][i]) != '\0'; i++)
	{
		printf("-***- %d\n", c);
		if (c <= '0' || c >= 'Z')
			return -2;
	}

	return result;
}

int print_valid_params(void)
{
	printf(NL);
	printf("Usage: test file_name\n");
	printf(NL);
	return 0;
}
