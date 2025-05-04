UC06_chenge_assigned()
{
	lr_think_time(21);
	
	if(atoi(lr_eval_string("{count_unassigned}"))!=0)
	{
		
		lr_start_transaction("UC06_TR03_chenge_assigned");
		
		web_url("UC06_TR03_chenge_assigned", 
		"URL=http://192.168.0.138:23232/tickets/{num}/?take", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/tickets/{num}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
		
		lr_end_transaction("UC06_TR03_chenge_assigned", LR_AUTO);

	}
	
	return 0;
}