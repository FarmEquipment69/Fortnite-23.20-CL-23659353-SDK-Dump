// Class /Script/FortniteGame.FortVehicleModConfig
// Size: 0x90
class UFortVehicleModConfig : public UObject
{
	struct FGameplayTag ModTag; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FScalableFloat ModEnabled; // 0x30 (0x28)
	struct TArray<struct FVehicleModBuildingGameplayActorAttachmentData> AttachedBuildingGameplayActors; // 0x58 (0x10)
	struct TArray<struct FVehicleModStaticMeshAttachmentData> AttachedStaticMeshes; // 0x68 (0x10)
	bool bCanModBeReapplied; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	float AdditionalMaxHealthToDestroyProp; // 0x7c (0x4)
	float AdditionalMaxHealthToDestroyPropFast; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	class UClass* AppliedGameplayEffect; // 0x88 (0x8)
};

