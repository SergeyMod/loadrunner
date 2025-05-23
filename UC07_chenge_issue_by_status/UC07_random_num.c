UC07_random_num()
{
	int itemCount;
    int randomIndex;
    char buffer[12];

    itemCount = atoi(lr_eval_string("{tickets_count}"));

    if (itemCount == 0) {
        lr_abort();
    }

    randomIndex = (rand() % itemCount) + 1;

    sprintf(buffer, "%d", randomIndex);
    lr_save_string(buffer, "num");

	return 0;
}
