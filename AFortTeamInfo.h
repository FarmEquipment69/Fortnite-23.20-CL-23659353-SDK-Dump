// Class /Script/FortniteGame.FortTeamInfo
// Size: 0x3e0
class AFortTeamInfo : public AInfo
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class AController*> TeamMembers; // 0x290 (0x10)
	unsigned char Team; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FString ChatRoomId; // 0x2a8 (0x10)
	struct FTeamSpottedActorInfoArray TeamSpottedActors; // 0x2b8 (0x120)
	class AFortTeamPrivateInfo* PrivateInfo; // 0x3d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTeamInfo.OnSpottedActorDied (Underlying native function: OnSpottedActorDied 0x89d2620)
	void OnSpottedActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortTeamInfo.GetTeamLevel (Underlying native function: GetTeamLevel 0x89d1e38)
	int GetTeamLevel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTeamInfo.GetTeamExperience (Underlying native function: GetTeamExperience 0x89d1e10)
	int GetTeamExperience(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

