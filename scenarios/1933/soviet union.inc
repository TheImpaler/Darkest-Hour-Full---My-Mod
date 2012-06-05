# Ministres OK
 
 ############################## 
 # Country definition for SOV # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SOV 
   regular_id             = RUS 
   intrinsic_gov_type     = leninist 
   capital                = 572 
   # Resource Reserves 
energy                 = 12000
metal                  = 6000
rare_materials         = 3000
   oil                    = 500 
   supplies               = 0 
   money                  = 30 
   manpower               = 2772 
   dissent                = 30 # Ukrainian famine
   transports             = 300 
   escorts                = 20 
     research_mod = 0.75
   ai = "sov_1936.ai"

   
   diplomacy = 
   {  relation = 
     {  tag        = AFG 
       value      = 1 
      } 
     relation = {  tag = BRA value = -50  } 
     relation = 
     {  tag        = BUL 
       value      = 15 
      } 
     relation = {  tag = CHC value = 100  } 
     relation = {  tag = CZE value = 1  } 
     relation = {  tag = ENG value = -25  } 
     relation = 
     {  tag        = EST 
       value      = -30 
      } 
     relation = {  tag = FIN value = 1  } 
     relation = 
     {  tag        = FRA 
       value      = 1
      } 
     relation = {  tag = GRE value = 15  } 
     relation = {  tag = IRE value = 1  } 
     relation = {  tag = JAP value = -10  } 
     relation = 
     {  tag        = LAT 
       value      = -30 
      } 
     relation = 
     {  tag        = LIT 
       value      = 25 
      } 
     relation = {  tag = MON value = 150 access = yes  } 
     relation = 
     {  tag        = PER 
       value      = -20 
	    guaranteed = {  day = 30 month = december year = 1932  } 
      } 
     relation = {  tag = POL value = -50  } 
     relation = {  tag = ROM value = 1  } 
     relation = {  tag = SAU value = 1  } 
     relation = {  tag = SIK value = 125  } 
     relation = {  tag = SPR value = -10  } 
     relation = 
     {  tag        = TAN 
       value      = 200 
       access     = yes 
      } 
     relation = 
     {  tag        = TUR 
       value      = 1 
      } 
     relation = {  tag = URU value = -100  } 
     relation = 
     {  tag        = SCH 
       value      = 1 
      } 
    } 
   SpyInfo                = {  country = "SOV" NumberOfSpies = 10  } 
    
   nationalprovinces      = {  1191  1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180     1181 1182 1183 1184  
                              1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154 507 505 498 
                              1153 1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545 
                              568 615 625 564 621 588 584  500  1138 1139 583 1136 1135     1111 1110 504 1112 1102 
                              1101 1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 
                              542  686 681 543  547  538  539  537  536  534  535  706 702 704 703 709 708 710 701 696 695 694  691  692  
                              697  698 700 645  659  662 661 660 666 639 1134 665 669 658 668 637  641  640  670 667 675 674 672 
                              664 671 673 684 663  693  618  655  642  651  650  656  638  578  683  682  679  571  680  678  677  676  548  556  
                              554  569  572  570  585  574  540  541  559  561  551  557  549  553  550  552  560  566  599  595  616  611  612  619  
                              620  626  622  624  623  627  628  613  617  608  609  600  596  607  597  601  586  581  587  582  579  657  654  604  
                              580  652  630  631  634  635  636  603  602  647  646  644  643  614  633  649  653  648  1097 1098 1105 1104 1099 1103 
                              1106 1109 1108 1107 567   573  565  590  591  589  594  605  606  610  629  575  577  562  558  563  707  1185 506 
                              1100 711 712 713 1149 1141 499 593 1542 
               714 576 555 705 
         1126 1127 1128 1069 1070 1161 1170 1171 
                             } 
   ownedprovinces         = {  1191  1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180     1181 1182 1183 1184  
                              1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154 507 505 498 1153 
                              1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545 568 
                              615 625 564 621 588 584  500  1138 1139 583 1136 1135     1111 1110 504 1112 1102 1101 
                              1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 542  
                              686 681 543  547  538  539  537  536  534  535  706 702 704 703 709 708 710 701 696 695 694  691  692  697  
                              698 700 645  659  662 661 660 666 639 1134 665 669 658 668 637  641  640  670 667 675 674 672 664 
                              671 673 684 663  693  618  655  642  651  650  656  638  578  683  682  679  571  680  678  677  676  548  556  554  
                              569  572  570  585  574  540  541  559  561  551  557  549  553  550  552  560  566  599  595  616  611  612  619  620  
                              626  622  624  623  627  628  613  617  608  609  600  596  607  597  601  586  581  587  582  579  657  654  604  580  
                              652  630  631  634  635  636  603  602  647  646  644  643  614  633  649  653  648  1097 1098 1105 1104 1099 1103 1106 
                              1109 1108 1107 567   573  565  590  591  589  594  605  606  610  629  575  577  562  558  563  707  1185 506 1100 
                              711 712 713 1149 1141 499 593 
               714 576 555 705 
         1126 1127 1128 1069 1070 1161 1170 1171 
                             } 
   controlledprovinces    = {  1191  1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180    1181 1182 1183 1184  
                              1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154 507 505 498 1153 
                              1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545 568 
                              615 625 564 621 588 584  500  1138 1139 583 1136 1135     1111 1110 504 1112 1102 1101 
                              1118 502 501 1151 1130 1137 598 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 632 592 687 689 688 542  
                              686 681 543  547  538  539  537  536  534  535  706 702 704 703 709 708 710 701 696 695 694  691  692  697  
                              698 700 645  659  662 661 660 666 639 1134 665 669 658 668 637  641  640  670 667 675 674 672 664 
                              671 673 684 663  693  618  655  642  651  650  656  638  578  683  682  679  571  680  678  677  676  548  556  554  
                              569  572  570  585  574  540  541  559  561  551  557  549  553  550  552  560  566  599  595  616  611  612  619  620  
                              626  622  624  623  627  628  613  617  608  609  600  596  607  597  601  586  581  587  582  579  657  654  604  580  
                              652  630  631  634  635  636  603  602  647  646  644  643  614  633  649  653  648  1097 1098 1105 1104 1099 1103 1106 
                              1109 1108 1107 567   573  565  590  591  589  594  605  606  610  629  575  577  562  558  563  707  1185 506 1100 
                              711 712 713 1149 1141 499 593 
               714 576 555 705 
         1126 1127 1128 1069 1070 1161 1170 1171 
                             } 

	# USSR Techs 1933 
	# ################ 
	techapps               = {
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division 
	1160 1170 1180 1190 1200
	# CAVALRY 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	#Engineers
	1830 1840 1850
	#Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970
	
	# Tank 
	7600 7610 2620 2010 2630 2640 2646
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180
	
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 3130 3140 3150 
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 
	# Battlecruiser  
	3310 3320 3330 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620 3630 3640 
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	#Troopships
	3810
		
	#Early Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	#Early Bomber 
	4600 4610 4620 4630 4120 4130
	#Multirole fighter
	4300 4310 4320 4330 4340
	#ww1 strategic bomber
	4800 4810 4820
	#ww1 navalbomber
	4700 4710
	# Transports
	4290
	#SEAPLANES
    4740 4750 4760
	
	#Modern Agriculture  
	5700 5710
	#Computers & cryptografi
	5310 54010 54020 54030 5316 5326
	#manufactoring
	5810 5820
	#Construction Engineering 
	5800 5080
	#Basic Oil Refining 
	##5190
	#Medicine
	5600 5610 5620 
	#Exp. Rocket
	5560

	#Great War Hospital System 
	14000

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
	#Land Doctrines
	6570 6900

	# Naval Doctrines 
	# Theory
	8070 8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300
	# Logistics
	82500
	# Naval Interdiction
	8500 8510 8550 8560 8600 8610
	# Indirect Approach
	81300 81310 81320 81330 81340
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
}
 
inventions = { 3000027 }
   blueprints             = {   } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     freedom           = 1 
     free_market       = 1 
     professional_army = 6 
     defense_lobby     = 6 
     interventionism   = 2 
    } 
	peacetime_ic_mod       = 0.70
	wartime_ic_mod       = 0.75
   headofstate            = {  type = 9 id = 30002  } # Stalin 
   headofgovernment       = {  type = 9 id = 30016  } # Molotov 
   foreignminister        = {  type = 9 id = 30003  } 
   armamentminister       = {  type = 9 id = 30004  } 
   ministerofsecurity     = {  type = 9 id = 30005  } 
   ministerofintelligence = {  type = 9 id = 30006  } 
   chiefofstaff           = {  type = 9 id = 30098  } # Voroshilov
   chiefofarmy            = {  type = 9 id = 30094  } # Voroshilov
   chiefofnavy            = {  type = 9 id = 30009  } 
   chiefofair             = {  type = 9 id = 30010  } 
#1936



# Moscow okrug - Belov I.P.
# Leningrad okrug - Shaposhnikov B.
# Kiev okrug - Yakir
# Kharkov okrug - Dubovoi I.N.
# Belorusskij okrug - Uborevich
# Severokavkazskij - Kashirin N.D.
# Privolzhskij - Dybenko P.E.
# Uralskij - Garkavyj I.I.
# Sredneaziatskij - Velikanov M.D.
# Sibirskij - Kujbyshev N.V.
# Zakavkazskij Voennyj Okrug - Levandovsky
# Zabajkalsky voennyj okrug - Gryaznov I.K.
# Osobaya Krasnoznamennaja Dalnevostochnaja Armiya - Blukher


   landunit = 
   {  id       = {  type = 10848 id =  1 } 
     name     = "Raboche-Krest'yanskaya Krasnaya Armyia" 
     location = 572 #Moscow 
     Division = 
     {  id       = {  type = 10848 id = 2  } 
       name     = "Generalnyi Shtab RKKA" 
       strength = 30
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model    = 1	
	   } 
 } 
landunit = { 
	id = { type = 10848 id = 5 }
	name = "Voiska NKVD" 
	location = 572 # Moscow 	

	division = { 
	id = { type = 10848 id = 6 } 
		name = "1-ya Konvoynaya Divizyia NKVD" 
		strength = 70 
		type = garrison 
		model = 3
			} 
	division = { 
	id = { type = 10848 id = 7 } 
		name = "Divizyia o. n. Dzerzhinskogo" 
		strength = 75 
		type = motorized 
		model = 0 
		} 
	}

   landunit = 
   {  id       = {  type = 10848 id =  8 } 
     name     = "Leningradskyi Voennyi Okrug" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 9  } 
       name     = "Leningradskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model = 1
	   } 
 } 
   landunit = 
   {  id       = {  type = 10848 id =  12 } 
     name     = "1-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 13  } 
       name     = "16-ya Ulianovskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = engineer
	   brigade_model = 2
      }
     Division = 
     {  id       = {  type = 10848 id = 14  } 
       name     = "18-ya Yaroslavskaya Strelkovaya Divizyia" 
       strength = 35 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model = 4
      }
     Division = 
     {  id       = {  type = 10848 id = 15  } 
       name     = "20-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  16 } 
     name     = "19-i Strelkovyi Korpus" 
     location = 550 #Kingisepp 
     Division = 
     {  id       = {  type = 10848 id = 18  } 
       name     = "56-ya Moskovskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = rocket_artillery
	   brigade_model = 7
      }
 } 
	landunit = 
   {  id       = {  type = 10848 id = 19  } 
     name     = "5-i Kavaleriiski Korpus" 
     location = 566 # Pskov
      Division = 
     {  id       = {  type = 10848 id = 20  } 
       name     = "3-ya Besarabskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 21  } 
       name     = "14-ya Maykopskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }
   landunit = 
   {  id       = {  type = 10848 id =  23 } 
     name     = "33-i Strelkovyi Korpus" 
     location = 550 # Kingisepp
     Division = 
     {  id       = {  type = 10848 id = 25  } 
       name     = "158-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  26 } 
     name     = "29-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 27  } 
       name     = "54-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 28  } 
       name     = "153-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
 } 

   landunit = 
   {  id       = {  type = 10848 id = 29  } 
     name     = "Severnyi Voennyi Kommissariat" 
     location = 542 # Arkhangelsk
     Division = 
     {  id       = {  type = 10848 id =  30 } 
       name     = "10-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id =  31 } 
       name     = "88-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 32  } 
     name     = "Uralskyi Voennyi Okrug" 
     location = 1151 # Sverdlovsk
     Division = 
     {  id       = {  type = 10848 id =  34 } 
       name     = "65-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	extra = engineer
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id =  35 } 
       name     = "82-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 36  } 
       name     = "85-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 38  } 
       name     = "110-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 40  } 
       name     = "86-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 41  } 
       name     = "87-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 4
      }
	} 

   landunit = 
   {  id       = {  type = 10848 id = 42  } 
     name     = "Belorusskyi Voennyi Okrug" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 43  } 
       name     = "Belorusskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 1
	   } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 46  } 
     name     = "4-i Strelkovyi Korpus" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 47  } 
       name     = "27-ya Omskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 48  } 
       name     = "2-ya Belorusskaya Strelkovaya Divizyia" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 49  } 
       name     = "8-ya Minskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	extra = engineer
	brigade_model = 2
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 50  } 
     name     = "5-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
      Division = 
     {  id       = {  type = 10848 id = 51  } 
       name     = "4-ya Smolenskaya Strelkovaya Divizyia" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 52  } 
       name     = "37-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 53  } 
       name     = "43-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 54  } 
     name     = "11-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
      Division = 
     {  id       = {  type = 10848 id = 55  } 
       name     = "5-ya Vitebskaya Strelkovaya Divizyia" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 56  } 
       name     = "29-ya Finskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 57  } 
       name     = "64-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 58  } 
     name     = "16-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 59  } 
       name     = "33-ya Samarskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 60  } 
       name     = "48-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 61  } 
       name     = "81-ya Kaluzhskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
		landunit = 
   {  id       = {  type = 10848 id = 62  } 
     name     = "3-i Kavaleriiski Korpus" 
     location = 599 # Minsk
      Division = 
     {  id       = {  type = 10848 id = 63  } 
       name     = "7-ya Samarskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 64  } 
       name     = "11-ya Orenburgskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 65  } 
     name     = "6-i Kavaleriiski Korpus" 
     location = 609 # Korosten
      Division = 
     {  id       = {  type = 10848 id = 66  } 
       name     = "6-ya Changarskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 67  } 
     name     = "7-i Kavaleriiski Korpus" 
     location = 596 # Slutsk
      Division = 
     {  id       = {  type = 10848 id = 68  } 
       name     = "4-ya Leningradskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }
    landunit = 
   {  id       = {  type = 10848 id =  69 } 
     name     = "22-i Strelkovyi Korpus" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 70  } 
       name     = "63-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 71  } 
       name     = "67-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  72 } 
     name     = "23-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
     Division = 
     {  id       = {  type = 10848 id = 73  } 
       name     = "76-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 74  } 
       name     = "155-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  75 } 
     name     = "24-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
     Division = 
     {  id       = {  type = 10848 id = 76  } 
       name     = "150-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 77  } 
       name     = "145-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  78 } 
     name     = "28-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 79  } 
       name     = "62-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 80  } 
       name     = "66-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 81  } 
       name     = "120-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 		
	
   landunit = 
   {  id       = {  type = 10848 id = 82 } 
     name     = "Moskovskyi Voennyi Okrug" 
     location = 572 #Moscow 
     Division = 
     {  id       = {  type = 10848 id =  83 } 
       name     = "Moskovskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
		extra = anti_air
		brigade_model = 1   
	 } 
      Division = 
     {  id       = {  type = 10848 id = 86  } 
       name     = "5-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = armored_car
	   brigade_model    = 2	   
      } 
     Division = 
     {  id       = {  type = 10848 id = 87  } 
       name     = "Moskovskaya Proletarskaya Strelkovaya Divizyia" 
       strength = 35 
       type     = infantry 
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 88  } 
       name     = "126-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id =  89 } 
     name     = "2-i Territorialnyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id =  90 } 
       name     = "14-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2
		} 
      Division = 
     {  id       = {  type = 10848 id =  91 } 
       name     = "49-ya Krasnozamennaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = engineer
	   brigade_model    = 2	
		} 
     Division = 
     {  id       = {  type = 10848 id = 92  } 
       name     = "55-ya Kurskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
   
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  93 } 
     name     = "3-i Territorialnyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id =  94 } 
       name     = "6-ya Orlovskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2
		} 
     Division = 
     {  id       = {  type = 10848 id =  96 } 
       name     = "84-ya Tulskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  97 } 
     name     = "10-i Territorialnyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id =  98 } 
       name     = "17-ya Gorkovskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2	
      } 
     Division = 
     {  id       = {  type = 10848 id = 99  } 
       name     = "19-ya Voronezhskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6 
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 100  } 
     name     = "20-i Strelkovyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id = 101  } 
       name     = "68-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 102  } 
       name     = "113-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 103  } 
       name     = "142-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 104  } 
     name     = "21-i Strelkovyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id = 105  } 
       name     = "77-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 106  } 
       name     = "38-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 107  } 
     name     = "30-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
      Division = 
     {  id       = {  type = 10848 id = 108  } 
       name     = "59-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 109  } 
       name     = "39-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 110  } 
     name     = "40-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id = 111  } 
       name     = "60-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 112  } 
       name     = "42-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 113  } 
     name     = "41-i Strelkovyi Korpus" 
     location = 678 # Vladimir
     Division = 
     {  id       = {  type = 10848 id = 114  } 
       name     = "127-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 115 } 
     name     = "Privoljsyi Voennyi Okrug" 
     location = 672 # Kazan
      Division = 
     {  id       = {  type = 10848 id = 117  } 
       name     = "125-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 118  } 
       name     = "128-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 119  } 
       name     = "159-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 120  } 
       name     = "79-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 121  } 
     name     = "12-i Territorialnyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 122  } 
       name     = "1-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 123  } 
       name     = "31-ya Stalingradskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		extra = engineer
		brigade_model = 2   
      } 
     Division = 
     {  id       = {  type = 10848 id = 124  } 
       name     = "53-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 125  } 
       name     = "61-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
	} 
    landunit = 
   {  id       = {  type = 10848 id = 127  } 
     name     = "34-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 128  } 
       name     = "111-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 129  } 
       name     = "97-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 130  } 
     name     = "26-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 131  } 
       name     = "129-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 133  } 
     name     = "42-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 134  } 
       name     = "108-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 135 } 
     name     = "Kievskyi Voennyi Okrug" 
     location = 617 # Kiev 
     Division = 
     {  id       = {  type = 10848 id =  136 } 
       name     = "Kievskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 1
	 } 
      Division = 
     {  id       = {  type = 10848 id = 140  } 
       name     = "45-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = armored_car
	   brigade_model    = 2	   
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id = 141  } 
     name     = "6-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 142  } 
       name     = "2-ya Kavkazskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 143  } 
       name     = "24-ya Zheleznaya Strelkovaya Divizyia" 
       strength = 40 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 5		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 144  } 
       name     = "46-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 145  } 
     name     = "8-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 146  } 
       name     = "44-ya Kievskaya Strelkovaya Divizyia" 
       strength = 40 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 5		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 147  } 
       name     = "51-ya Perekopskaya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = engineer
	   brigade_model    = 2	
      } 
      Division = 
     {  id       = {  type = 10848 id = 148  } 
       name     = "95-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 149  } 
     name     = "15-i Strelkovyi Korpus" 
     location = 614 # Proskurov
     Division = 
     {  id       = {  type = 10848 id = 150  } 
       name     = "2-ya Turkestanskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = rocket_artillery
	   brigade_model    = 7	
		}
      Division = 
     {  id       = {  type = 10848 id = 151  } 
       name     = "99-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 3
      } 
     Division = 
     {  id       = {  type = 10848 id = 152  } 
       name     = "100-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 153  } 
     name     = "17-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 154  } 
       name     = "7-ya Chernigovskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 155  } 
       name     = "15-ya Sivashskaya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
      Division = 
     {  id       = {  type = 10848 id = 156  } 
       name     = "96-ya Strelkovaya Divizyia" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 3		
      } 
     Division = 
     {  id       = {  type = 10848 id = 157  } 
       name     = "58-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
    } 
   landunit = 
   {  id       = {  type = 10848 id = 158  } 
     name     = "1-i Kavaleriiski Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 159  } 
       name     = "1-ya Lenina Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 160  } 
       name     = "2-ya Krasnogo Znameni Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
  }
   landunit = 
   {  id       = {  type = 10848 id = 161  } 
     name     = "2-i Kavaleriiski Korpus" 
     location = 612 # Zhitomir
     Division = 
     {  id       = {  type = 10848 id = 162  } 
       name     = "5-ya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 163  } 
       name     = "9-ya Krimskaya Kavaleriiskaya Divizyia" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 164  } 
     name     = "35-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 165  } 
       name     = "159-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 166  } 
     name     = "36-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
      Division = 
     {  id       = {  type = 10848 id = 167  } 
       name     = "160-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 168  } 
       name     = "161-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 169  } 
     name     = "27-i Strelkovyi Korpus" 
     location = 614 # Proskurov
      Division = 
     {  id       = {  type = 10848 id = 170  } 
       name     = "89-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 171  } 
       name     = "101-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 172  } 
       name     = "130-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 173  } 
     name     = "37-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 174  } 
       name     = "131-ya Strelkovaya Divizyia" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 175  } 
       name     = "140-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 176  } 
       name     = "152-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 177  } 
       name     = "47-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 178 } 
     name     = "Kharkovskyi Voennyi Okrug" 
     location = 636 #Kharkov 
      Division = 
     {  id       = {  type = 10848 id = 180  } 
       name     = "75-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	   extra    = engineer
	   brigade_model    = 2	
      } 
      Division = 
     {  id       = {  type = 10848 id = 181  } 
       name     = "151-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 182  } 
     name     = "7-i Territorialnyi Korpus" 
     location = 630 # Zaporozhie
     Division = 
     {  id       = {  type = 10848 id = 183  } 
       name     = "3-ya Krimskaya Strelkovaya Divizyia" 
       strength = 25
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 184  } 
       name     = "25-ya Chapaeva Strelkovaya Divizyia" 
       strength = 35 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 185  } 
       name     = "41-ya Strelkovaya Divizyia" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 186  } 
     name     = "14-i Territorialnyi Korpus" 
     location = 636 # Kharkov
      Division = 
     {  id       = {  type = 10848 id = 187  } 
       name     = "30-ya Irkutskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 188  } 
       name     = "80-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 189  } 
       name     = "23-ya Kharkovskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 190  } 
     name     = "25-i Strelkovyi Korpus" 
     location = 636 # Kharkov
     Division = 
     {  id       = {  type = 10848 id = 191  } 
       name     = "72-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 192  } 
       name     = "132-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 193  } 
       name     = "83-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 194  } 
       name     = "141-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 195  } 
       name     = "69-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 196  } 
       name     = "156-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 197  } 
       name     = "134-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 198  } 
       name     = "139-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 199 } 
     name     = "Severokavkazskyi Voennyi Okrug" 
     location =  644 # Rostov
      Division = 
     {  id       = {  type = 10848 id =  201 } 
       name     = "10-ya Severokavkazskaya Kavaleriiskaya Divizyia" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
        Division = 
     {  id       = {  type = 10848 id = 202  } 
       name     = "28-ya Gorskaya Strelkovaya Divizyia" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
      } 
	  Division = 
     {  id       = {  type = 10848 id = 203  } 
       name     = "12-ya Kubanskaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 	 
    }
 landunit = 
   {  id       = {  type = 10848 id = 204  } 
     name     = "9-i Territorialnyi Korpus" 
     location =  691 # Krasnodar
     Division = 
     {  id       = {  type = 10848 id = 205  } 
       name     = "9-ya Krasnodarskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 206  } 
       name     = "13-ya Dagestanskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 207  } 
       name     = "22-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = engineer
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 208  } 
       name     = "74-ya Tamanskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
	}
    landunit = 
   {  id       = {  type = 10848 id = 209  } 
     name     = "38-i Strelkovyi Korpus" 
     location = 691 # Kharkov
     Division = 
     {  id       = {  type = 10848 id = 210  } 
       name     = "103-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 211  } 
       name     = "118-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 212  } 
       name     = "119-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 213  } 
       name     = "157-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 214 } 
     name     = "Zakavkazskyi Voennyi Okrug" 
     location =  709 # Tbilisi
        Division = 
     {  id       = {  type = 10848 id = 217  } 
       name     = "1-ya Gorskaya Kavkazskaya Strelkovaya Divizyia" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = engineer
	brigade_model = 2
      } 
        Division = 
     {  id       = {  type = 10848 id = 218  } 
       name     = "3-ya Gorskaya Kavkazskaya Strelkovaya Divizyia" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = artillery
	brigade_model = 4
      } 
        Division = 
     {  id       = {  type = 10848 id = 219  } 
       name     = "1-ya Gorskaya Gruzinskaya Strelkovaya Divizyia" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 220  } 
       name     = "Gorskaya Azerbaidzhanskaya Strelkovaya Divizyia" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 221  } 
       name     = "Gorskaya Armianskaya Strelkovaya Divizyia" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 222  } 
       name     = "2-ya Gruzinskaya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry
	   model    = 6
      }  
    }

   landunit = 
   {  id       = {  type = 10848 id = 223 } 
     name     = "Sredneaziatskyi Voennyi Okrug" 
     location =  1103#
     Division = 
     {  id       = {  type = 10848 id = 225  } 
       name     = "1-ya Gorskaya Turkestanskaya Strelkovaya Divizyia" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
      }	 
     Division = 
     {  id       = {  type = 10848 id = 226  } 
       name     = "3-ya Gorskaya Turkestanskaya Strelkovaya Divizyia" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
      }	 
 }

 landunit = 
   {  id       = {  type = 10848 id = 231  } 
     name     = "Sibirskyi Voennyi Okrug" 
     location =  1142 #  Novosibirsk
     Division = 
     {  id       = {  type = 10848 id = 234  } 
       name     = "73-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
     } 
     Division = 
     {  id       = {  type = 10848 id = 235  } 
       name     = "78-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
	   extra    = engineer 
	   brigade_model    = 2
     } 
     Division = 
     {  id       = {  type = 10848 id = 236  } 
       name     = "94-ya Strelkovaya Divizyia" 
       strength = 15
       type     = infantry 
	   model    = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 238  } 
       name     = "109-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 239  } 
       name     = "107-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 240  } 
       name     = "91-ya Strelkovaya Divizyia" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
    }

 landunit = 
   {  id       = {  type = 10848 id = 241  } 
     name     = "Zabaikalskyi Voennyi Okrug" 
     location =  1169 #  Chita
     Division = 
     {  id       = {  type = 10848 id = 243 } 
       name     = "36-ya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
     } 
     Division = 
     {  id       = {  type = 10848 id = 244 } 
       name     = "57-ya Uralskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	extra = rocket_artillery
	brigade_model = 7
     } 
      Division = # ZabVO
     {  id       = {  type = 10848 id = 246  } 
       name     = "15-ya Kubanskaya Kavaleriiskaya Divizyia" 
       strength = 75
       type     = cavalry
	   model    = 8
	extra = engineer
	brigade_model = 2
      } 
    }


    landunit = 
   {  id       = {  type = 10848 id = 250 } 
     name     = "Osobaya Krasnozamennaya Dalnevostochnaya Armyia" 
     location =  1190 #Khabarovsk
     Division = 
     {  id       = {  type = 10848 id = 251  } 
       name     = "Dalnevostochnyi Voennyi Okrug" 
       strength = 30
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model    = 1	
     } 
     Division = 
     {  id       = {  type = 10848 id = 252  } 
       name     = "12-ya 'SibRevKoma' Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 4
	  } 
     Division = 
     {  id       = {  type = 10848 id = 253  } 
       name     = "21-ya Permskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = engineer
	   brigade_model = 2
	  } 
     Division = 
     {  id       = {  type = 10848 id = 254  } 
       name     = "34-ya Srednevolzhskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 255  } 
       name     = "35-ya Sibirskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 256  } 
       name     = "40-ya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
      Division = 
     {  id       = {  type = 10848 id = 257  } 
       name     = "8-ya Dalnevostochnaya Kavaleriiskaya Divizyia" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
 }
    landunit = 
	{  id       = {  type = 10848 id = 258  } 
     name     = "18-i Strelkovyi Korpus" 
     location = 1176 # Blagoveschensk
      Division = 
     {  id       = {  type = 10848 id = 259  } 
       name     = "1-ya Tikhookeanskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 4
	  } 
     Division = 
     {  id       = {  type = 10848 id = 260  } 
       name     = "26-ya Zlatoustovskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 261  } 
       name     = "32-ya Saratovskaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
	} 	
    landunit = 
    {  id       = {  type = 10848 id = 262  } 
     name     = "Osobyi Kolkhoznyi Korpus" 
     location = 1191# Vladivostok
      Division = 
     {  id       = {  type = 10848 id = 263  } 
       name     = "1-ya Kolkhoznaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 264  } 
       name     = "2-ya Kolkhoznaya Strelkovaya Divizyia" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 265  } 
       name     = "3-ya Kolkhoznaya Strelkovaya Divizyia" 
       strength = 65
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 5
	  } 
      Division = 
     {  id       = {  type = 10848 id = 266  } 
       name     = "Kolkhoznaya Kavaleriiskaya Divizyia" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
	} 	


	
# Air OOB
#MVO
airunit = { 
	id = { type = 10848 id = 7000 } 
	name = "1 AviaKorpus" 
	location = 572 # Moscow 
	base = 572 # Moscow 

	division = { 
	id = { type = 10848 id = 7001 } 
		name = "403.IABR" 
		strength = 95 
		type = interceptor 
		model = 6 
			} 
	}
airunit = { 
	id = { type = 10848 id = 7003 } 
	name = "11 TBABR MVO" 
	location = 654 # Voronezh 
	base = 654 # Voronezh 
 
	division = { 
	id = { type = 10848 id = 7004 } 
		name = "11.TBABR" 
		strength = 70 
		type = strategic_bomber 
		model = 2 
			}
	}

#LVO
airunit = { 
	id = { type = 10848 id = 7005 } 
	name = "4 AviaKorpus" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 
	division = { 
	id = { type = 10848 id = 7006 } 
		name = "1.TBABR" 
		strength = 55 
		type = tactical_bomber 
		model = 4 
			}
	}
airunit = { 
	id = { type = 10848 id = 7008 } 
	name = "LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7009 } 
		name = "53.LBABR" 
		strength = 90 
		type = multi_role 
		model = 3 
			} 
	}	
airunit = { 
	id = { type = 10848 id = 7011 } 
	name = "3 ABRON LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7012 } 
		name = "3.ABRON" 
		strength = 65 
		type = transport_plane 
		model = 0 
			} 
	}	
airunit = { 
	id = { type = 10848 id = 7013 } 
	name = "200 IABR LVO" 
	location = 566 # Pskov 
	base = 566 # Pskov 

	division = { 
	id = { type = 10848 id = 7014 } 
		name = "3.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
	}
	
#BVO
airunit = { 
	id = { type = 10848 id = 7015 } 
	name = "6 AviaKorpus" 
	location = 588 # Bryansk 
	base = 588 # Bryansk 
	division = { 
	id = { type = 10848 id = 7016 } 
		name = "5.TBABR" 
		strength = 55 
		type = tactical_bomber 
		model = 4 
			}
	division = { 
	id = { type = 10848 id = 7018 } 
		name = "402.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
		}
airunit = { 
	id = { type = 10848 id = 7019 } 
	name = "40 LBABR BVO" 
	location = 590 #  Vitebsk
	base = 590 # Vitebsk	
	division = { 
	id = { type = 10848 id = 7020 } 
		name = "40.LBABR" 
		strength = 90 
		type = multi_role 
		model = 3  
			}
		}	
#KVO
airunit = { 
	id = { type = 10848 id = 7035 } 
	name = "5 IABR KVO" 
	location = 617 # Kiev
	base = 617 # Kiev
	division = { 
	id = { type = 10848 id = 7036 } 
		name = "5.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
		}

#KhVO
airunit = { 
	id = { type = 10848 id = 7047 } 
	name = "16 LBABR KhVO" 
	location = 636 # Kharkov 
	base = 636 # Kharkov	
	division = { 
	id = { type = 10848 id = 7048 } 
		name = "16.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3 
			}
		}

#ZabVO
airunit = { 
	id = { type = 10848 id = 7049 } 
	name = "5 AviaKorpus" 
	location = 1169 #  Chita
	base = 1169 # Chita	
	division = { 
	id = { type = 10848 id = 7050 } 
		name = "29.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3 
			}
		}

#SKVO
airunit = { 
	id = { type = 10848 id = 7080 } 
	name = "55 LBABR SKVO" 
	location = 644 # Rostov-na-Donu
	base = 644 # Rostov-na-Donu	
	division = { 
	id = { type = 10848 id = 7081 } 
		name = "55.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3  
			}
		}


	
	
# Naval OOB
	navalunit = { # Galler L.M.
		id = { type = 10848 id = 5100 } 
		name = "Krasnoznamenny Baltiisky Flot" 
		location = 553 
		base = 553 
		division = { 
			id = { type = 10848 id = 5101 } 
			name = "Marat" 
			type = battleship 
			model = 2 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			extra2 = naval_improved_hull_l
			brigade_model2 = 0
			extra3 = naval_fire_controll_l
			brigade_model3 = 0
			} 
		division = { 
			id = { type = 10848 id = 5102 } 
			name = "Frunze" 
			type = battleship 
			model = 2 
			strength = 10
			} 
		division = { 
			id = { type = 10848 id = 5103 } 
			name = "3 Divizyia Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5104 } 
			name = "2 Divizyia Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5105 } 
			name = "1 Divizyia Esmintsev" 
			type = destroyer 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5151 } 
			name = "1 Divizyia Podlodok" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5152 } 
			name = "2 Divizyia Podlodok" 
			type = submarine 
			model = 3 
			} 
		}  	
		
	navalunit = { # Kozhanov I.K.
		id = { type = 10848 id = 5200 } 
		name = "Chernomorskiy Flot" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5201 } 
			name = "Parizhskaya Kommuna" 
			type = battleship 
			model = 2
			} 
		division = { 
			id = { type = 10848 id = 5202 } 
			name = "Krasni Kavkaz" 
			type = heavy_cruiser 
			model = 2 
			extra1 = naval_torpedoes_l
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 10848 id = 5203 } 
			name = "Profintern" 
			type = light_cruiser 
			model = 2 
			extra1 = naval_torpedoes_l
			brigade_model1 = 3
			extra2 = naval_anti_air_l
			brigade_model2 = 0
			} 
		division = { 
			id = { type = 10848 id = 5204 } 
			name = "Komintern" 
			type = light_cruiser 
			model = 0 
			} 
		division = { 
			id = { type = 10848 id = 5205 } 
			name = "Chervonaya Ukraina" 
			type = light_cruiser 
			model = 2 
			extra1 = naval_torpedoes_l
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 10848 id = 5206 } 
			name = "6 Divizyia Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5207 } 
			name = "7 Divizya Esmintsev" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 5301 } 
			name = "3 Divizya Podlodok" 
			type = submarine 
			model = 3 
			} 
		} 
       

	navalunit = { # Dushenov K.I.
		id = { type = 10848 id = 5400 } 
		name = "Severnyi Flot" 
		location = 535 
		base = 535 
		division = { 
			id = { type = 10848 id = 5401 } 
			name = "8 Divizyia Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5402 } 
			name = "4 Divizyia Podlodok" 
			type = submarine 
			model = 1 
			} 
		} 	

	navalunit = { # Viktorov M.V.
		id = { type = 10848 id = 5500 } 
		name = "Tikhookeanskiy Flot" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 5501 } 
			name = "10. Divizion Esmintsev" 
			type = destroyer 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5502 } 
			name = "9. Divizion Esmintsev" 
			type = destroyer 
			model = 0 
			} 
		division = { 
			id = { type = 10848 id = 5551 } 
			name = "5 Divizyia Podlodok" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5553 } 
			name = "1 Divizyia Vodnyi Transport" 
			type = transport 
			model = 1 
			} 
		} 
	
	# Starting Build Queue

	# Stalin Line
	province_development = { 
		id = { type = 10848 id = 9000 } 
		location = 550 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9001 } 
		location = 566 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9002 } 
		location = 564 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9003 } 
		location = 593 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9004 } 
		location = 618 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9005 } 
		location = 592
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9006 } 
		location = 599
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9007 } 
		location = 596
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9008 } 
		location = 596
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9009 } 
		location = 597
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9010 } 
		location = 616
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9011 } 
		location = 614
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	division_development = {
		name  = "4 Divizyia Esmintsev" 
		type  = destroyer 
		model = 4 
		cost  = 0.1 
		id    = {  type = 10848 id = 8500  } 
		date  = {  year = 1936 month = december day = 5  } 
	} 
	division_development = {
		name  = "5 Divizyia Esmintsev" 
		type  = destroyer 
		model = 3 
		cost  = 0.1 
		id    = {  type = 10848 id = 8501  } 
		date  = {  year = 1934 month = november day = 18  } 
	} 
	division_development = {
		name  = "Oktyabrskaya Revolutsiya"
		type  = battleship
		model = 3
		cost  = 0.1
		id    = { type = 10848 id = 8504 }
		date  = { year = 1934 month = august day = 4 }
	extra1 = naval_anti_air_l
	brigade_model1 = 0
	extra2 = naval_improved_hull_l
	brigade_model2 = 0
	extra3 = naval_fire_controll_l
	brigade_model3 = 0
	}

 }	
