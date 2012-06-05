 
 ############################## 
 # Country definition for U01 # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U01 
 
	ai = "U01_1941.ai"
   capital                = 907 
   # Resource Reserves 
  energy                 = 2000
  metal                  = 2000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 1000
  money                  = 100
  manpower               = 125
  transports             = 50
  escorts                = 10
  free                   = { ic = 25 energy = 60 metal = 30 rare_materials = 15 oil = 20 supplies = 50 money = 10 }
   
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = 150 }
    relation = { tag = SLO value = -200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = ETH value = 25 }
    relation = { tag = FIN value = 85 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 200 }
    relation = { tag = HUN value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPA value = -65 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 50 }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = { tag = NIC value = 150 }
  }

   SpyInfo                = {  country = "FRA" NumberOfSpies = 9  } 
   # Togoland 
   # Metropolitan France 
   nationalprovinces      = { 85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  54  63 105 107  104  
                              100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  43  44  47  72 73 93 
         48 95 64 91 83 88 106 96 97 76 
          98 103 92  
        102 53 46 41 56 101 
          
                             } 
   # Metropolitan France 
   ownedprovinces         = { 910  922 920 924 925 923 926 909 928 911 914 915 907 908     
                              1586 1585 1584 1583 1582 1581
         917 918 919 927 921 
         1740 1743 1744 2135  
         1016 1018 1019 1020 1021 1014 1017 1015
                             } 
   # Togoland 
   # Metropolitan France 
   controlledprovinces    = { 910  922 920 924 925 923 926 909 928 911 914 915 907 908     
                              1586 1585 1584 1583 1582 1581
         917 918 919 927 921
         1740 1743 1744 2135 
         1016 1018 1019 1020 1021 1014 1017 1015
                             }
	claimedprovinces = {
                            717 718 719 720 721 722 723 724 725 726 #Morocco 
                            727 728 729 730 731 732 733 734 735 736 737 738 739 743 #Algeria
                            740 741 742 744 745 746 747 748 749 # Tunisia
                            907 908 909 910 911 914 915 917 918 919 #French Congo and Cameroon
                            920 921 922 923 924 925 926 927 928 #Central Africa
                            942 943 944 945 946 947 #Niger
                            948 949 950 951 #Slave Coast
                            957 958 959 #Volta
                            960 961 962 #Ivory Coast
                            965 966 967 968 970 #Guinean Coast
                            971 972 973 974 975 976 977 #Malian Valleys
                            978 980 #Senegambia
                            981 982 983 #Mauretania
                            984 985 986 #Malian Desert
                            833 #Djbouti
                            1001 1002 1003 996 999 1000 #Madagascar + nearby Island
                            
                            2000  #Cayenne 
                            1752 1767  1768 #French West Indies
                            1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 #French Pacific Island
                            2135 #Saint Pierre island near Newfoundland
						}		 
		 
	# FRA 1941 techs 
	# ###################### 
	techapps = { 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	#Heavy Tanks
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-Tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	#Basic Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Motorised Inf
	1396
	# Naval Infantry
	1560 1570 1580 
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990
	
	# Agriculture 
	5700 5710 5010 5020 5030
	# Machine Tools 
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Oil Refining 
	5190 5200
	# Computers 
	5310 54010 54020 54030 5320
	# Cryptography
	5316 5326 5327 5350 5360
	# Radar
	5410 5416
	# Atomic Research 
	5470 5480
	# Medicine
	5600 5610 5620 5630 5640
	# Exp. Rocket
	5560

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Aircraft Carrier 
	3510 3520
	# Light carrier 
	12100 12110 12120
	# Submarine 
	3610 3620 3630 3640 3650 3660
	# Battle Cruiser
	3310 3320 3330 3340
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820 3830

	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# CAS
	4400 4170
	# Tactical Bombers
	4600 4610 4620 4630 4120 4130 4140
	# Multi-role fighter
	4300 4310 4320 4330 4340
	# Escort Fighters
	4050
	# Seaplanes
	4740 4750 4760 4770 4780 4790
	# Strategic Bombers
	4800 4810 4820
	# Naval Bombers
	4700 4710 4190
	# CAG
	4900 4910 4920
	# Air Transports
	4250
	
	#Great War Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6560 6030 6110 6120

	#Naval Doctrines
	# Theories
	8010 8020 8030 8040 8050 8060 8070 8080 
	# Amphibious Warfare
	82300
	# Naval Logistics
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactic (Fleet-in-Being)
	8900 8910 8920 8930 8940 8950 8960
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Carrier Tactics
	81650 81850
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 
	27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 
	} 
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 4 
     free_market       = 8 
     freedom           = 10 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 820004  } 
   headofgovernment       = {  type = 9 id = 820010  } 
   foreignminister        = {  type = 9 id = 820013  } 
   armamentminister       = {  type = 9 id = 820023  } 
   ministerofsecurity     = {  type = 9 id = 820034  } 
   ministerofintelligence = {  type = 9 id = 820046  } 
   chiefofstaff           = {  type = 9 id = 820055  } 
   chiefofarmy            = {  type = 9 id = 820058  } 
   chiefofnavy            = {  type = 9 id = 820063  } 
   chiefofair             = {  type = 9 id = 820066  } 
   # #################
   # ###FRENCH OOB####
   # #################

   landunit = 
   { id       = {  type = 13500 id = 600  } 
     name     = "Troupes de Caledonie Nouvelle" 
     location = 1586
     division = 
     { id       = {  type = 13500 id = 601  } 
       name     = "Troupes de Caledonie Nouvelle" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 602  } 
     name     = "Troupes de Aleppo" 
     location = 1021
     division = 
     { id       = {  type = 13500 id = 603  } 
       name     = "Troupes de Aleppo" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 604  } 
     name     = "Troupes de Beirut" 
     location = 1019
     division = 
     { id       = {  type = 13500 id = 605  } 
       name     = "Troupes de Beirut" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 606  } 
     name     = "Troupes de Damascus" 
     location = 1016
     division = 
     { id       = {  type = 13500 id = 607  } 
       name     = "Troupes de Damascus" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 608  } 
     name     = "Forces Fran�aises Libres" 
     location = 1016
     division = 
     { id       = {  type = 13500 id = 609  } 
       name     = "1�re Division Fran�aise Libre" 
       type     = infantry 
       model    = 9 
       strength = 65 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 6100  } 
     name     = "Forces Fran�aises Libres en Afrique" 
     location = 907
     division = 
     { id       = {  type = 13500 id = 611  } 
       name     = "Colonne Leclerc" 
       type     = motorized 
       model    = 0 
       strength = 25 
      } 
    } 
	navalunit = { 
		id = { type = 13500 id = 700 } 
		name = "Escadre de Mediterrean" 
		location = 1019 
		base = 1019 
		division = { 
			id = { type = 13500 id = 701 } 
			name = "1�re Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 702 } 
			name = "2�me Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 703 } 
			name = "3�me Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 704 } 
			name = "4�me Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 705 } 
			name = "Lorraine" 
			type = battleship 
			model = 3 
			extra1 = naval_anti_air_l
			extra2 = naval_torpedoes_l
			brigade_model2 = 4
			} 
		division = { 
			id = { type = 13500 id = 706 } 
			name = "Duguay-Trouin" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 707 } 
			name = "Suffren" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 708 } 
			name = "Duquesne" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 709 } 
			name = "Tourville" 
			type = heavy_cruiser 
			model = 3 
			extra1 = naval_torpedoes_l
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 710 } 
			name = "1�re Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 711 } 
			name = "2�me Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		} 
   airunit = 
   {  id       = {  type = 13500 id = 800  } 
     name     = "Commande A�rienne Moyen-Orient" 
     location = 1019 
     base     = 1019 
     Division = 
     {  id       = {  type = 13500 id = 801  } 
       name     = "Groupe de Chasse 'Alsace'" 
       strength = 80 
       type     = interceptor 
       model    = 6 
      }
     Division = 
     {  id       = {  type = 13500 id = 802  } 
       name     = "Groupe de Bombardement Tactique 'Lorraine'" 
       strength = 50 
       type     = tactical_bomber 
	   model = 4
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 803  } 
     name     = "Commande A�rienne Caledonie Nouvelle" 
     location = 1582 
     base     = 1582 
     Division = 
     {  id       = {  type = 13500 id = 804  } 
       name     = "Groupe de Bombardement Naval 1" 
       strength = 30 
       type     = naval_bomber 
	   model = 2
      }
    }
} 
 