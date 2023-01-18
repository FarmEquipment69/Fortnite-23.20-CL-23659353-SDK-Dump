// Class /Script/AIModule.BTDecorator_TagCooldown
// Size: 0x78
class UBTDecorator_TagCooldown : public UBTDecorator
{
	struct FGameplayTag CooldownTag; // 0x68 (0x4)
	float CooldownDuration; // 0x6c (0x4)
	bool bAddToExistingDuration; // 0x70 (0x1)
	bool bActivatesCooldown; // 0x71 (0x1)
	unsigned char padding_72[0x6]; // 0x72 (0x6)
};

