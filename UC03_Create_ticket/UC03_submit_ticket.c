UC03_submit_ticket()
{


	web_submit_data("submit", 
		"Action=http://{host}:{port}/tickets/submit/", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/tickets/submit/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM, 
		"Name=queue", "Value=1", ENDITEM, 
		"Name=title", "Value={Random Namber}", ENDITEM, 
		"Name=body", "Value={Random Namber}", ENDITEM, 
		"Name=priority", "Value=3", ENDITEM, 
		"Name=due_date", "Value=", ENDITEM, 
		//"Name=attachment", "Value=", "File=No", ENDITEM, 
		//"Name=submitter_email", "Value=", ENDITEM, 
		"Name=assigned_to", "Value={num}", ENDITEM, 
		LAST);


	return 0;
}