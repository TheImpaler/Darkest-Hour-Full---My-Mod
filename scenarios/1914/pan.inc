 
 ############################## 
 # Country definition for PAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = PAN 
 ai             = "PAN_1914.ai"
  puppet                 = USA
  # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2078 
  manpower        = 1 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 5 
   freedom      = 4 
   free_market    = 4 
   professional_army = 4 
   defense_lobby     = 4 
   interventionism  = 4 
   }
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
   
  nationalprovinces   = {  889 2078 2077  } 
  ownedprovinces     = {  2078 2077  } 
  controlledprovinces  = {  2078 2077  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#1870 Infantry
	1010 
	#1916 Cavalry Division  

	#Early Agriculture
	5700 

	# Early Construction Engineering 
	5800 
	#Landdoctrine ww1 - rest
	6500 6510 
	#Air Doctrines - ww1 techs

	# Modern Agriculture
	5700
 } 
  diplomacy = 
  {  relation = {  tag = USA value = 175  } 
   relation = {  tag = COL value = 50  } 
   relation = {  tag = ENG value = 50  } 
   relation = {  tag = U08 value = 50  } 
   } 
  SpyInfo        = {  country = "PAN" NumberOfSpies = 2  } 
  # Improved Construction Engineering 
  landunit = 
  {  id    = {  type = 14600 id = 50  } 
   name   = "Ejercito de Panama" 
   location = 2078 
   Division = 
   {  id    = {  type = 14600 id = 5000  } 
    name   = "1a Brigada de Infanterķa" 
    strength = 60 
    type   = infantry 
	model = 2
	experience = 0
    } 
   } 
  } 
 
