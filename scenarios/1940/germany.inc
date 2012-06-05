 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
    
   ai = "ger_1940.ai"
   capital                = 163 
   manpower               = 1100 
   transports             = 450 
   escorts                = 23 
   #ground_def_eff         = 0.82 
   # Resource Reserves 
   energy                 = 9000
   metal                  = 4500
   rare_materials         = 3000
   oil                    = 5000 
   supplies               = 5000 
   money                  = 100
   belligerence           = 20
   research_mod = 0.75 
   diplomacy = 
   {  relation = {  tag = ARG value = 75  } 
     relation = {  tag = AST value = -200  }  
     relation = {  tag = BEL value = -200  } 
     relation = {  tag = BHU value = -200  } 
     relation = {  tag = BOL value = 15  } 
     relation = {  tag = BRA value = 50  } 
     relation = {  tag = BUL value = 125 } 
     relation = {  tag = CAN value = -200  } 
     relation = {  tag = CHL value = 50  } 
     relation = {  tag = COL value = -20  } 
     relation = {  tag = SLO value = 200 access = yes } 
     relation = {  tag = ENG value = -200  }  
     relation = {  tag = EST value = 10  } 
     relation = {  tag = FIN value = 80 } 
     relation = {  tag = FRA value = -200  } 
     relation = {  tag = GRE value = 15  } 
     relation = {  tag = HOL value = -200  } 
     relation = {  tag = HUN value = 150  } 
     relation = {  tag = IRE value = 15  } 
     relation = {  tag = IRQ value = 25  } 
     relation =
     {  tag        = ITA
       value      = 150
       guaranteed = { day = 25 month = october year = 1936 }
     } 
     relation = {  tag = JAP value = 75  } 
     relation = {  tag = LAT value = 10  } 
     relation = {  tag = LIT value = 10  } 
     relation = {  tag = LUX value = -200  } 
     relation = {  tag = MAN value = 20  } 
     relation = {  tag = NEP value = -200  } 
     relation = {  tag = NOR value = -200  }
     relation = {  tag = NZL value = -200  } 
     relation = {  tag = OMN value = -200  }  
     relation = {  tag = POR value = 75  } 
     relation = {  tag = ROM value = 120 } 
     relation = {  tag = SAF value = -200  } 
     relation = 
     {  tag        = SCH 
       value      = 50 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = SOV value = 65  } 
     relation =
     {  tag        = SPA
       value      = 50
       guaranteed = { day = 18 month = november year = 1936 }
     }
     relation = { tag = SWE value = 50 }
     relation = { tag = TUR value = 10 } 
     relation = {  tag = USA value = -50  } 
     relation = {  tag = YEM value = 1  } 
     relation = { tag = YUG value = 50 }
     relation = {  tag = U05 value = -200  }
     relation = { tag = URU value = 10 }
    } 
   SpyInfo                = {  country = "GER" NumberOfSpies = 7  } 
   
   nationalprovinces      = {  126  145  127  131  142  147  141  137  174  171  176  146  148  154   
         151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138 
                              134 132 178 175 179 167 164 184 104  107  105 109  
         182 155 161 185 165 166 168 133 
         144 160 180 136 139 135 129 128 130 
         216 181 261 225 224 392 389 221 149 110 
         150 140 
 # Austria 
 143 189 190 191 192 195 194 186 187 193 188 
 # Czechoslovakia
 200 206 205 197 199 207 198 201 196 202 204 203
 # Poland 
 226 230 222
                             } 
   ownedprovinces         = {  126  145  127  131  142  147  141  137  174  171  176  146  148  154  151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138 
                              134 132 178 175 179 167 164 184 133 
         182 155 161 185 165 166 168 150 143 
         144 160 180 136 139 135 129 128 130 149 140
         189 190 191 192 195 194 186 187 193 188 
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220
                             } 
   controlledprovinces    = {  126  145  127  131  142  147  141  137  174  171  176  146  148  154  151  152  153 156 169 157 163 162 158 183 159 172 170 173 177 138 
                              134 132 178 175 179 167 164 184 133 
         182 155 161 185 165 166 168 150 143 
         144 160 180 136 139 135 129 128 130 149 140 
         189 190 191 192 195 194 186 187 193 188
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 485 487 491 489 492 490 493 494 488 486 484
                             } 
claimedprovinces = { 846 847 849 851 848 850 883 884 882 886 885 948 950 955 908 909 910 919 911 928 925 933 936  # Afrika
1605 1602 1668 1667 1727 1726 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 # Pacific
1731 #Apia
227 231 252 223 # Poland
1328 # Qingdao
}
	# Germany 1940 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396 1400
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Engineers
	1830 1840 1850 1860 1870
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130
	# Airborne Infantry
	1670

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	#Medium Tank
	2070
	# Heavy Tank
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260  
	# Battlecruiser
	3310 3320 3330 3340
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Aircraft Carrier 
	3510 3520 3530
	# Light Carrier 
	12100 12110 12120 12130
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Air Transport 
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070
	# CAS
	4400 4170 4280
	# Strategic bomber
	4800 4810 4820 4220
	# Navalbomber
	4700 4710 4190
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# Interceptor
	4030 4060
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920

	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Construction Engineering 
	5800 5080 5090
	# Oil Refining
	5190 5200
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360
	# Atomic Research
	5470 5480 5490
	# Exp. Rocket
	5560
	# Agriculture 
	5700 5710 5010 5020 5030
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6900 
	#Great War Hospital System 
	14000 14010 14020 14030

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9150 9190 9200 9210 9220 9230 9240

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300 82310
	# Naval Logistics
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8570
	# Trade Interdiction Submarine
	8600 8610 8620
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210
	} 
	
inventions = { 3000027 3000028 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 7 
     defense_lobby     = 10 
     interventionism   = 10 
    }
   headofstate            = {  type = 9 id = 1   } 
   headofgovernment       = {  type = 9 id = 2   } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 70  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 132 } 
   chiefofarmy            = {  type = 9 id = 146 } 
   chiefofnavy            = {  type = 9 id = 9   } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  3 4 5 7 8 14 26 27 32 33 44 56 94 109 151 } 
   dormant_leaders        = {  292 542 545 543 545 548 546 548 549 550 551 552 553 554 555 556 
               557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576
               604 608 } 

   # ARMY HIGH COMMAND
   landunit = 
   { location = 163 
     name     = "Oberkommando des Heeres" 
     id       = {  type = 14500 id = 1  } 
     division = 
     { id       = {  type = 14500 id = 2  } 
       name     = "Oberkommando des Heeres" 
       type     = hq 
       model    = 3 
       strength = 90 
      }
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 199  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 206  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 219  } 
       name     = "78. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 224  } 
       name     = "161. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 200  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 207  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 209  } 
       name     = "SS 'Totenkopf' Division (mot.)" 
       type     = motorized 
       model    = 1 
       strength = 60 
      }
    }
   # ARMY GROUP B
   landunit = 
   { location = 145 
     name     = "Heeresgruppe B" 
     id       = {  type = 14500 id = 3  } 
     division = 
     { id       = {  type = 14500 id = 4  } 
       name     = "Heeresgruppe B" 
       type     = hq 
       model    = 3 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 221  } 
       name     = "86. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "217. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 236  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 5  } 
       name     = "526. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 75
      }
    }
   # 18th Army
   landunit = 
   { location = 147 
     name     = "XVIII. Armee" 
     id       = {  type = 14500 id = 6  } 
     division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "XVIII. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 1900  } 
       name     = "7. Flieger-Division"
       type     = paratrooper 
       model    = 0 
       strength = 70 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 1901  } 
       name     = "22. Luftlande-Infanterie-Division"
       type     = paratrooper 
       model    = 0 
       strength = 70 
      }  
     division = 
     { id       = {  type = 14500 id = 9  } 
       name     = "9. Panzer-Division" 
       type     = light_armor
       model    = 0 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
       extra = light_armor_brigade
       brigade_model = 0
      }
     division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 1902  } 
       name     = "SS 'Verfügungstruppe' Division"
       type     = motorized 
       model    = 1 
       strength = 60 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 141 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 12  }
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "1. Kavallerie-Division"
       type     = cavalry 
       model    = 11 
       strength = 80
       offensive = { year = 1940 month = june day = 8 hour = 0 } 
      } 
     division = 
     { id            = {  type = 14500 id = 13  } 
       name          = "207. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 80
       extra         = armored_car
       brigade_model = 4 
      }
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 1903  } 
       name     = "SS 'Adolf Hitler' Division"
       type     = motorized 
       model    = 1 
       strength = 60 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
       extra = light_armor_brigade
       brigade_model = 0
      }
    }
   landunit = 
   { location = 141 
     name     = "XXVI. Armeekorps" 
     id       = {  type = 14500 id = 15  }
     division = 
     { id       = {  type = 14500 id = 1904  } 
       name     = "SS 'Der Führer' Division"
       type     = motorized 
       model    = 1 
       strength = 60 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      } 
     division = 
     { id            = {  type = 14500 id = 16  } 
       name          = "254. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 80 
       extra         = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 17  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   # 6th Army
   landunit = 
   { location = 131 
     name     = "VI. Armee" 
     id       = {  type = 14500 id = 18  } 
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "VI. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      } 
     division = 
     { id       = {  type = 14500 id = 20  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "216. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 22  } 
       name     = "255. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 141 
     name     = "XVI. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 23  } 
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "3. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 32  } 
       name     = "4. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 26  } 
       name     = "20. Infanterie-Division (mot.)" 
       type     = motorized
       model    = 1 
       strength = 80
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 141 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 27  } 
     division = 
     { id       = {  type = 14500 id = 28  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 29  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "223. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 131 
     name     = "IV. Armeekorps" 
     id       = {  type = 14500 id = 31  } 
     division = 
     { id            = {  type = 14500 id = 33  } 
       name          = "7. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100
       extra         = artillery
       brigade_model = 8 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 34  } 
       name     = "18. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 131 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 36  } 
     division = 
     { id            = {  type = 14500 id = 37  } 
       name          = "30. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100
       extra         = artillery
       brigade_model = 8 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 38  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 126 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 39  } 
     division = 
     { id            = {  type = 14500 id = 40  } 
       name          = "14. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100
       extra         = artillery
       brigade_model = 8 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 41  } 
       name     = "19. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 126 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 43  } 
     division = 
     { id            = {  type = 14500 id = 44  } 
       name          = "253. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 80
       extra         = artillery
       brigade_model = 8 
      }
     division = 
     { id       = {  type = 14500 id = 45  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   # ARMY GROUP A
   landunit = 
   { location = 138 
     name     = "Heeresgruppe A" 
     id       = {  type = 14500 id = 46  } 
     division = 
     { id       = {  type = 14500 id = 47  } 
       name     = "Heeresgruppe A" 
       type     = hq 
       model    = 3 
       strength = 80 
      }
     division = 
     { id            = {  type = 14500 id = 48  } 
       name          = "4. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "10. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 211  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 202  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 217  } 
       name     = "60. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 212  } 
       name     = "162. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   # 4th Army
   landunit = 
   { location = 126 
     name     = "IV. Armee" 
     id       = {  type = 14500 id = 50  } 
     division = 
     { id       = {  type = 14500 id = 51  } 
       name     = "IV. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      } 
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 54  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 126 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 55  }
     division = 
     { id            = {  type = 14500 id = 57  } 
       name          = "12. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 58  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 131 
     name     = "V. Armeekorps" 
     id       = {  type = 14500 id = 59  }
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "267. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 129 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 61  }
     division = 
     { id            = {  type = 14500 id = 62  } 
       name          = "8. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 63  } 
       name     = "28. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 129 
     name     = "XV. Armeekorps" 
     id       = {  type = 14500 id = 64  }
     division = 
     { id       = {  type = 14500 id = 65  } 
       name     = "5. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "7. Panzer-Division" 
       type     = light_armor
       model    = 2 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "62. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   # 12th Army
   landunit = 
   { location = 129 
     name     = "XII. Armee" 
     id       = {  type = 14500 id = 67  } 
     division = 
     { id       = {  type = 14500 id = 68  } 
       name     = "XII. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      } 
     division = 
     { id            = {  type = 14500 id = 72  } 
       name          = "3. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id            = {  type = 14500 id = 69  } 
       name          = "9. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id            = {  type = 14500 id = 75  } 
       name          = "16. Infanterie-Division" 
       type          = infantry 
       model         = 10 
       strength      = 100 
       extra         = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 70  } 
       name     = "27. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 128 
     name     = "XVIII. Armeekorps" 
     id       = {  type = 14500 id = 77  } 
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "5. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 80  } 
       name     = "25. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "1. Gerbirsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   # Army Group Kleist
   landunit = 
   { location = 128 
     name     = "Panzergruppe Kleist" 
     id       = {  type = 14500 id = 82  } 
     division = 
     { id       = {  type = 14500 id = 94  } 
       name     = "2. Infanterie-Division (mot.)" 
       type     = motorized
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 85  } 
       name     = "13. Infanterie-Division (mot.)" 
       type     = motorized
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 86  } 
       name     = "29. Infanterie-Division (mot.)" 
       type     = motorized
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 128 
     name     = "XIX. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 87  } 
     division = 
     { id       = {  type = 14500 id = 88  } 
       name     = "1. Panzer-Division" 
       type     = armor
       model    = 0 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 89  } 
       name     = "2. Panzer-Division" 
       type     = armor
       model    = 0 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "10. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   landunit = 
   { location = 129
     name     = "XXXXI. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 91  } 
     division = 
     { id       = {  type = 14500 id = 92  } 
       name     = "6. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "8. Panzer-Division" 
       type     = light_armor
       model    = 2 
       strength = 80 
       offensive = { year = 1940 month = june day = 8 hour = 0 }
      }
    }
   # 16th Army
   landunit = 
   { location = 127 
     name     = "XVI. Armee" 
     id       = {  type = 14500 id = 95  } 
     division = 
     { id       = {  type = 14500 id = 96  } 
       name     = "XVI. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
      } 
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 100  } 
       name     = "33. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "52. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 102  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 104  } 
       name     = "197. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 127 
     name     = "VII. Armeekorps" 
     id       = {  type = 14500 id = 105  } 
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "36. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 107  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   landunit = 
   { location = 127 
     name     = "XIII. Armeekorps" 
     id       = {  type = 14500 id = 108  } 
     division = 
     { id       = {  type = 14500 id = 109  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   landunit = 
   { location = 127 
     name     = "XXIII. Armeekorps" 
     id       = {  type = 14500 id = 110  } 
     division = 
     { id       = {  type = 14500 id = 111  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   # ARMY GROUP C
   landunit = 
   { location = 136 
     name     = "Heeresgruppe C" 
     id       = {  type = 14500 id = 114  } 
     division = 
     { id       = {  type = 14500 id = 115  } 
       name     = "Heeresgruppe C" 
       type     = hq 
       model    = 3 
       strength = 80 
      } 
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 215  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   # 1st Army
   landunit = 
   { location = 130 
     name     = "I. Armee" 
     id       = {  type = 14500 id = 116  } 
     division = 
     { id       = {  type = 14500 id = 117  } 
       name     = "I. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
      } 
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 118  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 125  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 123  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "262. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 128  } 
       name     = "268. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 132 
     name     = "XXX. Armeekorps" 
     id       = {  type = 14500 id = 129  } 
     division = 
     { id       = {  type = 14500 id = 130  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 131  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   landunit = 
   { location = 132 
     name     = "XXXVII. Armeekorps" 
     id       = {  type = 14500 id = 132  } 
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 134  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   # 7th Army
   landunit = 
   { location = 132 
     name     = "VII. Armee" 
     id       = {  type = 14500 id = 135  } 
     division = 
     { id       = {  type = 14500 id = 136  } 
       name     = "VII. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
      } 
     division = 
     { id       = {  type = 14500 id = 137  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 142  } 
       name     = "554. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 139  } 
       name     = "555. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "556. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 140  } 
       name     = "557. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 294 
     name     = "XXXI. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 146  } 
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 80 
      }
    }
   landunit = 
   { location = 220 
     name     = "XXXI. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 148  } 
     division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 80 
      }
    }
   landunit = 
   { location = 135 
     name     = "Heeresgruppe C Reserve" 
     id       = {  type = 14500 id = 225  } 
     division = 
     { id       = {  type = 14500 id = 226  } 
       name     = "167. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 227  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 228  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 234  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   # 21st Group
   landunit = 
   { location = 487 
     name     = "Gruppe XXI" 
     id       = {  type = 14500 id = 150  } 
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   landunit = 
   { location = 485 
     name     = "Gruppe XXI" 
     id       = {  type = 14500 id = 152  } 
     division = 
     { id       = {  type = 14500 id = 153  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 483 
     name     = "Gruppe XXI" 
     id       = {  type = 14500 id = 154  } 
     division = 
     { id       = {  type = 14500 id = 155  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 494 
     name     = "Gruppe XXI" 
     id       = {  type = 14500 id = 156  } 
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "2. Gebirsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "3. Gebirsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 160  } 
       name     = "196. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 491 
     name     = "Gruppe XXI" 
     id       = {  type = 14500 id = 161  } 
     division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   # GERMAN ARMY COMMAND IN THE EAST
   landunit = 
   { location = 184 
     name     = "Oberbefehlshaber Ost" 
     id       = {  type = 14500 id = 163  } 
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "Oberbefehlshaber Ost" 
       type     = hq 
       model    = 3 
       strength = 60 
      } 
    }
   landunit = 
   { location = 184 
     name     = "Grenzabschnittkommando Nord" 
     id       = {  type = 14500 id = 165  } 
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "311. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 182 
     name     = "XXXXV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 168  } 
     division = 
     { id       = {  type = 14500 id = 169  } 
       name     = "395. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 252 
     name     = "XXXXV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 170  } 
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "399. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 232 
     name     = "Grenzabschnittkommando Mitte" 
     id       = {  type = 14500 id = 172  } 
     division = 
     { id       = {  type = 14500 id = 173  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "221. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 185 
     name     = "XXXVI. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 174  } 
     division = 
     { id       = {  type = 14500 id = 175  } 
       name     = "372. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 230 
     name     = "XXXVI. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 1740  } 
     division = 
     { id       = {  type = 14500 id = 176  } 
       name     = "393. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 229 
     name     = "XXXII. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 177  } 
     division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "209. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 228 
     name     = "XXXII. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 179  }
     division = 
     { id       = {  type = 14500 id = 180  } 
       name     = "213. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      } 
     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "379. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 246 
     name     = "XXXII. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 182  } 
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "228. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 184  } 
       name     = "386. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 243 
     name     = "XXXIV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 185  } 
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "231. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 187  } 
       name     = "239. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 235 
     name     = "XXXIV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 188  } 
     division = 
     { id       = {  type = 14500 id = 189  } 
       name     = "351. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 237 
     name     = "XXXIV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 190  } 
     division = 
     { id       = {  type = 14500 id = 191  } 
       name     = "365. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 236 
     name     = "XXXIV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 192  } 
     division = 
     { id       = {  type = 14500 id = 193  } 
       name     = "358. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   landunit = 
   { location = 234 
     name     = "XXXIV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 194  } 
     division = 
     { id       = {  type = 14500 id = 195  } 
       name     = "425. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }

   ##########################################
   ## Kriegsmarine

   # WARSHIP GROUP 1
   navalunit = 
   { name     = "Kriegsschiffgruppe I" 
     id       = {  type = 14500 id = 300  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 301  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
      } 
     division = 
     { id    = {  type = 14500 id = 302  } 
       name  = "Scharnhorst" 
       type  = battlecruiser 
       model = 3
      }
     division = 
     { id    = {  type = 14500 id = 303  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 304  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
     division = 
     { id    = {  type = 14500 id = 3040  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    } 
   # WARSHIP GROUP 2
   navalunit = 
   { name     = "Kriegsschiffgruppe II" 
     id       = {  type = 14500 id = 305  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 306  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 307  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
    } 
   # WARSHIP GROUP 3
   navalunit = 
   { name     = "Kriegsschiffgruppe III" 
     id       = {  type = 14500 id = 308  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 309  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
    }
   # WARSHIP GROUP 5
   navalunit = 
   { name     = "Kriegsschiffgruppe V" 
     id       = {  type = 14500 id = 310  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 311  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 312  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
    } 
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 315  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 316  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 314  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
    } 
   navalunit = 
   { name     = "Admiral Scheer" 
     id       = {  type = 14500 id = 317  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 318  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
    }
   # NÜRNBERG SQUADRON
   navalunit = 
   { name     = "Nürnberg Geschwader" 
     id       = {  type = 14500 id = 319  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 320  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 321  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
      }
    }
   # TRANSPORT FLEET
   navalunit = 
   { name     = "I. Truppentransporter Flotte" 
     id       = {  type = 14500 id = 327  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 328  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 329  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 330  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
    }
   # DESTROYER FLEET
   navalunit = 
   { name     = "Zerstörerflottille" 
     id       = {  type = 14500 id = 324  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 325  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
     division = 
     { id    = {  type = 14500 id = 326  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 1ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "1. Unterseebootsflottille" 
     id       = {  type = 14500 id = 322  } 
     location = 2688 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 323  } 
       name  = "1. Unterseebootsflottille" 
       type  = submarine 
       model = 4
      }
    }
   # 2ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "2. Unterseebootsflottille" 
     id       = {  type = 14500 id = 350  } 
     location = 2715 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 351  } 
       name  = "2. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 3RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "3. Unterseebootsflottille" 
     id       = {  type = 14500 id = 439  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 440  } 
       name  = "3. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "5. Unterseebootsflottille" 
     id       = {  type = 14500 id = 342  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 343  } 
       name  = "5. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 6TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "6. Unterseebootsflottille" 
     id       = {  type = 14500 id = 337  } 
     location = 2284 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 338  } 
       name  = "6. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "7. Unterseebootsflottille" 
     id       = {  type = 14500 id = 348  } 
     location = 2690 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 349  } 
       name  = "7. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "21. Unterseebootsflottille" 
     id       = {  type = 14500 id = 4488  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 4456  } 
       name  = "21. Unterseebootsflottille" 
       type  = submarine 
       model = 4 
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "24. Unterseebootsflottille" 
     id       = {  type = 14500 id = 335  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 336  } 
       name  = "24. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 25TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "25. Unterseebootsflottille" 
     id       = {  type = 14500 id = 4484  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 4452  } 
       name  = "25. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "27. Unterseebootsflottille" 
     id       = {  type = 14500 id = 4486  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 4454  } 
       name  = "27. Unterseebootsflottille" 
       type  = submarine 
       model = 5 
      }
    }

   ##########################################
   ## Luftwaffe

  # AIR FORCE COMMAND
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 400 }
    name     = "Ob.d.L."
    division =
    { id         = { type = 14500 id = 401 }
      name       = "Kampfgeschwader zbV 1"
      strength   = 100
      type       = transport_plane
      model      = 1
    }
  }
  # 1ST AIR FLEET
  airunit =
  { location = 137
    base     = 137
    id       = { type = 14500 id = 402 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 403 }
      name       = "Kampfgeschwader 28"
      strength   = 100
      type       = tactical_bomber
      model      = 5
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 404 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 405 }
      name       = "KG 4 'General Wever'"
      strength   = 95
      type       = tactical_bomber
      model      = 5
    }
    division =
    { id         = { type = 14500 id = 406 }
      name       = "KG 54 'Totenkopf'"
      strength   = 75
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 407 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 408 }
      name       = "KG 30 'Adler'"
      strength   = 100
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 409 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 410 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 100
      type       = multi_role
      model      = 5
    }
    division =
    { id         = { type = 14500 id = 411 }
      name       = "JG 51 'Mölders'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 412 }
      name       = "Zerstörergeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 138
    base     = 138
    id       = { type = 14500 id = 413 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 414 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 415 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 416 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 417 }
      name       = "KG 51 'Edelweiß'"
      strength   = 90
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 418 }
      name       = "KG 55 'Greif'"
      strength   = 80
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 419 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 5
    }
    division =
    { id         = { type = 14500 id = 420 }
      name       = "Jagdgeschwader 52"
      strength   = 100
      type       = interceptor
      model      = 8
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 134
    base     = 134
    id       = { type = 14500 id = 421 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 422 }
      name       = "JG 77 'Herz As'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 423 }
      name       = "Jagdgeschwader 27"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 424 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 5
    }
    division =
    { id         = { type = 14500 id = 425 }
      name       = "Sturzkampfgeschwader 76"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { id         = { type = 14500 id = 426 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 100
      type       = cas
      model      = 1
    }
    division =
    { id         = { type = 14500 id = 427 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 428 }
      name       = "KG 53 'Legion Condor'"
      strength   = 70
      type       = tactical_bomber
      model      = 6
    }
    division =
    { id         = { type = 14500 id = 429 }
      name       = "Sturzkampfgeschwader 51"
      strength   = 100
      type       = cas
      model      = 1
    }
  }
  # 5TH AIR FLEET
  airunit =
  { location = 226
    base     = 226
    id       = { type = 14500 id = 430 }
    name     = "Luftflotte V"
    division =
    { id         = { type = 14500 id = 431 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 432 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 433 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 70
      type       = cas
      model      = 1
    }
  }
  # AIR FORCE ARMY GROUP CENTER COMMAND
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 434 }
    name     = "KoLuft HG Nord"
    division =
    { id         = { type = 14500 id = 435 }
      name       = "Jagdgeschwader 1"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 436 }
      name       = "Jagdgeschwader 21"
      strength   = 100
      type       = interceptor
      model      = 8
    }
    division =
    { id         = { type = 14500 id = 437 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 60
      type       = cas
      model      = 1
    }
  }

   #Units under construction
	division_development = {
		name  = "Bismarck" 
		type  = battleship
		model = 7
		cost  = 0.3 
		id    = {  type = 14500 id = 500  } 
		date  = {  year = 1940 month = august day = 24  } 
	}
	division_development = {
		name  = "Tirpitz" 
		type  = battleship
		model = 7
		cost  = 0.3 
		id    = {  type = 14500 id = 501  } 
		date  = {  year = 1941 month = february day = 25  } 
	}
	division_development = {
		name  = "Prinz Eugen" 
		type  = heavy_cruiser
		model = 5
		cost  = 0.2 
		id    = {  type = 14500 id = 502  } 
		date  = {  year = 1940 month = august day = 1  } 
	}
	division_development = {
		name  = "Graf Zeppelin" 
		type  = carrier
		model = 2
		cost  = 0.3 
		id    = {  type = 14500 id = 503  } 
		date  = {  year = 1940 month = october day = 1  } 
		 extra = cag
		 brigade_model = 2
	}
	division_development = {
		name  = "SS-Verfügungsdivision" 
		type  = motorized
		model = 1
		cost  = 0.1 
		id    = {  type = 14500 id = 504  } 
		date  = {  year = 1940 month = may day = 12  } 
	}
	division_development = {
		name  = "83. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 505  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
	division_development = {
		name  = "164. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 506  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
	division_development = {
		name  = "292. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 507  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
	division_development = {
		name  = "293. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 508  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
	division_development = {
		name  = "297. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 509  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
	division_development = {
		name  = "298. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 510  } 
		date  = {  year = 1940 month = june day = 1  } 
	}
} 

