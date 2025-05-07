UC02_logout()
{
	FILE *f;
	f = fopen("dat\\username.dat", "a"); // 'a' = append (добавить в конец файла)
	
	if (f == NULL) {
		lr_error_message("Не удалось открыть файл для записи.");
		return -1;
	}
	
	fprintf(f, "%s,%s\n", 
	    lr_eval_string("{user_gen}"),
	    lr_eval_string("{pass_gen}")
	);
	
	fclose(f);
	
	lr_start_transaction("UC02_TR07_logout");
	
	lr_think_time(10);
	
	web_url("UC02_TR07_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC02_TR07_logout", LR_AUTO);
	
	return 0;
}
