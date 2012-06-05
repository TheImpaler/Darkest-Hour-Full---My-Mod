 
 ############################## 
 # Country definition for TIB # 
 ############################## 
  
 country = 
 {  tag                    = TIB 
   ai = "tib_1936.ai"
   dissent = 20
   # Resource Reserves 
energy                 = 300
metal                  = 150
rare_materials         = 75
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1289 
   manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 5 
     free_market       = 5 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1294 1286 1287 1288 1289 1295 1290  } 
   ownedprovinces         = {  1294 1286 1287 1288 1289 1295 1290  } 
   controlledprovinces    = {  1294 1286 1287 1288 1289 1295 1290  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # Basic Armoured Car 
   techapps               = {  
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700   
#Medicine
5600
# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
} 
inventions = { 3000027 }
   SpyInfo                = {  country = "TIB" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 440001  } 
   headofgovernment       = {  type = 9 id = 440002  } 
   foreignminister        = {  type = 9 id = 440003  } 
   armamentminister       = {  type = 9 id = 440004  } 
   ministerofsecurity     = {  type = 9 id = 440005  } 
   ministerofintelligence = {  type = 9 id = 440006  } 
   chiefofstaff           = {  type = 9 id = 440007  } 
   chiefofarmy            = {  type = 9 id = 440008  } 
   chiefofnavy            = {  type = 9 id = 440009  } 
   chiefofair             = {  type = 9 id = 440010  } 
   # GW Cavalry 
   landunit = 
   {  location = 1295 
     name     = "Xi'zang Jüntuan 1" 
     id       = {  type = 10700 id = 1  } 
     Division = 
     {  id    = {  type = 10700 id = 2  } 
       name  = "1 Xi'zang Shi" 
	   strength = 10
       type  = infantry 
	   model    = 5

      } 
     Division = 
     {  id   = {  type = 10700 id = 3  } 
       name = "10 Xi'zang Lü" 
       type = militia 
	   strength = 20
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 10700 id = 4  } 
       name = "17 Xi'zang Lü" 
       type = militia 
	   strength = 20
	   model    = 3
      } 
    } 
  } 
 
