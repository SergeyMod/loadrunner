UC02_open_maintain_users()
{
	lr_start_transaction("UC02_TR04_open_maintain_users");

	web_url("UC02_TR04_open_maintain_users", 
		"URL=http://{host}:{port}/admin/auth/user/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/system_settings/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR04_open_maintain_users", LR_AUTO);

	return 0;
}
