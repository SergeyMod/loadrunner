UC03_new_ticket()
{

	web_reg_save_param_attrib(
		"ParamName=csrfmiddlewaretoken",
		"TagName=input",
		"Extract=value",
		"Name=csrfmiddlewaretoken",
		"Type=hidden",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=num",
		"RegExp=option value=\"(.*)\">{username}</option>",
		"NotFound=warning",
		LAST);
	
	lr_think_time(3);
	
	lr_start_transaction("UC03_TR03_new_ticket");
	
	web_url("UC03_TR03_new_ticket", 
		"URL=http://{host}:{port}/tickets/submit/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/tickets/submit/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC03_TR03_new_ticket", LR_AUTO);
	
	return 0;
}
