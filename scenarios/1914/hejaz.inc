 
 ############################## 
 # Country definition for U50 # 
 ############################## 
  
 country = 
 {   tag          = U50 
  manpower        = 5 
  #puppet                 = OTT
  # Resource Reserves 
energy                 = 180
metal                  = 90
rare_materials         = 45
  oil          = 200 
  supplies        = 200 
  money         = 10 
  capital        = 1048 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3
   political_left  = 4 
   defense_lobby     = 4 
   free_market    = 6 
   freedom      = 5 
   professional_army = 4
   interventionism  = 4 
    } 
	peacetime_ic_mod       = 1 
    wartime_ic_mod       = 1	
	
  nationalprovinces   = {   1048 1049 
1045 1047 1040 1044 1046 1039 1043 1038  
#Rest of Arabia

#Mashreq arabs
1041 1034 1035 1037 1028 1032 1031 1030 1033 1036 1027 1029 
#Iraq
1015 1014  1017 1021 1018 1016 1019 1020 1013 1023 1011 1012 1008 1009 1010 1026 1172 1004 1005 1007 1006 
#Syria and Palestine
1024 1022 1025
#Jordan
1089
#Arabs in Persia
 } 
  ownedprovinces     = {   1048 1049   } 
  controlledprovinces  = {   1048 1049   } 
  claimedprovinces = { 1050 1053 }
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
  {  
relation = { tag = OTT value = -15 }
relation = { tag = SAU value = -120 }
relation = { tag = ENG value = 125 }
relation = { tag = YEM value = -25 }
relation = { tag = FRA value = 15  }  
relation = { tag = ITA value = 15  } 
relation = { tag = OMN value = 100 } 
relation = { tag = PER value = -25 }  
relation = { tag = GRE value = 15  } 
relation = { tag = U02 value = 50  } 
relation = { tag = U08 value = 15  }
relation = { tag = U09 value = 15  }  
relation = { tag = U53 value = 25  } 
relation = { tag = U91 value = 25  } 
relation = { tag = ETH value = 25  } 
#relation = { tag = SOM value = 35  } 
    } 
  SpyInfo        = {   country = "U50" NumberOfSpies = 3   } 


   } 