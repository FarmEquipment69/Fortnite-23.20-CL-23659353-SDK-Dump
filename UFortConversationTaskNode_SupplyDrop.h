// Class /Script/FortniteGame.FortConversationTaskNode_SupplyDrop
// Size: 0x320
class UFortConversationTaskNode_SupplyDrop : public UFortConversationTaskNode_Service
{
	struct TWeakObjectPtr<class UFortSupplyDropInfo> SupplyDropInfo; // 0x1c0 (0x28)
	struct FScalableFloat SupplyDropCount; // 0x1e8 (0x28)
	struct FScalableFloat ProcessPendingSupplyDropInterval; // 0x210 (0x28)
	struct FScalableFloat GuaranteedCloseRangeSupplyDropCount; // 0x238 (0x28)
	struct FGameplayTag ServiceUsedTag; // 0x260 (0x4)
	unsigned char unreflected_264[0x4]; // 0x264 (0x4) 
	struct FScalableFloat GuaranteedCloseRangeRadiusAroundNPC; // 0x268 (0x28)
	enum ESupplyDropSpawnLocationPolicy SupplyDropLocationPolicy; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FScalableFloat RadiusAroundNPC; // 0x298 (0x28)
	struct FScalableFloat SpawnInPreviousSafeAreaChanceZeroToOne; // 0x2c0 (0x28)
	bool bLimitedStock; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x7]; // 0x2e9 (0x7) 
	struct FScalableFloat LimitedStockCount; // 0x2f0 (0x28)
	struct FGameplayTag CustomFeedMessageTag; // 0x318 (0x4)
	unsigned char padding_31c[0x4]; // 0x31c (0x4)
};

