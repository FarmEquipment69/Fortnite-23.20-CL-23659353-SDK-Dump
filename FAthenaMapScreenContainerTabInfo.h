// ScriptStruct /Script/FortniteUI.AthenaMapScreenContainerTabInfo
// Size: 0x50
struct FAthenaMapScreenContainerTabInfo
{
	struct FText TabTitle; // 0x0 (0x18)
	struct TWeakObjectPtr<class UObject> TabIcon; // 0x18 (0x28)
	int Order; // 0x40 (0x4)
	bool bDefaultFrontendActiveTab; // 0x44 (0x1)
	bool bDefaultInGameActiveTab; // 0x45 (0x1)
	bool bShowPlayerProfile; // 0x46 (0x1)
	unsigned char unreflected_47[0x1]; // 0x47 (0x1) 
	struct FName TabId; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

