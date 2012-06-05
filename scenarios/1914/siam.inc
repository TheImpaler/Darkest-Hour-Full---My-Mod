 
 ############################## 
 # Country definition for SIA # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SIA 
 ai             = "SIA_1914.ai"
  # Resource Reserves 
energy                 = 1380
metal                  = 690
rare_materials         = 345
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 1423 
  manpower        = 45 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   freedom      = 5 
   free_market    = 5 
   professional_army = 6 
   defense_lobby     = 4 
   interventionism  = 3 
   } 
 	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1  
   
  nationalprovinces   = {  1430 1429 1424 1423 1422 1427 1426 1428 1425 1431 1402 1400 1394 1405 1391  
1412 1413 1409 1404 } 
  ownedprovinces     = {  1430 1429 1424 1423 1422 1427 1426 1428 1425 1431  } 
  controlledprovinces  = {  1430 1429 1424 1423 1422 1427 1426 1428 1425 1431  } 
claimedprovinces = { 1434 1435 1433 1401 }
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
    techapps               = { 
	#Interwar Fighter  

	#Interwar Bomber 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290    
	#Great War Infantry Division  
	1010
	#Great War Cavalry Division  
	1310 
	#Early Mountain Division 
	1160  1170 1180 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Improved Construction Engineering 

	#Great War Destroyer 
	3010 3020 
	#Early Light Cruiser 
	3110 3120 3130
	#Short Range Submarine 
	3610 3620 
	#Naval Doctrines
	8010 8050  
	#Naval Infantry

	#Engineers
	1830 
	#ASW 18

	#Troopships
	3810
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
} 
  diplomacy = 
  {  relation = { tag = ENG value = 15 }
     relation = { tag = FRA value = -25 }
     relation = { tag = JAP value = 25  } 
     relation = { tag = UCH value = 40  } 
     relation = { tag = U02 value = -10  } 
     relation = { tag = U03 value = -10  } 
     relation = { tag = DEN value = 15  } 
     relation = { tag = USA value = 20 } 
   } 
  SpyInfo        = {  country = "SIA" NumberOfSpies = 2  } 
 landunit = { 
        id = { type = 23600 id = 1 } 
        name = "1st Division" 
        location = 1423 
        division = { 
            	id = { type = 23600 id = 2 } 
            	name = "1st Division" 
            	strength = 100 
            	type = infantry 
		model = 2
		experience = 10
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 3 } 
        name = "2nd Division" 
        location = 1422 
        division = { 
            id = { type = 23600 id = 4 } 
            name = "2nd Division" 
            strength = 100 
            type = infantry 
		model = 2
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 5 } 
        name = "3rd Division" 
        location = 1426 
        division = { 
            	id = { type = 23600 id = 6 } 
            	name = "3rd Division" 
            	strength = 100 
            	type = infantry 
		model = 2
		experience = 2
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 7 } 
        name = "4th Division" 
        location = 1427 
        division = { 
            id = { type = 23600 id = 8 } 
            name = "4th Division" 
            strength = 100 
            type = infantry
		model = 2 
		experience = 2
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 9 } 
        name = "5th Division" 
        location = 1428 
        division = { 
            	id = { type = 23600 id = 10 } 
            	name = "5th Division" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 11 } 
        name = "6th Division" 
        location = 1429 
        division = { 
            	id = { type = 23600 id = 12 } 
            	name = "6th Division" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 13 } 
        name = "7th Division" 
        location = 1430 
        division = { 
            	id = { type = 23600 id = 14 } 
            	name = "7th Division" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 15 } 
        name = "8th Division" 
        location = 1431 
        division = { 
            	id = { type = 23600 id = 16 } 
            	name = "8th Division" 
            	strength = 100 
            	type = infantry
		model = 2
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 17 } 
        name = "9th Division" 
        location = 1428 
        division = { 
            	id = { type = 23600 id = 18 } 
            	name = "9th Division" 
            	strength = 100 
            	type = infantry
		model = 2 
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23600 id = 19 } 
        name = "10th Division" 
        location = 1423 
        division = { 
            	id = { type = 23600 id = 20 } 
            	name = "10th Division" 
            	strength = 100 
            	type = infantry 
		model = 2
		experience = 0
        	} 
    	}
 
    navalunit = { 
        id = { type = 23600 id = 500 } 
        name = "Royal Siamese Navy" 
        location = 1423 # Bangkok
        base = 1423 # Bangkok
 
        division = { id = { type = 23600 id = 501 } name = "Maha Chakri" type = light_cruiser model = 0 } 
        division = { id = { type = 23600 id = 502 } name = "1st Flotilla" type = destroyer model = 0 } 
    	} 
  } 
 
