UC03_submit_ticket()
{

	web_add_cookie("sessionid=\"\"; DOMAIN=192.168.0.138");

	web_add_cookie("csrftoken=1pb4fpZAU17F3iCxBFtd5BGffKSicJAUr4dlJCgsjwdJb5tcEYviPxXH0KmlvnWG; DOMAIN=192.168.0.138");

	web_add_cookie("sessionid=nd379ku84n1gkiax74d9ks5nhf42s6xk; DOMAIN=192.168.0.138");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("system_settings", 
		"URL=http://192.168.0.138:23232/system_settings/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/system_settings/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("messages=\"\"; DOMAIN=192.168.0.138");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("Maintain Users", 
		"URL=http://192.168.0.138:23232/admin/auth/user/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/admin/auth/user/3/change/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("26 Apr 2026 15:23:46 GMT; DOMAIN=192.168.0.138");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("tickets", 
		"URL=http://192.168.0.138:23232/tickets/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/login/?next=/system_settings/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("26 Apr 2026 15:23:49 GMT; DOMAIN=192.168.0.138");

	web_url("admin", 
		"URL=http://192.168.0.138:23232/admin/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/admin/auth/user/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../static/admin/img/icon-deletelink.svg", "Referer=http://192.168.0.138:23232/static/admin/css/base.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAic29ydGluZyI6ICJjcmVhdGVkIiwgInNlYXJjaF9zdHJpbmciOiAiIiwgInNvcnRyZXZlcnNlIjogZmFsc2V9", 
		"URL=http://192.168.0.138:23232/datatables_ticket_list/eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAic29ydGluZyI6ICJjcmVhdGVkIiwgInNlYXJjaF9zdHJpbmciOiAiIiwgInNvcnRyZXZlcnNlIjogZmFsc2V9?draw=1&columns%5B0%5D%5Bdata%5D=id&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=ticket&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&"
		"columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=queue&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=status&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=created&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=due_date"
		"&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=assigned_to&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=submitter&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=time_spent&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=kbitem&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&"
		"columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1745767437282", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.0.138:23232/tickets/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("tickets_2", 
		"URL=http://192.168.0.138:23232/tickets/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("26 Apr 2026 15:23:53 GMT; DOMAIN=192.168.0.138");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAic29ydGluZyI6ICJjcmVhdGVkIiwgInNlYXJjaF9zdHJpbmciOiAiIiwgInNvcnRyZXZlcnNlIjogZmFsc2V9_2", 
		"URL=http://192.168.0.138:23232/datatables_ticket_list/eyJmaWx0ZXJpbmciOiB7InN0YXR1c19faW4iOiBbMSwgMl19LCAic29ydGluZyI6ICJjcmVhdGVkIiwgInNlYXJjaF9zdHJpbmciOiAiIiwgInNvcnRyZXZlcnNlIjogZmFsc2V9?draw=1&columns%5B0%5D%5Bdata%5D=id&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=false&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=ticket&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&"
		"columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=priority&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=queue&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=status&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=created&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=due_date"
		"&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=true&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=assigned_to&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=true&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=submitter&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&"
		"columns%5B8%5D%5Borderable%5D=true&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=time_spent&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=kbitem&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&"
		"columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=0&order%5B0%5D%5Bdir%5D=asc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1745767440626", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.0.138:23232/tickets/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.0.138:23232");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("submit", 
		"Action=http://192.168.0.138:23232/tickets/submit/", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.0.138:23232/tickets/submit/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrfmiddlewaretoken", "Value=kwSTP43YI22JeF5OWj2NhQLhIBT3txX4KbUajhkQ7x8NmsWtZC4S1M2JtBn6MbjQ", ENDITEM, 
		"Name=queue", "Value=1", ENDITEM, 
		"Name=title", "Value=Summary of the problem", ENDITEM, 
		"Name=body", "Value=Description of your issue", ENDITEM, 
		"Name=priority", "Value=3", ENDITEM, 
		"Name=due_date", "Value=", ENDITEM, 
		"Name=attachment", "Value=", "File=Yes", ENDITEM, 
		"Name=submitter_email", "Value=admin@example.org", ENDITEM, 
		"Name=assigned_to", "Value=1", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,neifaoindggfcjicffkgpmnlppeffabd,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,efniojlnjndmcbiieegkicadnoecjjef,oimompecagnajdejgnnjijobebaeigek,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ldfkbgjbencjpgjfleiooeldhjdapggh,"
		"niikhdgajlphfehepabhhblakbdgeefj,ojhpjlocmbogdgmfpkhlaaeamibhnphh,hfnkpimlhhgieaddgfemjhofmfblmnib,lmelglejhemejginpboagddgdfbepgmp,mcfjlbnicoclaecapilmleaelokfnijm,pmagihnlncbcefglppponlgakiphldeh,laoigpblnllgcgjnjnllmfolckpjlhki,hajigopbbjhghbfimgkfmpenfkclmohk,eeigpngbgcognadeebkilcpcaedhellh,jflhchccmppkfebkiaminageehmchikm,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-135.0.7049.115");

	lr_think_time(4);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:IYEqcFZ_Srnbv5SK66FoCQc00dpmPydVbES_U__S_wQ&cup2hreq=bb5636500b977b321bff8d1be1589536cf95471b989f5251abf4ddfc940fa5e6", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{c0d31504-239a-4b2b-9af6-828ba097b5d2}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.1987650928271ad440c2b8a50f309139de82c742fb6f1f3ea055b35718ac46e7\"}]},\"ping\":{\"ping_freshness\":\"{3a3e22ef-62fd-4f8a-b115-fcd412cdfac3}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2025.1.17.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\""
		"ping\":{\"ping_freshness\":\"{945151dc-a467-40e2-974e-b90f0828bb89}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"cohort\":\"1:bm1:2zpr@0.5\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6af08fc2b0dd497e30e40290efcb817b9b1f7dc7f734ab1a9dd000ae01f36050\"}]},\"ping\":{\"ping_freshness\":\"{a14a279b-a85e-4948-998b-b82515c011b3}\",\"rd\":6691},\"updatecheck\":{},\"version"
		"\":\"9.55.0\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"cohort\":\"1:s6f:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.9cc59cecf2564b1865b76ad2f7bd089e8126e40fbc3bb332758b61def60a910a\"}]},\"ping\":{\"ping_freshness\":\"{1e309183-f23d-4375-98da-eaab06859c28}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"20250330.743742949.14\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\""
		"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{025d531a-3ab0-49a0-9c05-3777a3243e92}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.44c97a8527ef50cab95a16c5e78cd321cbdf315726823afe7e0482af9eb18319\"}]},\"ping\":{\"ping_freshness\":\"{f8c07a2a-9622-4ffb-af2d-7d2588852556}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"67\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2638e3c2d1fa1d417bfdc31dd21bc938f106d3b436a6488b41b014ca9e2b7541\"}]},\"ping\":{\"ping_freshness\":\""
		"{91f4166c-7385-44ae-a775-f93f412f35cc}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"1.0.0.17\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.968ef163a4b187fa0cf961fac9b0b045d346685bcf1cbde56474baffc5a4f1a3\"}]},\"ping\":{\"ping_freshness\":\"{2d607e81-0bfc-4118-aed8-d2bf8f6bab12}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"1293\"},{\"appid\":"
		"\"oimompecagnajdejgnnjijobebaeigek\",\"cohort\":\"1:2qw3:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{78342eef-81c5-4835-a9bf-c0c18cea44c5}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"4.10.2891.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{71ac2154-8452-4fef-8cfe-84162a6747d4}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b0f9a5616fd30d2006013754fa47fb752d779ebb31e5a0a58d065b825395de6d\"}]},\"ping\":{\"ping_freshness\":\""
		"{5811b056-3fb5-41bf-b746-9212cef80a93}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"3068\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"cohort\":\"1:ut9/1a0f:2ymf@0.025\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.58be97f6003ce428c9470e1e5cecdfe8bbac401049f5ab451cd1fb46c70dbc39\"}]},\"ping\":{\"ping_freshness\":\"{3409f4e1-0c4b-405a-a5e9-8b12f37f8cc4}\",\"rd\":6691},\"updatecheck\":{},\"version\":\""
		"2025.3.26.1143\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{2358b457-b8d9-4134-b4a1-c17b174d2036}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ldfkbgjbencjpgjfleiooeldhjdapggh\",\"cohort\":\"1:2v8l:\",\"cohortname\":\"Auto"
		"\",\"enabled\":true,\"installdate\":6666,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b9c8fa0dbca7e64987049b556dab42ddb744fe7cd0bef2dd71cf433d6fcc5c3d\"}]},\"ping\":{\"ping_freshness\":\"{19b5fed5-49bd-40c4-917b-099dc2d1c904}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2025.2.18.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.eb54b382a2443e12aba61ae32ff268bf613c6aeb087107c8e45b7cea43843311\"}]},\"ping\":{\"ping_freshness\":\"{366d93bd-8d87-4199-b4e8-860f38b6fd8b}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2025.4.23.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\""
		"{6bf469ae-5d15-4ced-a27c-6887ca8112c7}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"cohort\":\"1:287f:\",\"cohortname\":\"Auto full\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.100dfaf84ae36b9f81f6a851725e204e05ad69d086824e9d29a487b36e0fc04a\"}]},\"ping\":{\"ping_freshness\":\"{d9849038-5d92-4354-ba2a-15f9a5f4e99b}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"9741\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3d762a79b444e8962634a46efc5b52c46449ff2d1428017076e723f55e514810\"}]},\"ping\":{\"ping_freshness\":\"{a118418d-44a1-4936-9d55-f16cbd108703}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"503\"},{\"appid\":\"mcfjlbnicoclaecapilmleaelokfnijm\",\"cohort\":\"1:2ql3:\",\"cohortname\":\"Initial upload\",\"enabled\":true,\""
		"installdate\":6658,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a3dacd50f7c50b03c69ac3a5a24967e55f59b6596e295d33f3c76a12211fd389\"}]},\"ping\":{\"ping_freshness\":\"{cd07b2be-6ab9-4fb7-a8b2-3b71360add58}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2024.11.26.0\"},{\"appid\":\"pmagihnlncbcefglppponlgakiphldeh\",\"cohort\":\"1:2ntr:\",\"cohortname\":\"General Release\",\"enabled\":true,\"installdate\":6658,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.53cf0a62db37790f84c9d436e4b5a9073bd770c308ee297e20efbadc28249d43\"}]},\"ping\":{\"ping_freshness\":\"{48837041-e9df-4149-927d-5b5ec4f2604b}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2024.10.17.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e444ba601ac72b669514e6788bc458ac6b4a3f4400f18ad9b297a84eb27009e5\"}]},\"ping\":{\"ping_freshness\":\""
		"{b2e97f7c-7ee6-48c5-92a0-72055b64ffa9}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"1.0.7.1744928549\"},{\"appid\":\"hajigopbbjhghbfimgkfmpenfkclmohk\",\"cohort\":\"1:2tdl:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6627,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.831faa9e9d6295bb4969020664f48973e9b8c8bb322bd4aeaa5ac54bcb696979\"}]},\"ping\":{\"ping_freshness\":\"{79661a7a-9824-4842-92a1-5f0399a8a042}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":"
		"\"eeigpngbgcognadeebkilcpcaedhellh\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8814cb6cab024b119ab991ad7acd74f4df7bc68bbf86c0903c8be9852a5baa55\"}]},\"ping\":{\"ping_freshness\":\"{34849122-12a9-4d5f-b47f-9ab8935230a4}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2024.7.12.235938\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\""
		"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.5ff105c462179bafc01e8a7927da0c85f9222261cfb5da959b6f575f404e1094\"}]},\"ping\":{\"ping_freshness\":\"{5110a041-102a-4161-a9c1-547fa5e35344}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2025.4.26.1\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.03f446ac47eade7cf0c07cfd12a8a748b3aa84f65668755b90c6a136d2bc03e4\"}]},\"ping\":{\"ping_freshness\":\"{fa86b387-0a84-4d32-b65b-82c3b786b5d4}\",\"rd\":6691},\"updatecheck\":{},\"version\":\"2025.4.2.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.26100.3775\"},\"prodversion\":\"135.0.7049.115\",\"protocol\":\"3.1\",\"requestid\":\"{13b415f2-b673-43b8-b781-377fd9a64a95}\",\"sessionid\":\"{bf44dcc3-b9f8-4e7c-bee9-1fb0e00c4edc}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"137.0.7129.0\"},\"updaterversion\":\"135.0.7049.115\"}}", 
		EXTRARES, 
		"Url=http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/gcmjkmgdlgnkkcocmoeiminaijmmjnii/bce39b06df543968b131187989c96ac5953e83e64a53ded2c59ba4e235dbbccb", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4033,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"9.56.0\",\"previousversion\":\"9.55.0\",\"total\":25476,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"gcmjkmgdlgnkkcocmoeiminaijmmjnii/bce39b06df543968b131187989c96ac5953e83e64a53ded2c59ba4e235dbbccb\"},{\"download_time_ms\":158,\"downloaded\":25476,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"9.56.0\",\"previousversion\":\"9.55.0\",\"total\":25476,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/gcmjkmgdlgnkkcocmoeiminaijmmjnii/bce39b06df543968b131187989c96ac5953e83e64a53ded2c59ba4e235dbbccb\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\""
		"1.db4723444ca14716421bc880c306291c1c138c07a19ec9a6f1cc15b2ed2db1b5\",\"nextversion\":\"9.56.0\",\"previousfp\":\"1.6af08fc2b0dd497e30e40290efcb817b9b1f7dc7f734ab1a9dd000ae01f36050\",\"previousversion\":\"9.55.0\"}],\"installdate\":6590,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.db4723444ca14716421bc880c306291c1c138c07a19ec9a6f1cc15b2ed2db1b5\"}]},\"version\":\"9.56.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2"
		"\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.3775\"},\"prodversion\":\"135.0.7049.115\",\"protocol\":\"3.1\",\"requestid\":\"{0c895ed7-b6d0-485c-b7d2-e899c83ebd9f}\",\"sessionid\":\"{bf44dcc3-b9f8-4e7c-bee9-1fb0e00c4edc}\",\"updaterversion\":\"135.0.7049.115\"}}", 
		LAST);

	return 0;
}