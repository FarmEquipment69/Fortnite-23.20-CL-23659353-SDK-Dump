// Class /Script/FortniteGame.FortCurieComponent
// Size: 0x118
class UFortCurieComponent : public UCurieComponent
{
	unsigned char unreflected_b0[0x8]; // 0xb0 (0x8) 
	class AActor* LastElectricityPropagationParent; // 0xb8 (0x8)
	float LastElectrifiedTime; // 0xc0 (0x4)
	float LastFireFXRelatedStateTime; // 0xc4 (0x4)
	uint16_t ActiveStateBitfield; // 0xc8 (0x2)
	unsigned char unreflected_ca[0x2]; // 0xca (0x2) 
	int TrackedNativeFXGlowFlags; // 0xcc (0x4)
	unsigned char unreflected_d0[0x20]; // 0xd0 (0x20) 
	struct FFortCurieVoxelReplicationData ActiveVoxelReplicationData; // 0xf0 (0x18)
	unsigned char padding_108[0x10]; // 0x108 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieComponent.OnRep_ActiveVoxelReplicationData (Underlying native function: OnRep_ActiveVoxelReplicationData 0x25dd9bc)
	void OnRepActiveVoxelReplicationData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieComponent.OnRep_ActiveStateBitfield (Underlying native function: OnRep_ActiveStateBitfield 0x263296c)
	void OnRepActiveStateBitfield(); // (Final | Native | Private)
};

