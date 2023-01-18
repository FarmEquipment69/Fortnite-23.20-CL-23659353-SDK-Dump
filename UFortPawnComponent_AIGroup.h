// Class /Script/FortniteAI.FortPawnComponent_AIGroup
// Size: 0xa8
class UFortPawnComponent_AIGroup : public UFortPawnComponent
{
	bool bCanBeGroupLeader; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	int GroupId; // 0xa4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortPawnComponent_AIGroup.OnGroupMemberDied (Underlying native function: OnGroupMemberDied 0xa35b900)
	void OnGroupMemberDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

