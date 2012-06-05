 ############################## 
 # Country definition for ALB # 
 ##############################  

 #####################
 # Country main data #
 #####################  
country = { 
  tag       	 = ALB
  capital   	 = 359
  flag_ext = _14
  manpower  	 = 5 
  dissent = 15
  ai             = "ALB_1914.ai"
  # Resource Reserves 
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500 
  supplies       = 500
  money          = 10
  transports       = 100 
  # Others
  # ######################   
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 3
    political_left    = 4
    free_market       = 7 
    freedom           = 5 
    professional_army = 4 
    defense_lobby     = 4 
    interventionism   = 3 
 } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
 
  # ###################### 
   headofstate            = {  type = 9 id = 285179  } # Vidit I
   headofgovernment       = {  type = 9 id = 285166  } # Turhan Përmeti
   foreignminister        = {  type = 9 id = 285158  } # Prênk Bibë Doda
   armamentminister       = {  type = 9 id = 285184  } # Gaqi Adhamidhi
   #ministerofsecurity     = {  type = 9 id = ###  } # ?
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   #chiefofstaff           = {  type = 9 id = ###  } # ?
   #chiefofarmy            = {  type = 9 id = ###  } # ?
   #chiefofnavy            = {  type = 9 id = ###  } # ?
   #chiefofair             = {  type = 9 id = ###  } # ? 
  # ###################### 
  nationalprovinces    = { 359 362 329 361 360 334 367 333 } 
  ownedprovinces       = { 359 362 361 360 } 
  controlledprovinces  = { 359 362 361 360 } 

  # ###################### 
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  techapps = { 
	#Early Infantry Division
	1010  1020 
	#Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  1170 
	#Early Construction Engineering
	5800
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Basic Construction Engineering 
	
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510 6530   
	#Torpedo Gunboat
	3010		
	#Census Tabulating Machine
	5310
	3010 3210 3110 # Naval
	8010 8020 # Naval doctrine
        27480 # Air Doctrine
	}
  # ######################    
  diplomacy = 
  { relation = { tag = ITA value = 10 } 
    relation = {   tag = SER value = -100   } 
    relation = {   tag = MTN value = -10   } 
    relation = {   tag = OTT value = 50   } 
    relation = {   tag = GRE value = -50   } 
    relation = {   tag = USA value = 10   }
    relation = {   tag = ENG value = 30   } 
    relation = {   tag = U08 value = -20   }
    relation = {   tag = U09 value = -10   } 
  

 }  
  # ######################    
  SpyInfo        = { country = "ALB" NumberOfSpies = 3 }
  # #################### 
  # Albanian OBB : 2 divisions / 4'000 men
  landunit = { #Ushtria Kombatere
    id       = { type = 27000 id = 1 }
    name     = "Ushtria Kombatere"
    location = 359
    division = 
	{ id = { type = 27000 id = 2 }
	  name         = "I Këmbësori Pjesëtim"
	  type         = bergsjaeger
	  model        = 0
  	  strength     = 20  
	  experience   = 0
   }
    division = 
	{ id = { type = 27000 id = 3 }
	  name         = "I Polici Këmbësori Pjesëtim"
	  type         = militia
	  model        = 0
  	  strength     = 20
  	  max_strength = 20
	  experience   = 0
   }	
 }

} 
 