UC06_logout()
{
	
	lr_start_transaction("UC06_TR05_logout");
	
	lr_think_time(10);
	
	web_url("UC06_TR05_logout", 
		"URL=http://{host}:{port}/logout/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC06_TR05_logout", LR_AUTO);
	
	return 0;
}
