// ScriptStruct /Script/FortniteGame.FortCrewSlotInformation
// Size: 0x48
struct FFortCrewSlotInformation
{
	struct FText DisplayName; // 0x0 (0x18)
	struct FName SlotName; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer SlotTags; // 0x20 (0x20)
	float SlotStatContribution; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

