// Class /Script/FortniteGame.FortConversationTaskNode_DataDrivenService
// Size: 0x248
class UFortConversationTaskNode_DataDrivenService : public UFortConversationTaskNode_Service
{
	enum ERequirementMatchPolicy RequirementMatchPolicy; // 0x1c0 (0x1)
	unsigned char unreflected_1c1[0x7]; // 0x1c1 (0x7) 
	struct TArray<struct FConversationParticipantRequirement> Requirements; // 0x1c8 (0x10)
	struct TArray<struct FEffectRecipientConfig> EffectRecipientConfigs; // 0x1d8 (0x10)
	struct FGameplayTag ServiceGameplayTag; // 0x1e8 (0x4)
	unsigned char unreflected_1ec[0x4]; // 0x1ec (0x4) 
	struct FString AnalyticsEventName; // 0x1f0 (0x10)
	bool bPricingEnabled; // 0x200 (0x1)
	unsigned char unreflected_201[0x3]; // 0x201 (0x3) 
	struct FName PricingKey; // 0x204 (0x4)
	int PricingColumn; // 0x208 (0x4)
	unsigned char unreflected_20c[0x4]; // 0x20c (0x4) 
	struct FScalableFloat LimitedStockCount; // 0x210 (0x28)
	class UServiceBriefConfigCollection* ServiceBriefConfigCollection; // 0x238 (0x8)
	struct FName ServiceBriefCollectionKeyOveride; // 0x240 (0x4)
	unsigned char padding_244[0x4]; // 0x244 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortConversationTaskNode_DataDrivenService.GetServicePrice (Underlying native function: GetServicePrice 0x871a674)
	bool GetServicePrice(struct FConversationContext& Context, float& PriceOut); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

