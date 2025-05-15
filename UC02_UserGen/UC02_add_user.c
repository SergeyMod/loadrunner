UC02_add_user()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(3);
	
	web_reg_save_param_attrib(
		"ParamName=csrfmiddlewaretoken",
		"TagName=input",
		"Extract=value",
		"Name=csrfmiddlewaretoken",
		"Type=hidden",
		LAST);
	
	
	lr_start_transaction("UC02_TR05_add_user");

	web_url("UC02_TR05_add_user", 
		"URL=http://{host}:{port}/admin/auth/user/add/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/admin/auth/user/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/admin/css/widgets.css", "Referer=http://{host}:{port}/static/admin/css/forms.css", ENDITEM, 
		LAST);
	
	lr_end_transaction("UC02_TR05_add_user", LR_AUTO);

	return 0;
}
