//ÜBER DIE MISSION =============================================================
author = "Slant für Gruppe Adler";                                               //Missionsersteller (Du)
onLoadName = "Bait and Strike";                                                   //Name der Mission
onLoadMission = "Die Taliban haben einen Plan ausgeheckt...";                                                             //Beschreibung der Mission (wird im Ladebildschirm unterhalb des Ladebildes angezeigt)
loadScreen = "data\loadpic.paa";                                                //Ladebild


//ALLGEMEINE EINSTELLUNGEN =====================================================
_timeMultiplication = 1;                                                        //Zeit-Multiplikator - Eine Spiel-Stunde dauert (eine Echtzeit-Stunde * _timeMultiplication) - mögliche Werte: Zahl > 0
_civTraffic = true;                                                             //Zufällig generierter Zivilverkehr - mögliche Werte: true, false


//RESPAWN EINSTELLUNGEN=========================================================
respawnDelay = 10;                                                              //Respawnzeit, wenn Wellen-Respawn ausgeschaltet ist - 99999 für Permadeath mit Spectator

_waveRespawn = false;                                                           //Wellen-Respawn - wenn false, können alle folgenden Einstellungen vernachlässigt werden - mögliche Werte: true, false
_waveRespawnTime = 60;                                                          //Wellen-Respawnzeit - läuft nach der Respawnzeit des ersten toten Spielers los - mögliche Werte: Zahl > 0
_respawnTime = 60;                                                              //Respawnzeit, nach der ein toter Spieler der Welle hinzugefügt wird - mögliche Werte: Zahl > 0
_bluforWaveSize = 0;                                                            //BLUFOR Wellengröße - 0 == automatisch festgelegt, -1 == ausgeschaltet - mögliche Werte: Zahl >= 0
_opforWaveSize = -1;                                                            //OPFOR Wellengröße - 0 == automatisch festgelegt, -1 == ausgeschaltet - mögliche Werte: Zahl >= 0
_indepWaveSize = -1;                                                            //INDEPENDENT Wellengröße - 0 == automatisch festgelegt, -1 == ausgeschaltet - mögliche Werte: Zahl >= 0


//AI CACHING ===================================================================
_useCaching = false;                                                            //F3 Caching - wenn ausgeschaltet, können alle anderen Caching-Einstellungen vernachlässigt werden - mögliche Werte: true, false
                                                                                //Caching bringt bessere Performance bei vielen KI-Einheiten, die nicht in direktem Kontakt mit den Spielern stehen. Einheiten werden "ausgeblendet".
                                                                                //Caching macht nur Sinn, wenn ohne Headless Client gespielt wird, da Einheiten auf dem HC nicht gecached werden können.

_cachingDebug = 0;                                                              //Caching Debug Mode - mögliche Werte: 0,1 (0 - off, 1 - on)

_cachingRange = 1200;                                                           //Abstand zu Spielereinheiten, nach der KI-Einheiten gecached werden können - mögliche Werte: Zahl > 0
                                                                                //Achtung: Gecachte Einheiten sind für die Spieler nicht sichtbar! chachingRange muss also größer als die übliche Sichtweite sein, aber klein genug für gute Performance.
                                                                                // --> In städtischen Missionen kann der Wert kleiner sein / In Missionen in offenem Gelände muss der Wert größer sein.

_cachingAggressiveness = 2;                                                     //Welche Einheiten gecached werden:
                                                                                // 1 - nur nicht-Gruppenführer und nicht-Fahrer (dies ist die richtige Einstellung für Zeus-Missionen, da auch gecachte Gruppen kontrollierbar bleiben!)
                                                                                // 2 - alle statischen Einheiten exklusive Fahrer (dies ist die richtige Einstellung für fast alle anderen Missionen)
                                                                                // 3 - alle Einheiten inklusive Fahrer und Gruppenführer

_uncacheForZeus = false;                                                        //Einheiten auch dann entcachen, wenn eine spielergesteuerte, virtuelle Zeuseinheit innerhalb der _cachingRange ist.
