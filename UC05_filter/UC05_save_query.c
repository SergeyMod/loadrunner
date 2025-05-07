UC05_save_query()
{
	
	if(atoi(lr_eval_string("{rand_num}"))>=900)
	{
		lr_param_sprintf ("RandomName", 
		                  "%s%s%s%s%s%s%s%s", 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"), 
		                  lr_eval_string("{rand_alf}"));
		
		web_reg_find("Text={RandomName}","SaveCount=count_query",LAST);
		
		
		lr_start_transaction("UC05_TR04_save_query");
		
		web_submit_data("UC05_TR04_save_query_1",
		"Action=http://{host}:{port}/save_query/",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&date_from=&date_to=&q=",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM,
		"Name=query_encoded", "Value={query_encoded}", ENDITEM,
		"Name=title", "Value={RandomName}", ENDITEM,
		LAST);
		
		if(atoi(lr_eval_string("{count_query}"))==0)
		{
			lr_end_transaction("UC05_TR04_save_query", LR_FAIL);
			lr_error_message("Не сохранено");
			lr_exit(LR_EXIT_ITERATION_AND_CONTINUE, LR_AUTO);
			return 0;
		}
		
		
		web_add_header("X-Requested-With", 
			"XMLHttpRequest");
		
		web_url("UC05_TR04_save_query_2",
		"URL=http://{host}:{port}/datatables_ticket_list/{query_encoded}?draw=1&columns%5B0%5D%5Bdata%5D=id&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=ticket&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=queue&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=status&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%"
		"5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=created&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=due_date&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=assigned_to&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=submitter&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=time_spent&columns%5B9%5D%5Bname"
		"%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=kbitem&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1746283409229",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host}:{port}/tickets/",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
		
		lr_end_transaction("UC05_TR04_save_query", LR_AUTO);
		
	}
	
	


	return 0;
}