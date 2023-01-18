// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// Size: 0x60
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{
	struct TWeakObjectPtr<class UBehaviorTree> BehaviorTree; // 0x30 (0x28)
	unsigned char bRevertToPreviousBTOnFinish; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

