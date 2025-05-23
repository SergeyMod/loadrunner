UC08_Check_count()
{
	int itemCount;
    int randomIndex;
    char buffer[10];

    // Получаем значение переменной, в которой хранится количество элементов
    itemCount = atoi(lr_eval_string("{tickets_count}")); 

    // Проверка на 0
    if (itemCount == 0) {
        lr_error_message("Количество элементов равно 0. Скрипт останавливается.");
        lr_abort();  // Прерывает выполнение скрипта
    }

    // Генерируем случайный индекс от 1 до itemCount
    randomIndex = (rand() % itemCount) + 1;

    // Сохраняем индекс в параметр
    sprintf(buffer, "{tickets_%d}", randomIndex);
    lr_save_string(lr_eval_string(buffer), "randomIndex");
    
	return 0;
}
