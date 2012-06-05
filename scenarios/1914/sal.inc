 
 ############################## 
 # Country definition for SAL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SAL 
 ai             = "SAL_1914.ai"
  # Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
  oil          = 500 
  supplies        = 500 
  money         = 10 
  manpower        = 5 
  transports       = 100 
  capital        = 2079 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 2 
   freedom      = 5 
   free_market    = 5 
   professional_army = 2 
   defense_lobby     = 5 
   interventionism  = 3 
   }
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
   
  nationalprovinces   = {  2079 2085 2084 2088 2087 2086 2080 2082 2081 2083 } 
  ownedprovinces     = {  2079  } 
  controlledprovinces  = {  2079  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {
	#Interwar Fighter  
	4500 4510
	#Basic Anti-Air Artillery Brigade 

	#Great War Heavy Field Artillery 
	2290 2300 
	#Great War Infantry Division  
	1010  1020 
	#Great War Cavalry Division  
	13060 
	#Early Mountain Division 
	1160    
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Basic Construction Engineering 

	#Basic Oil Refining 

	#Landdoctrine ww1 - rest
	6500 6510  

	#Engineers
	1830
	#Air Doctrines - ww1 techs
  }
  diplomacy = 
  {  relation = {  tag = HON value = 100  } 
     relation = {  tag = USA value = 100  } 
    relation = {  tag = ENG value = 50  } 
    relation = {  tag = GUA value = 50  } 
    relation = {  tag = NIC value = 50  } 
    relation = {  tag = COS value = 50  }
    relation = {  tag = SPA value = 50  }
    relation = {  tag = U08 value = 50  }
    relation = {  tag = PAN value = 50  }
   } 
  SpyInfo        = {  country = "SAL" NumberOfSpies = 2  } 
  landunit = 
  {  id    = {  type = 21600 id = 70  } 
   name   = "Ejercito del Salvador" 
   location = 2079 
   Division = 
   {  id    = {  type = 21600 id = 7000  } 
    name   = "I Brigada de Infantería" 
    strength = 40 
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   } 
  } 
 