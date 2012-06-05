 
 ############################## 
 # Country definition for HON # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = HON 
 ai             = "HON_1914.ai"
  puppet                 = USA
  manpower        = 0 
  # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 2085 
  SpyInfo        = {  country = "HON" NumberOfSpies = 1  } 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 2 
   free_market    = 6 
   freedom      = 4 
   professional_army = 6 
   defense_lobby     = 5 
   interventionism  = 4 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  2085 2084 2088 2087 2086 2079 2080 2082 2081 2083 } 
  ownedprovinces     = {  2085 2084  } 
  controlledprovinces  = {  2085 2084  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	#Great War Infantry Division  
	1010  1020 
	#Great War Cavalry Division  

	#Early Mountain Division 
	1160  
	#Naval Infantry

	#Engineers
	1830   
	#Early Static Anti-Air Artillery 
	2800
	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510  
 } 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = GUA value = 100  } 
   relation = {  tag = NIC value = 100  } 
   relation = {  tag = SAL value = -15  } 
   relation = {  tag = USA value = 100  } 
    relation = {  tag = COS value = 50  }
    relation = {  tag = SPA value = 50  }
    relation = {  tag = U08 value = 50  }
    relation = {  tag = PAN value = 50  }
   } 

  landunit = 
  {  id    = {  type = 19500 id = 1  } 
   division = { 
            	id = { type = 19500 id = 2 } 
            	name = "1a División" 
            	strength = 100 
           	type = infantry
		model = 2 
		experience = 2
        	} 
        division = { 
            	id = { type = 19500 id = 3 } 
            	name = "2a División" 
            	strength = 100 
            	type = infantry 
		model = 2
		experience = 2
   } 
  } 
 }