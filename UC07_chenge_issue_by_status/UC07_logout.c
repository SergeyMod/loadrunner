UC07_logout()
{
	lr_start_transaction("UC07_TR06_logout");
	
	web_url("UC07_TR06_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC07_TR06_logout", LR_AUTO);
	
	return 0;
}
