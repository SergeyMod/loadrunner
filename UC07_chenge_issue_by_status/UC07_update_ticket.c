UC07_update_ticket()
{
	
	lr_think_time(3);
	
	lr_start_transaction("UC07_TR05_update_ticket");
	
	web_submit_data("UC07_TR05_update_ticket",
		"Action=http://{host}:{port}/tickets/{num}/update/",
		"Method=POST",
		"EncType=multipart/form-data",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{host}:{port}/tickets/{num}/",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=comment", "Value=comment", ENDITEM,
		"Name=new_status", "Value={num_status_1}", ENDITEM,                       
		"Name=public", "Value=1", ENDITEM,
		"Name=time_spent", "Value=", ENDITEM,
		"Name=title", "Value={title}", ENDITEM,
		"Name=owner", "Value=0", ENDITEM,
		"Name=priority", "Value=4", ENDITEM,
		"Name=due_date", "Value=", ENDITEM,
		"Name=attachment", "Value=", "File=yes", ENDITEM,
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM,
		LAST);
	
	lr_end_transaction("UC07_TR05_update_ticket", LR_AUTO);
	
	return 0;
}