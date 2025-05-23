UC01_logout()
{
	lr_start_transaction("UC01_TR03_logout");
	
	web_url("UC01_TR03_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC01_TR03_logout", LR_AUTO);
	
	return 0;
}
