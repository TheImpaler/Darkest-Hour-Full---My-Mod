 
 ############################## 
 # Country definition for CYN # 
 ############################## 
  
 country = 
 {  tag                    = CYN 
   regular_id             = CHI 
   intrinsic_gov_type     = paternal_autocrat 
   extra_tc               = 4 
   # Resource Reserves 
energy                 = 300
metal                  = 150
rare_materials         = 75
   oil                    = 100 
   supplies               = 100 
   money                  = 50 
   capital                = 1390 # Kunming 
   manpower               = 0 
   dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1390 1413 1304 1302 1296 1297 1298 1293 1292 1389 1291 1384 1385 1386 1387 1388 1299 1300  } 
   ownedprovinces         = {  1389 1390 1384 1385 1387 1386 1388 1291 1292 1293 } 
   controlledprovinces    = {  1389 1390 1384 1385 1387 1386 1388 1291 1292 1293 } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "CYN" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 615001  } 
   headofgovernment       = {  type = 9 id = 615002  } 
   foreignminister        = {  type = 9 id = 615003  } 
   armamentminister       = {  type = 9 id = 615004  } 
   ministerofsecurity     = {  type = 9 id = 615005  } 
   ministerofintelligence = {  type = 9 id = 615006  } 
   chiefofstaff           = {  type = 9 id = 615007  } 
   chiefofarmy            = {  type = 9 id = 615008  } 
   chiefofnavy            = {  type = 9 id = 615009  } 
   chiefofair             = {  type = 9 id = 615010  } 
   # ###### 
   # CHINA 1904 OOB 
   # ###### 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Yunnan Jingbei" 
     leader = 615007 # Long Yun 
     id       = {  type = 22100 id = 1  } 
     Division = 
     {  id       = {  type = 22100 id = 2  } 
       name     = "21. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 22100 id = 3  } 
       name     = "22. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 22100 id = 4  } 
       name     = "23. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "24. Jun" 
     leader = 615005 # Liu Wenhui 
     id       = {  type = 22100 id = 11  } 
     Division = 
     {  id       = {  type = 22100 id = 12  } 
       name     = "136. Bubing Shi" 
       type     = militia 
       strength = 50 
       model    = 3 
      } 
     Division = 
     {  id       = {  type = 22100 id = 13  } 
       name     = "137. Bubing Shi" 
       type     = militia 
       strength = 50 
       model    = 3 
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "Sichuan Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 270  } 
     Division = 
     {  id    = {  type = 22000 id = 271  } 
       name  = "Sichuan Baoantui" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "47. Jun" 
     # ## leader = 50171 # Li Jiayu 
     id       = {  type = 22000 id = 122  } 
     Division = 
     {  id    = {  type = 22000 id = 123  } 
       name  = "47. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "21. Jun" 
     # ## leader = 50207 # Liu Xiang 
     id       = {  type = 22000 id = 49  } 
     Division = 
     {  id    = {  type = 22000 id = 50  } 
       name  = "21. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "23. Jun" 
     # ## leader = 50248 # Pan Wenhua 
     id       = {  type = 22000 id = 57  } 
     Division = 
     {  id    = {  type = 22000 id = 58  } 
       name  = "23. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "44. Jun" 
     # ## leader = 50323 # Wang Zuanxu 
     id       = {  type = 22000 id = 109  } 
     Division = 
     {  id    = {  type = 22000 id = 110  } 
       name  = "44. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "45. Jun" 
     # ## leader = 50284 # Deng Xihou 
     id       = {  type = 22000 id = 113  } 
     Division = 
     {  id    = {  type = 22000 id = 114  } 
       name  = "45. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "7. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 156  } 
     Division = 
     {  id    = {  type = 22000 id = 157  } 
       name  = "7. Lujun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "4. Jun" 
     # ## leader = 50332 # Wu Qiwei 
     id       = {  type = 22000 id = 12  } 
     Division = 
     {  id    = {  type = 22000 id = 13  } 
       name  = "4. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "5. Jun" 
     # ## leader = 50115 # Xue Yue 
     id       = {  type = 22000 id = 15  } 
     Division = 
     {  id    = {  type = 22000 id = 16  } 
       name  = "5. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "20. Jun" 
     # ## leader = 50343 # Yang Sen 
     id       = {  type = 22000 id = 45  } 
     Division = 
     {  id    = {  type = 22000 id = 46  } 
       name  = "20. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Guizhou Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 218  } 
     Division = 
     {  id    = {  type = 22000 id = 219  } 
       name  = "Guizhou Silingbu" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Guizhou Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 272  } 
     Division = 
     {  id    = {  type = 22000 id = 273  } 
       name  = "Guizhou Baoantui" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
  }  
 