UC04_select_random()
{
	char text[64];
	int num = atoi(lr_eval_string("{rand_num}"));
	sprintf(text, "{tickets_%d}", num);
	
	lr_save_string(lr_eval_string(text), "num");
	
	lr_think_time(10);
	
	lr_start_transaction("UC04_TR04_select_random");

	web_url("UC04_TR04_select_random", 
	"URL=http://{host}:{port}/tickets/{num}/", 
	"TargetFrame=", 
	"Resource=0", 
	"RecContentType=text/html", 
	"Referer=http://{host}:{port}/tickets/?sortx=created&status=1&status=2&date_from=&date_to=&q=", 
	"Snapshot=t13.inf", 
	"Mode=HTML", 
	LAST);
	
	lr_end_transaction("UC04_TR04_select_random", LR_AUTO);

	return 0;
}