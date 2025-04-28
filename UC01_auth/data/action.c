Action()
{

	web_add_cookie("csrftoken=WlYzCrTyNXVfPIZbPU3okGdIebM8C9sME89jTMT4DDO35Qs28yUTAMoL6dWvhEsd; DOMAIN=192.168.0.138");

	web_add_cookie("25 Apr 2026 09:56:35 GMT; DOMAIN=192.168.0.138");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("192.168.0.138:23232", 
		"URL=http://192.168.0.138:23232/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Helpdesk", 
		"URL=http://192.168.0.138:23232/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("25 Apr 2026 09:57:03 GMT; DOMAIN=192.168.0.138");

	web_url("Helpdesk_2", 
		"URL=http://192.168.0.138:23232/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/login/?next=/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("sessionid=9icdc3x7okpmcn60o1a7mjfq0f6cychp; DOMAIN=192.168.0.138");

	web_add_cookie("25 Apr 2026 09:57:05 GMT; DOMAIN=192.168.0.138");

	lr_think_time(5);

	web_url("Log In", 
		"URL=http://192.168.0.138:23232/login/?next=/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("27 Apr 2025 09:57:32 GMT; DOMAIN=192.168.0.138");

	web_add_header("Origin", 
		"http://192.168.0.138:23232");

	web_submit_data("login", 
		"Action=http://192.168.0.138:23232/login/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/login/?next=/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=admindev", ENDITEM, 
		"Name=next", "Value=/", ENDITEM, 
		"Name=csrfmiddlewaretoken", "Value=YILbALP5LF8IIWFi3tCynYU7UdYPvugxGvWVR6PBBl1wY489m7t3D45aMf8caZgY", ENDITEM, 
		LAST);

	web_add_cookie("csrftoken=i5LUurQH2V8zazujusJiKnLXRsAKyCvEQ5W9KEPUFQtVOCITzYWK4KrwsPLBiBd0; DOMAIN=192.168.0.138");

	web_add_cookie("sessionid=i6fq4iseo1k8r0k8rh6j8qyq5gho4ag1; DOMAIN=192.168.0.138");

	web_add_cookie("25 Apr 2026 09:57:32 GMT; DOMAIN=192.168.0.138");

	web_url("Log In_2", 
		"URL=http://192.168.0.138:23232/login/?next=/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}