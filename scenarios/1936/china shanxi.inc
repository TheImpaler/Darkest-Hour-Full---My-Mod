 
 ############################## 
 # Country definition for CSX # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CSX 
   regular_id             = CHI 
   intrinsic_gov_type     = paternal_autocrat 
   extra_tc               = 20 
   puppet                 = CHI 
   # Resource Reserves 
energy                 = 480
metal                  = 240
rare_materials         = 120
   oil                    = 100 
   supplies               = 100 
   money                  = 50 
   capital                = 1252 # Taiyuan 
   manpower               = 173 
   dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 1 
    } 
  
   nationalprovinces      = { 1251  1254  1252 1253 1248 1249 1250 1238 1239 1257 1258 } 
   ownedprovinces         = { 1251  1254  1252 1253 1248 1249 1250 1238 1239 1257 1258 }
   controlledprovinces    = { 1251  1254  1252 1253 1248 1249 1250 1238 1239 1257 1258 }
  
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 1070 1080
#Interbellum Supply 
1910 1920 1930 1940 1950 1960 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 100 access = yes  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 200 access = yes } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHC value = -75  } 
    } 
   SpyInfo                = {  country = "CSX" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 605001  } 
   headofgovernment       = {  type = 9 id = 605002  } 
   foreignminister        = {  type = 9 id = 605003  } 
   armamentminister       = {  type = 9 id = 605004  } 
   ministerofsecurity     = {  type = 9 id = 605005  } 
   ministerofintelligence = {  type = 9 id = 605006  } 
   chiefofstaff           = {  type = 9 id = 605007  } 
   chiefofarmy            = {  type = 9 id = 605008  } 
   chiefofnavy            = {  type = 9 id = 605009  } 
   chiefofair             = {  type = 9 id = 605010  } 
   # ###### 
   # SHANXI Land 1904 OOB 
   # TYPE: 22300 
   # ###### 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "Shanxi Jingbei" 
     # ## leader = # Yan Xishan 
     id       = {  type = 22300 id = 1  } 
     Division = 
     {  id       = {  type = 22300 id = 2  } 
       name     = "1. Duli Lü" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 7  } 
       name     = "1. Qibing Shi" 
       type     = cavalry 
       strength  = 40 
       model    = 6
      } 
    } 
   landunit = 
   {  location = 1253 # Changzhi 
     name     = "34. Jun" 
     # ## leader = # Yang Aiyuan 
     id       = {  type = 22300 id = 9  } 
     Division = 
     {  id       = {  type = 22300 id = 10  } 
       name     = "66. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 12  } 
       name     = "71. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "35. Jun" 
     # ## leader = # Fu Zuoyi 
     id       = {  type = 22300 id = 13  } 
     Division = 
     {  id       = {  type = 22300 id = 14  } 
       name     = "72. Bubing Shi" 
       type     = garrison 
       strength  = 40 
       model    = 2
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "Suiyuan Jingbei" 
     id       = {  type = 22300 id = 16  } 
     Division = 
     {  id       = {  type = 22300 id = 17  } 
       name     = "Suiyuan Baoantui" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1250 # Lingqiu 
     name     = "29. Jun" 
     # ## leader = # Song Zheyuan 
     id       = {  type = 22300 id = 18  } 
     Division = 
     {  id       = {  type = 22300 id = 19  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 20  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 21  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 22  } 
       name     = "37. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 23  } 
       name     = "9. Qibing Shi" 
       type     = cavalry 
       strength  = 40 
       model    = 5 
      } 
     Division = 
     {  id       = {  type = 22300 id = 24  } 
       name     = "39. Duli Lü" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "Chahar Jingbei" 
     id       = {  type = 22300 id = 28  } 
     Division = 
     {  id       = {  type = 22300 id = 29  } 
       name     = "Chahar Baoantui" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "12. Jun" 
     # ## leader = # Sun Tongxuan 
     id       = {  type = 22300 id = 35  } 
     Division = 
     {  id       = {  type = 22300 id = 36  } 
       name     = "20. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 22300 id = 37  } 
       name     = "81. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1239 # Suiyuan
     name     = "Suiyuan Jun" 
     id       = {  type = 22300 id = 38  } 
     Division = 
     {  id       = {  type = 22300 id = 39  } 
       name     = "Suiyuan Baoantui 2" 
       type     = militia 
       strength  = 40 
       model    = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Hohhot 
     name     = "13. Jun" 
     # ## leader = 50278 # Tang Enbo 
     id       = {  type = 22000 id = 27  } 
     Division = 
     {  id    = {  type = 22000 id = 28  } 
       name  = "13. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "19. Jun" 
     # ## leader = # Li Shengda 
     id       = {  type = 22000 id = 43  } 
     Division = 
     {  id    = {  type = 22000 id = 44  } 
       name  = "19. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1254 # Handan 
     name     = "32. Jun" 
     # ## leader = 50253 # Shang Zhen 
     id       = {  type = 22000 id = 79  } 
     Division = 
     {  id    = {  type = 22000 id = 80  } 
       name  = "32. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1251 # Datong 
     name     = "33. Jun" 
     # ## leader = 50296 # Xu Yongchang 
     id       = {  type = 22000 id = 83  } 
     Division = 
     {  id    = {  type = 22000 id = 84  } 
       name  = "33. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1253 # Changzhi 
     name     = "42. Jun" 
     # ## leader = # ??? 
     id       = {  type = 22000 id = 103  } 
     Division = 
     {  id    = {  type = 22000 id = 104  } 
       name  = "42. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "63. Jun" 
     # ## leader = # Feng Zhanhai 
     id       = {  type = 22000 id = 136  } 
     Division = 
     {  id    = {  type = 22000 id = 137  } 
       name  = "63. Jun" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "Dongbei Qibing Jun" 
     # ## leader = 50091 # He Zhuguo 
     id       = {  type = 22000 id = 145  } 
     Division = 
     {  id    = {  type = 22000 id = 146  } 
       name  = "Dongbei Qibing Jun" 
       type  = cavalry 
	   strength  = 40 
       model = 6 
      } 
    } 
   landunit = 
   {  location = 1251 # Datong
     name     = "Ji-Cai-Sui-Jing Gongshu" 
     # ## leader = # 
     id       = {  type = 22000 id = 205  } 
     Division = 
     {  id    = {  type = 22000 id = 206  } 
       name  = "Ji-Cai-Sui-Jing Gongshu" 
       type     = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
   landunit = 
   {  location = 1252 # Taiyuan 
     name     = "Shanxi Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 266  } 
     Division = 
     {  id    = {  type = 22000 id = 267  } 
       name  = "Shanxi Baoantui" 
       type  = militia 
	   strength  = 40 
       model = 3 
      } 
    } 
  } 
 