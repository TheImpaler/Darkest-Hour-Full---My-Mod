 
############################## 
# Country definition for OTT # 
############################## 
 
##################### 
# Country main data # 
##################### 
 
country = {
	tag            = OTT 
	ai             = "OTT_1914.ai"
	# Resource Reserves 
	energy         = 2100
	metal          = 1050
	rare_materials = 525
	oil            = 500 
	supplies       = 500 
	money          = 20 
	capital        = 409
	manpower       = 125 
	transports     = 235 
	escorts        = 10 
	dissent        = 10 
	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 5 
		political_left    = 2 
		freedom           = 4 
		free_market       = 6 
		professional_army = 4 
		defense_lobby     = 6 
		interventionism   = 3 
	} 
   
   headofstate            = {  type = 9 id = 720088  } # Mohammed V
   headofgovernment       = {  type = 9 id = 720070  } # Said Halim
   foreignminister        = {  type = 9 id = 720003  } # Said Halim
   armamentminister       = {  type = 9 id = 720093  } # Mehmed Djaved
   ministerofsecurity     = {  type = 9 id = 720098  } # Mehmed Talat
   #ministerofintelligence = {  type = 9 id = ### } # Esref Kuscubas
   chiefofstaff           = {  type = 9 id = 720057 } # Ismail Enver
   #chiefofarmy            = {  type = 9 id = ###  } # Ismail Enver
   #chiefofnavy            = {  type = 9 id = ###  } # Ahmed Djemal
   #chiefofair             = {  type = 9 id = ###  } # Mithat Nuri  http://i.imgur.com/Ib9Mx.jpg
   
	peacetime_ic_mod       = 0.8 
	wartime_ic_mod         = 0.8    
   
   
	nationalprovinces = {  
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 
		1067 1071 1054 385 1062 1063 1064 1060 1061 370 384 1077 1072 1073 
		1055 1056 1016 1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 
		1037 1028 1032 1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 
		1011 1010 1024 363 1009 
	} 
	ownedprovinces = {
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 
		1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 
		1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 
		1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 
		1009 
	} 
	controlledprovinces = {  
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 
		1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 
		1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 
		1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 
		1009 
	} 
	claimedprovinces = { 
		387 388 379 1004 1005 1007 1006 791 900 1046 1044 1041 1048 1049 1050 
		786 787 790 788 789 783 784 785 780 781 782 778 779 799 800 792 795 
		796 793 801 802 798 797 794 644  
	}
	
	dormant_leaders = { 
		720117 #Souchon
	}


	# Semi-Major Tech '14 
	# Group C 1914 techs 
	# ###################### 
	techapps = {
		#Medicine
		5600
		#Engineers
		1830  
		#Basic Armoured Car 
		#Great War Heavy Field Artillery 
		2290  
		#Great War Infantry Division  
		1010  1020  
		#Great War Cavalry Division  
		13060 13070 
		#Early Mountain Division 
		1160  1170  
		#Modern Agriculture  
		5700
		#Early Construction Engineering
		5800
		#Improved Destroyer 
		3010 3020 3030
		#Basic Light Cruiser 
		3110 3120 3130
		#Improved Heavy Cruiser 
		3210 3220 3230  
		#Early Battleship 
		3410 3420 
		#Early Battlecruiser
		3310
		#Short Range Submarine 
		3610 3620
		#Great War Battlecruiser  
		3310 3320 
		#Improved Destroyer 
		3010 3020 3030
		#Early Light Cruiser 
		3110 3120 3130
		#Early Heavy Cruiser
		3210 3220 3230
		#Short Range Submarine
		3610 
		#Troopships
		3810
		#Landdoctrine ww1 - exp central  germany, turkey, austr, hun, bul, russia
		6500 6510  6530  
		#Naval Doctrines
		8010 8020 8040 8050 8060 8070 8080 8100 8500 81300 81310
		#Great War Hospital System
	} 
	
	diplomacy = {
		relation = {  tag = AFG value = 50  } 
		relation = {  tag = BUL value = 25  } 
		relation = {  tag = ENG value = -75  } 
		relation = {  tag = FRA value = -50  } 
		relation = {  tag = U08 value = 50  } 
		relation = {  tag = U09 value = 25  } 
		relation = {
			tag        = GRE 
			value      = -25 
			guaranteed = {  day = 1 month = june year = 1914  } 
		} 
		relation = {  tag = ITA value = -100  } 
		relation = {  tag = OMN value = -35  } 
		relation = {  tag = PER value = -50  } 
		relation = {  tag = SAU value = 50  } 
		relation = {  tag = U50 value = -25 access = yes } 
		relation = {  tag = YEM value = 50 access = yes  } 
		relation = {  tag = U53 value = -15  } 
	} 
	SpyInfo        = {  country = "OTT" NumberOfSpies = 7  } 
	
	######
	# OOB
	######
	
	landunit = {  
		id = {  type = 20111 id = 1  } 
		name = "I. Kolordu" 
		location = 409 # Istanbul 
		division = {  
			id = {  type = 20111 id = 2  } 
			name = "Ordu Genel Merkez" 
			type = hq
			model = 1
			strength = 50
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 5  } 
			name = "2. Piyade Tümeni" 
			type = infantry 
			model = 2
			extra = artillery 
			brigade_model = 0
			strength = 50
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 3  } 
			name = "1. Piyade Tümeni" 
			type = infantry 
			model = 3
			strength = 60 
			extra = rocket_artillery
			brigade_model = 2
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 4  } 
			name = "3. Piyade Tümeni" 
			strength = 50
			type = bergsjaeger
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 6  } 
		name = "II. Kolordu" 
		location = 385
		division = {  
			id = {  type = 20111 id = 10  } 
			name = "I. Ordu" 
			type = hq
			model = 1
			strength = 50
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 7  } 
			name = "4. Piyade Tümeni" 
			strength = 60 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 8  } 
			name = "5. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			extra = artillery 
			brigade_model = 0
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 9  } 
			name = "6. Piyade Tümeni" 
			strength = 50 
			type = bergsjaeger 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 11  } 
		name = "III. Kolordu" 
		location = 384 
		division = {  
			id = {  type = 20111 id = 12  } 
			name = "7. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 13  } 
			name = "8. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			extra = artillery 
			brigade_model = 0
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 14  } 
			name = "9. Piyade Tümeni" 
			strength = 50 
			type = bergsjaeger 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 16  } 
		name = "IV. Kolordu" 
		location = 1077 
		division = {  
			id = {  type = 20111 id = 17  } 
			name = "10. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			extra = artillery 
			brigade_model = 0
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 18  } 
			name = "11. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 19  } 
			name = "12. Piyade Tümeni" 
			strength = 50 
			type = bergsjaeger 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 21  } 
		name = "V. Kolordu" 
		location = 1075
		division = {  
			id = {  type = 20111 id = 22  } 
			name = "13. Piyade Tümeni" 
			type = infantry 
			model = 3
			strength = 50 
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 23  } 
			name = "14. Piyade Tümeni" 
			type = infantry 
			model = 2
			strength = 50 
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 24  } 
			name = "15. Piyade Tümeni" 
			type = infantry 
			model = 3
			strength = 50 
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 26  } 
		name = "VI. Kolordu" 
		location = 1021
		division = {  
			id = {  type = 20111 id = 15  } 
			name = "II. Ordu" 
			type = hq
			model = 1
			strength = 50
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 27  } 
			name = "16. Piyade Tümeni" 
			strength = 50 
			type = infantry
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 2
		} 
		division = {  
			id = {  type = 20111 id = 28  } 
			name = "24. Piyade Tümeni" 
			strength = 50 
			type = infantry
			model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 29  } 
			name = "26. Piyade Tümeni" 
			strength = 50 
			type = infantry
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 31  } 
		name = "VII. Kolordu" 
		location = 1050 # Sana 
		division = {  
			id = {  type = 20111 id = 32  } 
			name = "39. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			extra = artillery 
			brigade_model = 0
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 33  } 
			name = "40. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 34  } 
		name = "VIII. Kolordu" 
		location = 1016 # Damascus 
		division = {  
			id = {  type = 20111 id = 20  } 
			name = "IV. Ordu" 
			type = hq
			model = 1
			strength = 50
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 35  } 
			name = "23. Piyade Tümeni" 
			strength = 70 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 36  } 
			name = "25. Pi. Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 37  } 
			name = "27. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 41  } 
		name = "IX. Kolordu" 
		location = 1063 # Erzurum 
		division = {  
			id = {  type = 20111 id = 42  } 
			name = "17. Piyade Tümeni" 
			strength = 60 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 5
		} 
		division = {  
			id = {  type = 20111 id = 43  } 
			name = "28. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			extra = artillery 
			brigade_model = 0
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 44  } 
			name = "29. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 45  } 
		name = "X. Kolordu" 
		location = 1067 # Trabzon 
		division = {  
			id = {  type = 20111 id = 38  } 
			name = "III. Ordu" 
			type = hq
			model = 1
			strength = 50
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 46  } 
			name = "30. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 47  } 
			name = "31. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 48  } 
			name = "32. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 49  } 
		name = "XI. Kolordu" 
		location = 1062 
		division = {  
			id = {  type = 20111 id = 50  } 
			name = "18. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 51  } 
			name = "33. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 52  } 
			name = "34. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		}
	} 
	landunit = {  
		id = {  type = 20111 id = 53  } 
		name = "XII. Kolordu" 
		location = 1029
		division = {  
			id = {  type = 20111 id = 54  } 
			name = "35. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			extra = rocket_artillery
			brigade_model = 2
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 55  } 
			name = "36. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
	landunit = {  
		id = {  type = 20111 id = 56  } 
		name = "XIII. Kolordu" 
		location = 1034 # Bagdad 
		division = {  
			id = {  type = 20111 id = 57  } 
			name = "37. Piyade Tümeni" 
			strength = 50 
			type = infantry 
			model = 3
			experience = 0
		} 
		division = {  
			id = {  type = 20111 id = 58  } 
			name = "38. Piyade Tümeni" 
			strength = 70 
			type = infantry 
			model = 2
			experience = 0
		} 
	} 
 
   # ##### Ottoman Navy `14 ###### 
	navalunit = {
		location = 1076 
		base   = 1076 
		name   = "Türkce Deniz Filosu" 
		id    = {  type = 11700 id = 80 } 
		division = {
			id  = {  type = 11700 id = 81 } 
			name = "Barbaros Hayreddin" 
			type = battleship 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 82 } 
			name = "Turgut Reis" 
			type = battleship 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 83 } 
			name = "Mesudiye" 
			type = battleship 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 84 } 
			name = "Hamidiye" 
			type = light_cruiser 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 87 } 
			name = "Mecidiye" 
			type = light_cruiser 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 88 } 
			name = "1. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 89 } 
			name = "2. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 1
		} 
		division = {
			id  = {  type = 11700 id = 90 } 
			name = "3. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 6  } 
			name = "1. Filotilla Denizalti Kücük" 
			type = submarine 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 100  } 
			name = "Reschid Pasha Kücük Filotilla" 
			type = transport 
		} 
	} 
	
	
	airunit = {
		location = 1075 
		base   = 1075 
		name   = "I. Türkce Hava Topluluk" 
		id    = {  type = 11700 id = 33  } 
		division = {
			id      = {  type = 25635 id = 34  } 
			type     = interceptor 
			model    = 0
			strength   = 48 
			organisation = 30 
			name     = "1. Avci Ucagi Grup" 
		} 
		division = {
			id      = {  type = 25635 id = 35  } 
			type     = tactical_bomber 
			model    = 0 
			strength   = 52 
			organisation = 30 
			name     = "1. Taktik Bombardiman Ucagi Grup" 
		} 
	} 
	
} 
 