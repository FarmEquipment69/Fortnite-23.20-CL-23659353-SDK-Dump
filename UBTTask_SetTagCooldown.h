// Class /Script/AIModule.BTTask_SetTagCooldown
// Size: 0x80
class UBTTask_SetTagCooldown : public UBTTaskNode
{
	struct FGameplayTag CooldownTag; // 0x70 (0x4)
	bool bAddToExistingDuration; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	float CooldownDuration; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

