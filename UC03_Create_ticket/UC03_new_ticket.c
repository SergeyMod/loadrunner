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
	
	
	web_url("tickets", 
		"URL=http://{host}:{port}/tickets/submit/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/tickets/submit/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
