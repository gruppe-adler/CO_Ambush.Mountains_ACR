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
    vest = "";
    backpack = "rhs_sidor";
    headgear = "LOP_H_Turban";
    primaryWeapon = "rhs_weap_m70b1";
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
        addItemsToUniform[] = {
          LIST_2("ACE_Cabletie"),
          LIST_8("ACE_fieldDressing"),
          LIST_4("ACE_morphine"),


        };
        addItemsToVest[] = {

        };
      };

      //Asst. Autorifleman
      class I_soldier_AAR_F: I_Soldier_F {

      };

      //Asst. Gunner (HMG/GMG)
      class I_support_AMG_F: I_Soldier_F {

      };

      //Asst. Missile Specialist (AA)
      class I_soldier_AAA_F: I_Soldier_F {

      };

      //Asst. Missile Specialist (AT)
      class I_soldier_AAT_F: I_Soldier_F {

      };

      //Autorifleman
      class I_soldier_AR_F: I_Soldier_F {

      };

      //Combat Life Saver
      class I_medic_F: I_Soldier_F {

      };

      //Explosive Specialist
      class I_soldier_exp_F: I_Soldier_F {

      };

      //Grenadier
      class I_Soldier_GL_F: I_Soldier_F {

      };

      //Heavy Gunner
      class I_HeavyGunner_F: I_Soldier_F {

      };

      //Marksman
      class I_soldier_M_F: I_Soldier_F {

      };

      //Missile Specialist (AA)
      class I_soldier_AA_F: I_Soldier_F {

      };

      //Missile Specialist (AT)
      class I_soldier_AT_F: I_Soldier_F {

      };

      //Repair Specialist
      class I_soldier_repair_F: I_Soldier_F {

      };

      //Rifleman (AT)
      class I_soldier_LAT_F: I_Soldier_F {

      };

      //Squad Leader
      class I_Soldier_SL_F: I_Soldier_F {

      };

      //Team Leader
      class I_Soldier_TL_F: I_Soldier_F {

      };
    };
  };
};
