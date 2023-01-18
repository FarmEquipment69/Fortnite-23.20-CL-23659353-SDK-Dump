// Class /Script/FortniteGame.FortGameplayAbility_AIPortal
// Size: 0xbd0
class UFortGameplayAbility_AIPortal : public UFortGameplayAbility_Action
{
	struct FVector PortalDirection; // 0xb50 (0x18)
	unsigned char unreflected_b68[0x38]; // 0xb68 (0x38) 
	float PortalLifespan; // 0xba0 (0x4)
	unsigned char unreflected_ba4[0x4]; // 0xba4 (0x4) 
	struct TArray<class ABuildingSMActor*> NoCollisionBuildings; // 0xba8 (0x10)
	float SlopeOffset; // 0xbb8 (0x4)
	bool bConsiderFences; // 0xbbc (0x1)
	bool bAdjustForCapsuleSize; // 0xbbd (0x1)
	bool bCapsuleTraceForSlope; // 0xbbe (0x1)
	unsigned char padding_bbf[0x11]; // 0xbbf (0x11)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_AIPortal.ModifyCollisions (Underlying native function: ModifyCollisions 0x81236f0)
	void ModifyCollisions(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility_AIPortal.HasPortalOutPoint (Underlying native function: HasPortalOutPoint 0x81230a8)
	bool HasPortalOutPoint(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_AIPortal.GetPortalOutPoint (Underlying native function: GetPortalOutPoint 0x8121cb8)
	struct FVector GetPortalOutPoint(); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_AIPortal.GetPortalInPoint (Underlying native function: GetPortalInPoint 0x8121c80)
	struct FVector GetPortalInPoint(); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility_AIPortal.GetPortalBuilding (Underlying native function: GetPortalBuilding 0x8121c5c)
	class ABuildingSMActor* GetPortalBuilding(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

