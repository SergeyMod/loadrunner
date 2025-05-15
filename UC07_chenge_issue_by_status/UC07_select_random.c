UC07_select_random()
{
	char text[64];
	int num = atoi(lr_eval_string("{rand_num}"));
	sprintf(text, "{tickets_%d}", num);
	
	web_reg_save_param_regexp( 
		"ParamName=query_encoded",
		"RegExp=query_encoded\' value=\'(.*)\'\/>",
		LAST);
	
	web_url("UC07_TR04_select_random", 
	"URL=http://{host}:{port}/tickets/", 
	"TargetFrame=", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&status=2&date_from=&date_to=&q=", 
	"Snapshot=t13.inf", 
	"Mode=HTML", 
	LAST);
	
	web_reg_save_param_json(
		"ParamName=tickets",
	    "QueryString=$.data[*].id",
	    "SEARCH_FILTERS",
	    "Scope=Body", 
	    "SelectAll=Yes",
	    "LAST");
	
	lr_think_time(3);
	
	web_url("UC04_TR03_chenge_10_1", 
		"URL=http://{host}:{port}/datatables_ticket_list/{query_encoded}?draw=2&columns%5B0%5D%5Bdata%5D=id&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=ticket&"
		"columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=queue&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&"
		"columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=status&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=created&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=due_date&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=assigned_to&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D="
		"submitter&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=time_spent&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=kbitem&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true"
		"&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=10&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1745858326351", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&status=2&date_from=&date_to=&q=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_save_string(lr_eval_string(text), "num");
	
	
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