 
 ############################## 
 # Country definition for TIB # 
 ############################## 
  
 country = 
 {  tag          = TIB 
  # Resource Reserves 
energy                 = 300
metal                  = 150
rare_materials         = 75
  oil          = 500 
  supplies        = 500 
  money         = 10 
  capital        = 1289 
  manpower        = 10 
  transports       = 100 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 4 
   freedom      = 5 
   free_market    = 5 
   professional_army = 2 
   defense_lobby     = 1 
   interventionism  = 1 
   }

  diplomacy = 
  {  
   relation = {  tag = ENG value = 200  }
   relation = {  tag = U02 value = 50 } 
   relation = {  tag = NEP value = 50  } 
   relation = {  tag = BHU value = 50  } 
   relation = {  tag = UHC value = -150  } 
   } 


   headofstate            = {  type = 9 id = 440075  } # Thubten Gyatsho
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
   
  nationalprovinces   = {  1294 1286 1287 1288 1289 1295 1290 1285 1283 1284 1262 1292 1293 1278 } 
  ownedprovinces     = {  1294 1286 1287 1288 1289 1295 1290  } 
  controlledprovinces  = {  1294 1286 1287 1288 1289 1295 1290  } 
  claimedprovinces = { 1455 1458 }
  # ROTW Minor Tech '14  
  # Group E 1914 techs 
  # ###################### 
  # Basic Armoured Car 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#1916 lgt. Infantry Division  
	1010 
	#1916 Cavalry Division  
	1310  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
 } 
  SpyInfo        = {  country = "TIB" NumberOfSpies = 2  } 
  # GW Cavalry 
  landunit = 
  {  location = 1295 
   name   = "Xi'zang Jüntuan 1" 
   id    = {  type = 10700 id = 1  } 
   Division = 
   {  id  = {  type = 10700 id = 3  } 
    name = "10 Xi'zang Lü" 
    type = bergsjaeger 
	model = 0
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10700 id = 4  } 
    name = "17 Xi'zang Lü" 
    type = militia 
	model = 0
	experience = 0
    } 
   } 
  } 
 