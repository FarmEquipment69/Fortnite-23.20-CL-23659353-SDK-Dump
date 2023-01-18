// ScriptStruct /Script/FortniteGame.HUDElementsToHideData
// Size: 0x30
struct FHUDElementsToHideData
{
	enum EAthenaGamePhase StartHidingGamePhase; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int StartHidingSafeZonePhase; // 0x4 (0x4)
	enum EAthenaGamePhase StopHidingGamePhase; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int StopHidingSafeZonePhase; // 0xc (0x4)
	struct FGameplayTagContainer HUDElementsToHide; // 0x10 (0x20)
};

