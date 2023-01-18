// Class /Script/FortniteGame.FortConversationTaskNode_ApplyAbility
// Size: 0x210
class UFortConversationTaskNode_ApplyAbility : public UFortConversationTaskNode_Service
{
	class UClass* GrantedAbility; // 0x1c0 (0x8)
	int Level; // 0x1c8 (0x4)
	bool bPreventUseIfAbilityAlreadyActive; // 0x1cc (0x1)
	unsigned char unreflected_1cd[0x3]; // 0x1cd (0x3) 
	struct FGameplayTagContainer ActiveAbilityGameplayTags; // 0x1d0 (0x20)
	bool bActivateImmediatelyOnGranting; // 0x1f0 (0x1)
	unsigned char unreflected_1f1[0x3]; // 0x1f1 (0x3) 
	struct FGameplayTag ServiceGameplayTag; // 0x1f4 (0x4)
	struct FString AnalyticsEventName; // 0x1f8 (0x10)
	struct FName PricingKey; // 0x208 (0x4)
	unsigned char padding_20c[0x4]; // 0x20c (0x4)
};

