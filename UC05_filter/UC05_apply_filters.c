UC05_apply_filters()
{


	lr_think_time(22);
	
	lr_start_transaction("UC05_TR03_apply_filters");

	web_reg_save_param_attrib(
			"ParamName=csrfmiddlewaretoken",
			"TagName=input",
			"Extract=value",
			"Name=csrfmiddlewaretoken",
			"Type=hidden",
			LAST);
// ошибка с памятью
/*Correlation comment - Do not change!  Original value='eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAiZmlsdGVyaW5nX29yIjogeyJzdGF0dXNfX2luIjogWzEsIDJdfSwgInNvcnRpbmciOiAiY3JlYXRlZCIsICJzb3J0cmV2ZXJzZSI6IG51bGwsICJzZWFyY2hfc3RyaW5nIjogIiJ9' Name ='query_encoded' Type ='ResponseBased'*/
//	web_reg_save_param_attrib(
//		"ParamName=query_encoded",
//		"TagName=input",
//		"Extract=value",
//		"Name=query_encoded",
//		"Type=hidden",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=No",
//		LAST);


// не находит
//	web_reg_save_param_regexp( 
//		"ParamName=query_encoded",
//		"RegExp=query_encoded(.*)>",
//		"SEARCH_FILTERS",
//		"Scope=Body",
////		"IgnoreRedirections=No",
//		"RequestUrl=*/nav.pl*",
//		LAST);

	lr_save_string("eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAiZmlsdGVyaW5nX29yIjogeyJzdGF0dXNfX2luIjogWzEsIDJdfSwgInNvcnRpbmciOiAiY3JlYXRlZCIsICJzb3J0cmV2ZXJzZSI6IG51bGwsICJzZWFyY2hfc3RyaW5nIjogIiJ9",
               "query_encoded");

	web_url("UC05_TR03_apply_filters_1", 
		"URL=http://{host}:{port}/tickets/?sortx=created&status=1&date_from=&date_to=&q=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/tickets/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("UC05_TR03_apply_filters_2",
		"URL=http://{host}:{port}/datatables_ticket_list/{query_encoded}?draw=1&columns%5B0%5D%5Bdata%5D=id&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=ticket&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=queue&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=status&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%"
		"5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=created&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=due_date&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=assigned_to&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=submitter&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=time_spent&columns%5B9%5D%5Bname"
		"%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=kbitem&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1746283376000",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&status=2&date_from=&date_to=&q=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		LAST);
		
	lr_end_transaction("UC05_TR03_apply_filters", LR_AUTO);

	return 0;
}
