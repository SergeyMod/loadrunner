UC01_home_page()
{
	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_save_param_attrib(
		"ParamName=csrfmiddlewaretoken",
		"TagName=input",
		"Extract=value",
		"Name=csrfmiddlewaretoken",
		"Type=hidden",
		LAST);
	
	lr_start_transaction("OpenMainPage");
	
	web_url("home_page", 
		"URL=http://{host}:{port}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Snapshot=t1.inf", 
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("OpenMainPage", LR_AUTO);
	
	return 0;
}
