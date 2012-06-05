  
 ##############################  
 # Country definition for PER #  
 ##############################  

 #####################  
 # Country main data #  
 #####################  
   
 country =  
 {  tag          = PER 
	ai             = "PER_1914.ai" 
	name = PER14
  # Resource Reserves  
	energy                 = 540
	metal                  = 270
	rare_materials         = 135 
	oil          = 500  
	supplies        = 500  
	money         = 10  
	transports       = 100 
	capital        = 1085  
	manpower        = 86  
policy =  
  {  date       = {  year = 0 month = january day = 0  }  
   democratic    = 3  
   political_left  = 4  
   freedom      = 3  
   free_market    = 5  
   professional_army = 4  
   defense_lobby     = 8  
   interventionism  = 5  
    } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1
	
  nationalprovinces   = {  1083 1084 1087 1081 1080 1085 1082 1089 1091 1090 1088 1086 1092 1094 1093 1095 2172 }  
  ownedprovinces     = {  1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093 1095  }  
  controlledprovinces  = {  1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093 1095  }  
  # ROTW Minor Tech '14  
  # Group E 1914 techs  
  # ######################  
  # GW fighter  
  techapps        = {  
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
	5700 
	#Landdoctrine ww1 - rest
	6500 6510 
	#Air Doctrines - ww1 techs
  }  
  diplomacy =  
  {  relation = {  tag = AFG value = 25  }  
   relation = {  tag = DEN value = 15  }  
   relation = {  tag = ENG value = -20  }  

   relation = {  tag = SAU value = 100  }  
   relation = {  tag = RUS value = -20  }  
   relation = {  tag = SWE value = 15  }  
   relation = {  tag = OTT value = -50  }  
    }  
  SpyInfo        = {  country = "PER" NumberOfSpies = 3  }  
  landunit =  
  {  location = 1085  
   name   = "Lasgar Parsi"  
   id    = {  type = 16600 id = 1  }  
   Division =  
   {  id  = {  type = 16600 id = 2  }  
    name = "1. Dastebandi Sarbaze Piyade"  
    type = infantry  
	model = 2
    extra = artillery  
	brigade_model = 0
	experience = 2
     }  
   Division =  
   {  id  = {  type = 16600 id = 3  }  
    name = "1. Dastebandi Savareh"  
    type = cavalry  
	model = 2
	experience = 0
     }  
    }  
   }  
 