 
 ############################## 
 # Country definition for BHU # 
 ############################## 
  
 country = 
 {  tag          = BHU 
  manpower        = 5 
  puppet                 = ENG 
  ai             = "BHU_1914.ai"
  # Resource Reserves 
energy                 = 180
metal                  = 90
rare_materials         = 45
  oil          = 200 
  supplies        = 200 
  money         = 10 
  capital        = 1456 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic = 3
   political_left  = 4 
   freedom = 3
   free_market = 3
   professional_army = 2
   defense_lobby     = 1 
   interventionism  = 2 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  1456  } 
  ownedprovinces     = {  1456  } 
  controlledprovinces  = {  1456  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500 6510   
	#Air Doctrines - ww1 techs
	#Engineers
 } 
  diplomacy = 
  {  relation = {  tag = AST value = 200  } 
   relation = {  tag = CAN value = 200  } 
   relation = {  tag = ENG value = 200  } 
   relation = {  tag = FRA value = 150  } 
   relation = {  tag = U08 value = 20  } 
   relation = {  tag = ITA value = 20  } 
   relation = {  tag = NEP value = 200  } 
   relation = {  tag = NZL value = 200  } 
   relation = {  tag = OMN value = 150  } 
   relation = {  tag = SAF value = 200  } 
   relation = {  tag = USA value = 25  }  
   relation = {  tag = YEM value = 150  } 
   relation = {  tag = TIB value = 175  } 
   } 
  SpyInfo        = {  country = "BHU" NumberOfSpies = 1  } 
  landunit = 
  {  location = 1456 
   id    = {  type = 16000 id = 1  } 
   name   = "Royal Bhutanese Army" 
   Division = 
   {  id    = {  type = 16000 id = 2  } 
    name   = "Household Division" 
    type   = infantry 
    model  = 2 
    strength = 100 
    experience = 2
    } 
   Division = 
   {  id    = {  type = 16000 id = 3  } 
    name   = "Royal Division" 
    type   = infantry 
    model  = 1 
    strength = 100
    experience = 2 
    } 
   } 
  } 
 