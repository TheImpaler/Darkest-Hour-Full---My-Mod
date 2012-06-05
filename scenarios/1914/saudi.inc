 
 ############################## 
 # Country definition for SAU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {   tag          = SAU
ai             = "SAU_1914.ai" 
name = SAU14
  # Resource Reserves 
energy                 = 300
metal                  = 150
rare_materials         = 75
  oil          = 500 
  supplies        = 500 
  money         = 10 
  transports       = 100 
  capital        = 1045
  flag_ext = _14 
  manpower        = 24 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   freedom      = 3 
   free_market    = 3 
   professional_army = 2 
   defense_lobby     = 5 
   interventionism  = 4 
    } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1	
	
  nationalprovinces   = {   1040 1047 1049 1046 1045 1048 1044 1039 1043 1038 1024 } 
  ownedprovinces     = {   1040 1047 1045 } 
  controlledprovinces  = {   1040 1047 1045 } 
  claimedprovinces = { 1041 
#Mashreq arabs
1034 1035 1037 1028 1032 1031 1030 1033 1036 1027 1029 
#Iraq
1015 1014  1017 1021 1018 1016 1019 1020 1013 1023 1011 1012 1008 1009 1010 1026 1172 1004 1005 1007 1006 
#Syria and Palestine
1024 1022 1025
#Jordan
1089
#Arabs in Persia
}
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
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
  diplomacy = 
  {   relation = {   tag = AFG value = 50 } 
   relation = {   tag = AST value = 50   } 
   relation = {   tag = ENG value = 75  } 
   relation = {   tag = FRA value = 15   }  
   relation = {   tag = OMN value = 100  } 
   relation = {   tag = PER value = -75  }  
   relation = {   tag = YEM value = 50   } 
   relation = {   tag = GRE value = 15   } 
   relation = {   tag = U02 value = 75   } 
   relation = {   tag = U08 value = -50  }
   relation = {   tag = U09 value = -25  }  
   relation = {   tag = OTT value = -150 } 
   relation = {   tag = U53 value = 25   } 
   relation = {   tag = U91 value = 25   } 
    } 
  SpyInfo        = {   country = "SAU" NumberOfSpies = 3   } 

landunit = { 
        id = { type = 22600 id = 1 } 
        name = "Sharifian Army" 
        location = 1045 
        division = { 
            	id = { type = 22600 id = 2 } 
            	name = "Ikhwan infantry" 
            	strength = 15 
            	type = infantry
		experience = 5
				model = 1
        	} 
        division = { 
            	id = { type = 22600 id = 3 } 
            	name = "Local tribes" 
            	strength = 15 
            	type = militia
				model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 22600 id = 4 } 
            	name = "Ikhwan" 
            	strength = 10 
            	type = cavalry
		experience = 20
				model = 0
        	} 
        division = { 
            	id = { type = 22600 id = 5 } 
            	name = "Ikhwan" 
            	strength = 10 
            	type = cavalry
		experience = 10
				model = 0
        	} 
    	} 
   } 
 