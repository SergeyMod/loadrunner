UC02_add_user()
{

	web_add_cookie("26 Apr 2026 09:11:09 GMT; DOMAIN=192.168.0.138");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("add", 
		"URL=http://192.168.0.138:23232/admin/auth/user/add/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/admin/auth/user/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/admin/css/widgets.css", "Referer=http://192.168.0.138:23232/static/admin/css/forms.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.0.138:23232");

	web_submit_data("add_2", 
		"Action=http://192.168.0.138:23232/admin/auth/user/add/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/admin/auth/user/add/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrfmiddlewaretoken", "Value=ihNW8uaJxLv0zjiv0kKSrDd7aaCGotqJIWPdCHrBWgB4H69a3DMXbzuzVa6JH7Mv", ENDITEM, 
		"Name=username", "Value=", ENDITEM, 
		"Name=password1", "Value=", ENDITEM, 
		"Name=password2", "Value=", ENDITEM, 
		"Name=_save", "Value=Save", ENDITEM, 
		LAST);

	return 0;
}
