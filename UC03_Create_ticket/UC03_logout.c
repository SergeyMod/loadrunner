UC03_logout()
{
	
	lr_think_time(3);
	
	lr_start_transaction("UC03_TR05_logout");
	
	web_url("UC03_TR05_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC03_TR05_logout", LR_AUTO);
	
	return 0;
}
