// Class /Script/FortniteGame.FortAthenaMutator_SpawningPolicyDataObjective
// Size: 0x390
class UFortAthenaMutator_SpawningPolicyDataObjective : public UFortAthenaMutator_SpawningPolicyData
{
	class UClass* ObjectiveClass; // 0xb0 (0x8)
	struct FGameplayTagContainer ObjectiveTrackingTags; // 0xb8 (0x20)
	struct FCollisionProfileName ObjectiveCollisionProfile; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FScalableFloat ObjectiveMinTraceHeight; // 0xe0 (0x28)
	struct FScalableFloat ObjectiveMaxTraceHeight; // 0x108 (0x28)
	struct FScalableFloat ObjectiveMinInitialDeliveryDelayTime; // 0x130 (0x28)
	struct FScalableFloat ObjectiveMaxInitialDeliveryDelayTime; // 0x158 (0x28)
	struct FScalableFloat ObjectiveMinTimeBetweenSpawn; // 0x180 (0x28)
	struct FScalableFloat ObjectiveMaxTimeBetweenSpawn; // 0x1a8 (0x28)
	bool bDisplayOnMapAndCompass; // 0x1d0 (0x1)
	unsigned char unreflected_1d1[0x3]; // 0x1d1 (0x3) 
	struct FGameplayTag SpecialActorTag; // 0x1d4 (0x4)
	unsigned char unreflected_1d8[0x8]; // 0x1d8 (0x8) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x1e0 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x2a0 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x2b0 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x370 (0x10)
	class AFortGameStateAthena* CachedGameState; // 0x380 (0x8)
	unsigned char padding_388[0x8]; // 0x388 (0x8)
};

