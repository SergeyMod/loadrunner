UC02_registration()
{

	lr_start_transaction("UC02_TR06_registration");
	
	lr_think_time(10);
	
	web_reg_save_param_attrib(
		"ParamName=csrfmiddlewaretoken",
		"TagName=input",
		"Extract=value",
		"Name=csrfmiddlewaretoken",
		"Type=hidden",
		LAST);
	
	web_reg_save_param_regexp(
		"ParamName=num",
		"RegExp=/admin/auth/user/(.*)/change/\">{user_gen}</a>",
		"NotFound=warning",
		LAST);
	
	lr_think_time(10);

	web_submit_data("UC02_TR06_registration", 
		"Action=http://{host}:{port}/admin/auth/user/add/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/admin/auth/user/add/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM, 
		"Name=username", "Value={user_gen}", ENDITEM, 
		"Name=password1", "Value={pass_gen}", ENDITEM, 
		"Name=password2", "Value={pass_gen}", ENDITEM, 
		"Name=_save", "Value=Save", ENDITEM, 
		EXTRARES, 
		"Url=/static/admin/img/selector-icons.svg", "Referer=http://{host}:{port}/static/admin/css/widgets.css", ENDITEM, 
		"Url=/static/admin/img/icon-unknown.svg", "Referer=http://{host}:{port}/static/admin/css/widgets.css", ENDITEM, 
		"Url=/static/admin/img/icon-unknown-alt.svg", "Referer=http://{host}:{port}/static/admin/css/widgets.css", ENDITEM, 
		"Url=/static/admin/img/icon-clock.svg", "Referer=http://{host}:{port}/static/admin/css/widgets.css", ENDITEM, 
		"Url=/static/admin/img/icon-calendar.svg", "Referer=http://{host}:{port}/static/admin/css/widgets.css", ENDITEM, 
		LAST);
	
	lr_think_time(10);

	web_submit_data("UC02_TR06_registration_change", 
		"Action=http://{host}:{port}/admin/auth/user/{num}/change/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{host}:{port}/admin/auth/user/5/change/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrfmiddlewaretoken", "Value={csrfmiddlewaretoken}", ENDITEM, 
		"Name=username", "Value={user_gen}", ENDITEM, 
		"Name=first_name", "Value=", ENDITEM, 
		"Name=last_name", "Value=", ENDITEM, 
		"Name=email", "Value={user_gen}@example.org", ENDITEM, 
		"Name=is_active", "Value=on", ENDITEM, 
		"Name=is_staff", "Value=on", ENDITEM, 
		"Name=last_login_0", "Value=", ENDITEM, 
		"Name=last_login_1", "Value=", ENDITEM, 
		"Name=date_joined_0", "Value={date_now}", ENDITEM, 
		"Name=date_joined_1", "Value={time_now}", ENDITEM, 
		"Name=initial-date_joined_0", "Value={date_now}", ENDITEM, 
		"Name=initial-date_joined_1", "Value={time_now}", ENDITEM, 
		"Name=_save", "Value=Save", ENDITEM, 
		LAST);
	
	lr_end_transaction("UC02_TR06_registration", LR_AUTO);

	return 0;
}
