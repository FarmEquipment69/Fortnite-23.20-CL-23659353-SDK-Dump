// Class /Script/FortniteGame.FortConditionalResourceItemDefinition
// Size: 0x518
class UFortConditionalResourceItemDefinition : public UFortPersistentResourceItemDefinition
{
	enum EFortConditionalResourceItemTest Condition; // 0x4c0 (0x1)
	unsigned char unreflected_4c1[0x7]; // 0x4c1 (0x7) 
	struct TWeakObjectPtr<class UFortAccountItemDefinition> PassedConditionItem; // 0x4c8 (0x28)
	struct TWeakObjectPtr<class UFortAccountItemDefinition> FailedConditionItem; // 0x4f0 (0x28)
};

