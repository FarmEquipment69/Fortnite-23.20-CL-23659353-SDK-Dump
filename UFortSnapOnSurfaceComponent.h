// Class /Script/FortniteGame.FortSnapOnSurfaceComponent
// Size: 0x1c0
class UFortSnapOnSurfaceComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x78]; // 0xa0 (0x78) 
	enum EFortSnapOnSurfaceBehavior Behavior; // 0x118 (0x4)
	unsigned char unreflected_11c[0x4]; // 0x11c (0x4) 
	struct FVector MaxMovement; // 0x120 (0x18)
	struct FVector WorldOffset; // 0x138 (0x18)
	struct FVector LocalOffset; // 0x150 (0x18)
	class UClass* NavigationFilterClass; // 0x168 (0x8)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x170 (0x1)
	unsigned char unreflected_171[0x7]; // 0x171 (0x7) 
	struct TArray<struct TWeakObjectPtr<class AActor>> IgnoredTraceActors; // 0x178 (0x10)
	struct TWeakObjectPtr<class AActor> AttachToActor; // 0x188 (0x28)
	bool bOrientToNormal; // 0x1b0 (0x1)
	bool bRemoveCellHeightOffset; // 0x1b1 (0x1)
	bool bOnlySnapIfBelowLandscape; // 0x1b2 (0x1)
	bool bRandomizeYaw; // 0x1b3 (0x1)
	unsigned char padding_1b4[0xc]; // 0x1b4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortSnapOnSurfaceComponent.Snap_AttachTo_Internal (Underlying native function: Snap_AttachTo_Internal 0x87039bc)
	void SnapAttachToInternal(class UFortSnapOnSurfaceComponent*& AttachToComponent, struct FTransform& OldTransform, struct FTransform& NewTransform); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortSnapOnSurfaceComponent.Snap (Underlying native function: Snap 0x87039a8)
	void Snap(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSnapOnSurfaceComponent.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x8701640)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)
};

