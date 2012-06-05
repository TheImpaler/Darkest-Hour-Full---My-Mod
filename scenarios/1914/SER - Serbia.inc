 
 ############################## 
 # Country definition for SER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SER 
  # Resource Reserves 

  ai           = "SER_1914.ai" 
energy                 = 720
metal                  = 360
rare_materials         = 180
  oil          = 500 
  supplies        = 500 
  money         = 15 
  transports       = 100 
  capital        = 338 
  manpower        = 5 # should increase only with mobilisation decision
  diplomacy = 
  {  relation = {  tag = BUL value = -100  } 
   
   
   relation = {  tag = FRA value = 150  }
   relation = {  tag = ENG value = 90  }
   relation = {  tag = RUS value = 170  }
   relation = {  tag = MTN value = 200 guaranteed = { day = 11 month = february year = 1914 }  }  
   
   relation = 
   {  tag    = GRE value   = 100 } 

   relation = {  tag = U08 value = -10  }
   relation = { tag = OTT value = -125 } 
   relation = {  tag    = ROM     value   = 100 } 
  SpyInfo        = {  country = "SER" NumberOfSpies = 4  } 
  nationalprovinces   = {   338 330 342 329 331 340 327 337 339 354 336 335
   } 
  ownedprovinces     = {   338  330 342 329 333 328  
  340 339 327 331 334  
   } 
  controlledprovinces  = {   338 330 342 329 333 328  
   340 339 327 331 334  
   } 
  claimedprovinces = { 333 334 328 355 356 353 357 358 361 359 }
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  
	#Great War Heavy Field Artillery 
	2290 
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division
	1160  1170 

	#Naval Infantry

	#Engineers
	1830  
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600

	#Troopships
	3810
	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   freedom      = 5 
   free_market    = 5 
   professional_army = 4 
   defense_lobby   = 3 
   interventionism  = 6 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
   headofstate            = {  type = 9 id = 415093  } # Peter I
   headofgovernment       = {  type = 9 id = 415080  } # Nikola Pasic
   foreignminister        = {  type = 9 id = 415071  } # Nikola Pasic
   armamentminister       = {  type = 9 id = 415103  } # Lazar Pacu
   ministerofsecurity     = {  type = 9 id = 415114  } # Stojan Protic
   ministerofintelligence = {  type = 9 id = 415089  } # Dragutin Dimitrijevic
   chiefofstaff           = {  type = 9 id = 415054  } # Radomir Putnik
   #chiefofarmy            = {  type = 9 id = ###  	 } # Stepa Stepanovic (de facto)
   #chiefofnavy            = {  type = 9 id = ###  	 } # no navy
   chiefofair             = {  type = 9 id = 415041  } # Kosta Miletic
   
   
   
  landunit = 
  {  id    = {  type = 10200 id = 1  } 
   location = 342 # Uzice
   name   = "Uzicka armija" 
   leader = 415053 # Bozanovic
   Division = 
   {  id    = {  type = 10200 id = 2  } 
    name   = "Sumadijska divizija II poziva" 
    strength = 30 
    type   = infantry 
	model = 2
	experience = 5
    } 
    Division = 
   {  id    = {  type = 10200 id = 3  } 
    name   = "Uzicka brigada" 
    strength = 5 
    type   = infantry 
	model = 1
	experience = 0
   
    }
   Division = 
   {  id    = {  type = 10200 id = 4  } 
    name   = "Lima sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }  
   } 
 landunit = {   
 id = {  type = 10200 id = 5  } 
 name = "1. Armija" 
 location = 338 #Beograd 
 leader = 415051 # Bojovic P.
 Division = {   
 id = {  type = 10200 id = 6  } 
 name = "Vojska Srbje Generalshtaba" 
 type = hq
 strength = 30
	model = 1
	experience = 5
  } 
 Division = {   
 id = {  type = 10200 id = 7  } 
 name = "Timocka divizija I poziva" 
 type = infantry
 strength = 30
	model = 2
	experience = 2
  } 
  Division = {   
 id = {  type = 10200 id = 8  } 
 name = "Timocka divizija II poziva" 
 type = infantry 
	model = 2
 strength = 10
	experience = 0
  } 
 Division = {   
 id = {  type = 10200 id = 9  } 
 name = "Moravska divizija II poziva" 
 type = infantry 
	model = 1
 strength = 10
	experience = 0
 
 
  } 
 Division = {   
 id = {  type = 10200 id = 10  } 
 name = "Konjicka divizija" 
 type = cavalry 
 model = 3
 strength = 30
	experience = 0
 
  } 
   Division = 
   {  id    = {  type = 10200 id = 24  } 
    name   = "Branicevska sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }  
  } 
 landunit = {   
 id = {  type = 10200 id = 11  } 
 name = "2. Armija" 
 location = 340 # once the war with A-H starts should relocate to Sabac 
 leader = 415049 # Stepanovic
 Division = {   
 id = {  type = 10200 id = 12  } 
 name = "Sumadijska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 30
	experience = 0
  } 
 Division = {   
 id = {  type = 10200 id = 13  } 
 name = "Dunavska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 30
	experience = 0
  }
  Division = {   
 id = {  type = 10200 id = 14  } 
 name = "Kombinovana divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 30
	experience = 0
  
 
  }
 Division = {   
 id = {  type = 10200 id = 15  } 
 name = "Moravska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 30
	experience = 0
  
 
  }    
  } 
 landunit = {   
 id = {  type = 10200 id = 16  } 
 name = "3. Armija" 
 location = 327 # once the war with A-H starts should relocate to Bor
 leader = 415052 # Jurisic-Sturm
 Division = {   
 id = {  type = 10200 id = 17  } 
 name = "Drinska divizija I poziva" 
 type = infantry 
	model = 2
 strength = 30
	experience = 0
 
  }
 Division = {   
 id = {  type = 10200 id = 18  } 
 name = "Drinska divizija II poziva" 
 type = infantry 
	model = 1
 strength = 10
	experience = 0
 
  } 
 Division = 
   {  id    = {  type = 10200 id = 19  } 
    name   = "Obrenovacska sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }   
 Division = 
   {  id    = {  type = 10200 id = 25  } 
    name   = "Sabacka sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }   
 Division = 
   {  id    = {  type = 10200 id = 26  } 
    name   = "Loznicka sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }   
 Division = 
   {  id    = {  type = 10200 id = 27  } 
    name   = "Ljubovijska sekcija" 
    strength = 5 
    type   = infantry
	model = 1
	experience = 0
   
    }   
  } 
 landunit = {   
 id = {  type = 10200 id = 20  } 
 name = "Vardarska armija" 
 location = 331 #Stip - should not relocate from here - serves as rear guard against Bulgary
 Division = {   
 id = {  type = 10200 id = 21  } 
 name = "Vardarska sekcija" 
 type = infantry 
	model = 1
 strength = 5 #just in formation stage
	experience = 0
 
  } 
 Division = {   
 id = {  type = 10200 id = 22  } 
 name = "Kosovska sekcija" 
 type = infantry 
	model = 1
 strength = 5 #just in formation stage
	experience = 0
 
  } 
 Division = {   
 id = {  type = 10200 id = 23  } 
 name = "Ibarska sekcija" 
 type = infantry 
	model = 1
 strength = 5 #just in formation stage
	experience = 0
 
  } 
  } 
  
 
  } 
 