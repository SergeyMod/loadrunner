UC02_login()
{
	
	web_add_header("Origin", 
		"http://{host}:{port}");
	
	lr_think_time(3);
	
	lr_start_transaction("UC02_TR02_login");

	web_reg_find("Text=logout","SaveCount=count",LAST);
	
	web_submit_data("UC02_TR02_login", 
		"Action=http://{host}:{port}/login/?next=/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=next", "Value=/", ENDITEM, 
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM, 
		LAST);
	
	
	if(atoi(lr_eval_string("{count}"))==0)
	{
		lr_end_transaction("UC02_TR02_login", LR_FAIL);
		lr_error_message("Пользователь не авторизован");
		lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_FAIL);
		return 0;
	}
	
	lr_end_transaction("UC02_TR02_login", LR_AUTO);
	
	return 0;
}
