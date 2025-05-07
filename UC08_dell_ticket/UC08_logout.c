UC08_logout()
{
	
	lr_start_transaction("UC08_TR06_logout");
	
	lr_think_time(10);
	
	web_url("UC08_TR06_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC08_TR06_logout", LR_AUTO);
	
	return 0;
}
