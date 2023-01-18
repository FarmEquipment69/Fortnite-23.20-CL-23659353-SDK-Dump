// Class /Script/FortniteGame.FortPlayspaceMembershipActorComponent
// Size: 0xd0
class UFortPlayspaceMembershipActorComponent : public UGameFrameworkComponent
{
	struct FMulticastInlineDelegate OnFortPlayspaceMembershipChanged; // 0xa0 (0x10)
	unsigned char unreflected_b0[0x18]; // 0xb0 (0x18) 
	struct TWeakObjectPtr<class APlayspace> BoundPlayspace; // 0xc8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.OnRep_BoundPlayspace (Underlying native function: OnRep_BoundPlayspace 0x5d09500)
	void OnRepBoundPlayspace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspaceComponent (Underlying native function: GetBoundPlayspaceComponent 0x5d09450)
	class UPlayspaceComponent* GetBoundPlayspaceComponent(class UClass*& ComponentClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspaceByClass (Underlying native function: GetBoundPlayspaceByClass 0x5d093a0)
	class APlayspace* GetBoundPlayspaceByClass(class UClass*& PlayspaceClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.GetBoundPlayspace (Underlying native function: GetBoundPlayspace 0x5d09320)
	class APlayspace* GetBoundPlayspace(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.FindOrCreatePlayspaceMembershipActorComponentOnActor (Underlying native function: FindOrCreatePlayspaceMembershipActorComponentOnActor 0x5d09210)
	static class UFortPlayspaceMembershipActorComponent* FindOrCreatePlayspaceMembershipActorComponentOnActor(class AActor*& Owner); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayspaceMembershipActorComponent.AttemptToBindToPlayspace (Underlying native function: AttemptToBindToPlayspace 0x5d091f0)
	void AttemptToBindToPlayspace(); // (Final | Native | Protected)
};

