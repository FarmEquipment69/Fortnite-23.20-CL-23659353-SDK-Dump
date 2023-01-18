// Class /Script/FortniteGame.FortClassTrackerComponent
// Size: 0x198
class UFortClassTrackerComponent : public UActorComponent
{
	struct TScriptInterface<class IFortSpatialGameplayInterface> ParentSpatialInterface; // 0xa0 (0x10)
	bool bEnabled; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x7]; // 0xb1 (0x7) 
	struct FFortCreativeClassInstanceTracker ClassTracker; // 0xb8 (0xc0)
	struct FGameplayTagContainer ExcludeActorTags; // 0x178 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortClassTrackerComponent.RemoveActor (Underlying native function: RemoveActor 0x8b65d40)
	void RemoveActor(class AActor*& Actor, struct TScriptInterface<class IFortSpatialGameplayInterface>& Volume); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortClassTrackerComponent.AddActor (Underlying native function: AddActor 0x8b65d40)
	void AddActor(class AActor*& Actor, struct TScriptInterface<class IFortSpatialGameplayInterface>& Volume); // (Final | 0x00000002 | Native | Public)
};

