#ifdef NIGHTVISION
  #define NVITEM "rhs_1PN138"
#else
  #define NVITEM ""
#endif

#ifdef LASERS
  #define LLITEM "rhs_acc_perst1ik"
#else
  #define LLITEM ""
#endif

#ifdef GUNLIGHTS
  #define LLITEM "rhs_acc_2dpZenit"
#else
  #define LLITEM
#endif

#ifdef SUPPRESSORS
  #define SUPPRESSORITEM "rhs_acc_pbs1"
#else
  #define SUPPRESSORITEM ""
#endif


class Taliban {
  class AllPlayable {
    uniform = "LOP_U_AM_Fatigue_01";
    vest = "V_BandollierB_khk";
    backpack = "";
    headgear = "LOP_H_Turban";
    primaryWeapon = "rhs_weap_akm";
    primaryWeaponAttachments[] = {"" ,LLITEM, SUPPRESSORITEM};
    handgunWeapon = "";
    binoculars = "Binocular";
    map = "ItemMap";
    compass = "ItemCompass";
    watch = "ItemWatch";
    gps = "";
    radio = "tf_fadak_1";
    nvgoggles = NVITEM;
    items[] = {};
    magazines[] = {};

    class Type {
      //Rifleman
      class I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_02";
        addItemsToUniform[] = {
          LIST_2("ACE_Cabletie"),
          LIST_8("ACE_fieldDressing"),
          LIST_4("ACE_morphine"),
          "ACE_Flashlight_KSF1"
        };
        addItemsToVest[] = {
          LIST_4("rhs_30Rnd_762x39mm"),
          "rhs_mag_rgd5"
        };
      };

      //Asst. Autorifleman
      class I_soldier_AAR_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_03";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          LIST_3("rhs_100Rnd_762x54mmR_green")
        };
      };

      //Asst. Gunner (HMG/GMG)
      class I_support_AMG_F: I_Soldier_F {

      };

      //Asst. Missile Specialist (AA)
      class I_soldier_AAA_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_04";
        backpack = "rhs_rpg_empty";
        addItemsToBackpack[] = {
          LIST_3("rhs_mag_9k38_rocket")
        };
      };

      //Asst. Missile Specialist (AT)
      class I_soldier_AAT_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_03";
        backpack = "rhs_rpg_empty";
        addItemsToBackpack[] = {
          LIST_3("RPG7_F")
        };
      };

      //Autorifleman
      class I_soldier_AR_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_03";
        primaryWeapon = "rhs_weap_pkm";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          LIST_3("rhs_100Rnd_762x54mmR_green")
        };
        addItemsToVest[] = {
          "rhs_mag_rgd5",
          "rhs_100Rnd_762x54mmR_green"
        };
      };

      //Combat Life Saver
      class I_medic_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_02";
        primaryWeapon = "rhs_weap_akms";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          LIST_5("ACE_bloodIV"),
          LIST_15("ACE_epinephrine"),
          LIST_20("ACE_morphine"),
          LIST_20("ACE_fieldDressing"),
          LIST_20("ACE_fieldDressing"),
          LIST_3("SmokeShell")
        };
      };

      //Explosive Specialist
      class I_soldier_exp_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_01";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          "IEDLandBig_Remote_Mag",
          LIST_2("IEDLandSmall_Remote_Mag")
        };
        addItemsToVest[] = {
          "ACE_Cellphone",
          LIST_4("rhs_30Rnd_762x39mm"),
          "rhs_mag_rgd5"
        };
      };

      //Grenadier
      class I_Soldier_GL_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_04";
        addPrimaryWeapon = "rhs_weap_akm_gp25";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          LIST_2("rhs_mag_rgd5"),
          LIST_2("rhs_mag_rdg2_white"),
          LIST_10("rhs_VOG25"),
          LIST_2("rhs_VG40MD_White"),
          LIST_2("rhs_VG40MD_Green"),
          LIST_2("rhs_VG40MD_Red")
        };
      };

      //Heavy Gunner
      class I_HeavyGunner_F: I_Soldier_F {

      };

      //Marksman
      class I_soldier_M_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_01";
        primaryWeapon = "rhs_weap_svdp";
        primaryWeaponAttachments[] = {"rhs_acc_pso1m21"};
        addItemsToVest[] = {
          LIST_2("rhs_mag_rgd5"),
          LIST_11("rhs_10Rnd_762x54mmR_7N1")
        };
      };

      //Missile Specialist (AA)
      class I_soldier_AA_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_02";
        secondaryWeapon = "rhs_weap_igla";
      };

      //Missile Specialist (AT)
      class I_soldier_AT_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_03";
        secondaryWeapon = "launch_RPG7_F";
      };

      //Repair Specialist
      class I_soldier_repair_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_02";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          "ToolKit",
          "ACE_wirecutter"
        };
      };

      //Rifleman (AT)
      class I_soldier_LAT_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_04";
        secondaryWeapon = "launch_RPG7_F";
      };

      //Squad Leader
      class I_Soldier_SL_F: I_Soldier_F {
        uniform = "LOP_U_AM_Fatigue_01";
        primaryWeapon = "rhs_weap_ak74m_gp25";
        backpack = "rhs_sidor";
        addItemsToBackpack[] = {
          LIST_2("rhs_mag_rdg2_white"),
          LIST_4("rhs_VG40MD_Green"),
          LIST_4("rhs_VG40MD_Red"),
          LIST_4("rhs_VG40MD_White")
        };
        addItemsToVest[] = {
          LIST_6("rhs_30Rnd_545x39_AK"),
          LIST_2("rhs_mag_rgd5")
        };
      };

      //Team Leader
      class I_Soldier_TL_F: I_Soldier_SL_F {
        addItemsToBackpack[] = {
          LIST_2("rhs_mag_rdg2_white"),
          LIST_2("rhs_VG40MD_Green"),
          LIST_2("rhs_VG40MD_Red"),
          LIST_2("rhs_VG40MD_White"),
          LIST_4("rhs_VOG25")
        };
      };
    };
  };
};
