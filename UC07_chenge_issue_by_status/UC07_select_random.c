UC07_select_random()
{
	
	web_reg_save_param_attrib(
		"ParamName=csrfmiddlewaretoken",
		"TagName=input",
		"Extract=value",
		"Name=csrfmiddlewaretoken",
		"Type=hidden",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=title",
		"RegExp=<h3>\\w+-\\d+\\.\\s(.*?)\\s\\[",
		"NotFound=warning",
		//"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=num_status",
		"RegExp=name\='new_status' value\='(\\d)'(?![^>]*checked)",
		"NotFound=warning",
		"Ordinal=ALL",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
	
	lr_start_transaction("UC07_TR04_select_random");

	web_url("UC07_TR04_select_random", 
	"URL=http://{host}:{port}/tickets/{num}/", 
	"TargetFrame=", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&status=2&date_from=&date_to=&q=", 
	"Snapshot=t13.inf", 
	"Mode=HTML", 
	LAST);
	
	lr_end_transaction("UC07_TR04_select_random", LR_AUTO);

	return 0;
}