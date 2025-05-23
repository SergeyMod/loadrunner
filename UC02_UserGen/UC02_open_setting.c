UC02_open_setting()
{

	lr_start_transaction("UC02_TR03_open_setting");
	
	web_url("UC02_TR03_open_setting", 
		"URL=http://{host}:{port}/system_settings/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/tickets/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR03_open_setting", LR_AUTO);
	
	return 0;
}