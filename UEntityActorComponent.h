// Class /Script/EntityActor.EntityActorComponent
// Size: 0x90
class UEntityActorComponent : public UEntityComponent
{
	unsigned char unreflected_60[0x8]; // 0x60 (0x8) 
	class UActorComponent* ActorComponent; // 0x68 (0x8)
	bool bCreatedActorComponent; // 0x70 (0x1)
	unsigned char padding_71[0x1f]; // 0x71 (0x1f)

	/* Functions */

	// Function /Script/EntityActor.EntityActorComponent.OnRep_ActorComponent (Underlying native function: OnRep_ActorComponent 0x15de1d4)
	void OnRepActorComponent(); // (Final | Native | Private)
};

