UC08_Check_count()
{
	int itemCount;
    int randomIndex;
    char buffer[10];

    // �������� �������� ����������, � ������� �������� ���������� ���������
    itemCount = atoi(lr_eval_string("{tickets_count}")); 

    // �������� �� 0
    if (itemCount == 0) {
        lr_error_message("���������� ��������� ����� 0. ������ ���������������.");
        lr_abort();  // ��������� ���������� �������
    }

    // ���������� ��������� ������ �� 1 �� itemCount
    randomIndex = (rand() % itemCount) + 1;

    // ��������� ������ � ��������
    sprintf(buffer, "{tickets_%d}", randomIndex);
    lr_save_string(lr_eval_string(buffer), "randomIndex");
    
	return 0;
}
