// Class /Script/IceRuntime.FortPhysicsSnowballComponent
// Size: 0xe8
class UFortPhysicsSnowballComponent : public UGameFrameworkComponent
{
	struct FGameplayTagContainer ValidSurfaces; // 0xa0 (0x20)
	unsigned char unreflected_c0[0x18]; // 0xc0 (0x18) 
	float MinUpdateDistance; // 0xd8 (0x4)
	float ScaleRate; // 0xdc (0x4)
	float ReplicatedScale; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)

	/* Functions */

	// Function /Script/IceRuntime.FortPhysicsSnowballComponent.OnRep_ReplicatedScale (Underlying native function: OnRep_ReplicatedScale 0x744feb8)
	void OnRepReplicatedScale(); // (Final | Native | Protected | Const)
};

