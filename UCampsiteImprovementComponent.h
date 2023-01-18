// Class /Script/CampsiteRuntime.CampsiteImprovementComponent
// Size: 0x170
class UCampsiteImprovementComponent : public UActorComponent
{
	struct FSlateBrush MiniMapIconBrush; // 0xa0 (0xc0)
	int ImprovementOwnerSquadId; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	class UFortSimpleMiniMapIndicator* MiniMapIndicator; // 0x168 (0x8)

	/* Functions */

	// Function /Script/CampsiteRuntime.CampsiteImprovementComponent.SetImprovementOwnerSquadId (Underlying native function: SetImprovementOwnerSquadId 0x72a403c)
	void SetImprovementOwnerSquadId(int& SquadId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteImprovementComponent.RemoveIndicator (Underlying native function: RemoveIndicator 0x72a3ea8)
	void RemoveIndicator(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CampsiteRuntime.CampsiteImprovementComponent.OnRep_ImprovementOwnerSquadId (Underlying native function: OnRep_ImprovementOwnerSquadId 0x72a3d38)
	void OnRepImprovementOwnerSquadId(); // (Final | Native | Protected)

	// Function /Script/CampsiteRuntime.CampsiteImprovementComponent.CreateIndicator (Underlying native function: CreateIndicator 0x72a36d8)
	void CreateIndicator(); // (Final | Native | Protected | BlueprintCallable)
};

