// Class /Script/EntityActor.EntityActorRotationComponent
// Size: 0x90
class UEntityActorRotationComponent : public UEntityRotationComponent
{
	struct FRotator ShadowVarRotation; // 0x68 (0x18)
	unsigned char padding_80[0x10]; // 0x80 (0x10)

	/* Functions */

	// Function /Script/EntityActor.EntityActorRotationComponent.OnRootComponentChanged (Underlying native function: OnRootComponentChanged 0x6a5b614)
	void OnRootComponentChanged(class USceneComponent*& InRootComponent, bool& bIsRootComponent); // (Final | Native | Private)
};

