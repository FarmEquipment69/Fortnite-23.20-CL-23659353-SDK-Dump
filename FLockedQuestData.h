// ScriptStruct /Script/FortniteGame.LockedQuestData
// Size: 0x48
struct FLockedQuestData
{
	int DisplayedWidgetTypeFlags; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText DisplayName; // 0x8 (0x18)
	class UMaterialInstance* DisplayIconOverride; // 0x20 (0x8)
	enum ELockedWidgetDisplayQuantity DisplayQuantity; // 0x28 (0x1)
	enum ELockedWidgetUnlockType UnlockType; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	int64_t UnlockNumber; // 0x30 (0x8)
	class UFortQuestItemDefinition* UnlockQuest; // 0x38 (0x8)
	int64_t UnlockUID; // 0x40 (0x8)
};

