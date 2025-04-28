UC03_login()
{
	
	web_add_header("Origin", 
		"http://{host}:{port}");
	
	
	lr_start_transaction("UC03_TR02_login");

	web_submit_data("UC03_TR02_login", 
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
	
	lr_end_transaction("UC03_TR02_login", LR_AUTO);
	
	return 0;
}
