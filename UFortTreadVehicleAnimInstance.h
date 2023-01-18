// Class /Script/FortniteGame.FortTreadVehicleAnimInstance
// Size: 0x6c0
class UFortTreadVehicleAnimInstance : public UFortVehicleAnimInstance
{
	struct TMap<struct FName, struct FRollerAnimState> RollerAnimStates; // 0x5f0 (0x50)
	struct TArray<struct FName> RollerBoneNames; // 0x640 (0x10)
	float MaxCompression; // 0x650 (0x4)
	float CompressionMass; // 0x654 (0x4)
	float CompressionStiffness; // 0x658 (0x4)
	unsigned char unreflected_65c[0x4]; // 0x65c (0x4) 
	class AFortTreadVehicle* TreadVehicle; // 0x660 (0x8)
	class USkeletalMeshComponent* SkeletalMeshComponent; // 0x668 (0x8)
	unsigned char padding_670[0x50]; // 0x670 (0x50)
};

