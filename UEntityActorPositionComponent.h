// Class /Script/EntityActor.EntityActorPositionComponent
// Size: 0x88
class UEntityActorPositionComponent : public UEntityPositionComponent
{
	struct FVector ShadowVarLocation; // 0x68 (0x18)
	unsigned char padding_80[0x8]; // 0x80 (0x8)

	/* Functions */

	// Function /Script/EntityActor.EntityActorPositionComponent.OnRootComponentChanged (Underlying native function: OnRootComponentChanged 0x6a5b538)
	void OnRootComponentChanged(class USceneComponent*& InRootComponent, bool& bIsRootComponent); // (Final | Native | Private)
};

