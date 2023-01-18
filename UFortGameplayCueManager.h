// Class /Script/FortniteGame.FortGameplayCueManager
// Size: 0x4d8
class UFortGameplayCueManager : public UGameplayCueManager
{
	struct TArray<struct FString> BROnlyGameplayCueNotifyPaths; // 0x310 (0x10)
	unsigned char unreflected_320[0x50]; // 0x320 (0x50) 
	struct TArray<struct FName> AdditionalAlwaysLoadedCueTags; // 0x370 (0x10)
	unsigned char unreflected_380[0x10]; // 0x380 (0x10) 
	struct TSet<> PreloadedCues; // 0x390 (0x50)
	struct TSet<> AlwaysLoadedCues; // 0x3e0 (0x50)
	unsigned char unreflected_430[0x50]; // 0x430 (0x50) 
	bool bClientDelayLoadGameplayCues; // 0x480 (0x1)
	unsigned char padding_481[0x57]; // 0x481 (0x57)
};

