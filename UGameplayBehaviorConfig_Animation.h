// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// Size: 0x68
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{
	struct TWeakObjectPtr<class UAnimMontage> AnimMontage; // 0x30 (0x28)
	float PlayRate; // 0x58 (0x4)
	struct FName StartSectionName; // 0x5c (0x4)
	unsigned char bLoop; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

