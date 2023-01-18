// ScriptStruct /Script/FortniteGame.FortVerbMessage_Healing
// Size: 0xa0
struct FFortVerbMessage_Healing : FVerbMessage
{
	struct FSubjectTagsPair HealingType; // 0x68 (0x28)
	bool bHealedToFull; // 0x90 (0x1)
	unsigned char unreflected_91[0x3]; // 0x91 (0x3) 
	float AmountHealedToHealth; // 0x94 (0x4)
	float HealthOverHealingAmount; // 0x98 (0x4)
	float PercentHealed; // 0x9c (0x4)
};

