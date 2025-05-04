UC02_logout()
{
	
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
