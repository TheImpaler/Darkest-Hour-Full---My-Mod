 
 ############################## 
 # Country definition for SCH # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SCH 
 ai             = "SCH_1914.ai"
  capital        = 392 
  manpower        = 52 
  # Resource Reserves 
energy                 = 840
metal                  = 420
rare_materials         = 210
  oil          = 500 
  supplies        = 500 
  money         = 25 
  transports       = 100 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 2 
   freedom      = 7 
   free_market    = 9 
   professional_army = 7 
   defense_lobby     = 8 
   interventionism  = 1 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
   headofstate            = {  type = 9 id = 80137  } # Arthur Hoffmann
   headofgovernment       = {  type = 9 id = 80156  } # Hans Schatzmann
   foreignminister        = {  type = 9 id = 80128  } # Arthur Hoffmann 
   armamentminister       = {  type = 9 id = 80148  } # Giuseppe Motta 
   ministerofsecurity     = {  type = 9 id = 80157  } # Eduard Müller 
   ministerofintelligence = {  type = 9 id = 80158  } # Camille Decoppet
   chiefofstaff           = {  type = 9 id = 80159  } # Theodore Sprecher von Bernegg
   chiefofarmy            = {  type = 9 id = 80123  } # Ulrich Wille
   chiefofnavy            = {  type = 9 id = 80160  } # landlocked, ergo no navy Ulrich Wille
   chiefofair             = {  type = 9 id = 80118  } # Theodor Real 

   
  nationalprovinces   = {  392 391 389 390  } 
  ownedprovinces     = {  392 391 389 390  } 
  controlledprovinces  = {  392 391 389 390  } 
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Multirole fighter

	#Early Anti-Tank Artillery 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Great War Infantry Division  

	#Great War Cavalry Division  
	1310
	#Interbellum 1930 Supply 
	1910 
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division

	#Early Mountain Division 
	1160  1170 1180 
	#Engineers
	1830
	#Air Doctrines - ww1 techs

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 
	#Medicine
	5600
	#Firepower Focus Doctrine 

	#Great War Tank 
	#Landdoctrine ww1 - rest
	6500 6510 6530   
} 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 1  } 
   relation = {  tag = U08 value = 50  } 
   relation = {  tag = U09 value = 50  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = USA value = 1  } 
   } 
  SpyInfo        = {  country = "SCH" NumberOfSpies = 5  } 
  # Superior Firepower 
  # #################### 
  # ###Swiss 36OOB#### 
  # #################### 
  landunit = 
  {  id    = {  type = 30600 id = 1  } 
   location = 392 
   name   = "I Armeekorps" 
   Division = 
   {  id    = {  type = 30600 id = 2  } 
    name   = "1. Felddivision" 
    strength = 100 
    type   = infantry 
	model = 3
    extra  = artillery 
	brigade_model = 2
	experience = 10
    } 
   } 
  # ############################ 
  # ############################# 
  landunit = 
  {  id    = {  type = 30600 id = 3  } 
   location = 389 
   name   = "II Corps d' Armée" 
   Division = 
   {  id    = {  type = 30600 id = 4  } 
    name   = "2. Division d' Infanterie" 
    strength = 100 
    type   = infantry 
	model = 3
	experience = 5
    } 
   Division = 
   {  id    = {  type = 30600 id = 5  } 
    name   = "1. Alpenjägerdivision" 
    strength = 10 
    type   = bergsjaeger
	model = 3	
	experience = 0
    } 
   } 
  # ########################### 
  # ############################ 
  landunit = 
  {  id    = {  type = 30600 id = 6  } 
   location = 391 
   name   = "III Corpa di Armata" 
   Division = 
   {  id    = {  type = 30600 id = 7  } 
    name   = "3. Divisione di Fanteria" 
    strength = 100 
    type   = infantry 
	model = 3
	experience = 2
    } 
   Division = 
   {  id    = {  type = 30600 id = 8  } 
    name   = "4. Felddivisionen" 
    strength = 100 
    type   = infantry 
	model = 3
	experience = 10
    } 
   Division = 
   {  id    = {  type = 30600 id = 9  } 
    name   = "2. Div. de Infanterie de Montagne" 
    strength = 10 
    type   = bergsjaeger 
	model = 3	
	experience = 0
    } 
   } 
  # ############################### 
  # ############################### 
  landunit = 
  {  id    = {  type = 30600 id = 10  } 
   location = 390 
   name   = "IV Armeekorps" 
   Division = 
   {  id    = {  type = 30600 id = 11  } 
    name   = "5. Division d' Infanterie" 
    strength = 100 
    type   = infantry 
	model = 3
    extra  = engineer 
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id    = {  type = 30600 id = 12  } 
    name   = "6. Divisione di Fanteria" 
    strength = 100 
    type   = infantry 
	model = 3
	experience = 5
    } 
   Division = 
   {  id    = {  type = 30600 id = 13  } 
    name   = "3. Divisione di Alpinisti" 
    strength = 10 
    type   = bergsjaeger 
	model = 3
	experience = 0
    } 
   } 
 
  } 
 