// Class /Script/FortniteGame.FortPlayerAnimationComponent
// Size: 0xa70
class UFortPlayerAnimationComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct FAnimInput_Defaults AnimInputDefaults; // 0xc0 (0x438)
	struct FFortAnimInput_CommonVehicle* CommonVehicleInput; // 0x4f8 (0x8)
	struct FFortAnimInput_Quad QuadBikeInput; // 0x500 (0x80)
	struct FFortAnimInput_GolfCart GolfCartInput; // 0x580 (0x68)
	struct FFortAnimInput_FerretVehicle FerretVehicleInput; // 0x5e8 (0xb8)
	struct FFortAnimInput_JackalVehicle JackalVehicleInput; // 0x6a0 (0x240)
	struct FFortAnimInput_Motorcycle MotorcycleInput; // 0x8e0 (0x54)
	unsigned char unreflected_934[0x4]; // 0x934 (0x4) 
	struct FFortAnimInput_Zipline ZiplineInput; // 0x938 (0x38)
	struct FFortAnimInput_BowWeapon BowWeaponInput; // 0x970 (0xe0)
	uint32_t LastPreUpdateFrame; // 0xa50 (0x4)
	uint32_t LastNativeUpdateFrame; // 0xa54 (0x4)
	unsigned char unreflected_a58[0x8]; // 0xa58 (0x8) 
	float DefaultFullBodyToUpperBodyInMotionBlendTime; // 0xa60 (0x4)
	unsigned char padding_a64[0xc]; // 0xa64 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAnimationComponent.GetZiplineInput (Underlying native function: GetZiplineInput 0x5c76d30)
	struct FFortAnimInput_Zipline GetZiplineInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerAnimationComponent.GetJackalVehicleInput (Underlying native function: GetJackalVehicleInput 0x5c76c90)
	struct FFortAnimInput_JackalVehicle GetJackalVehicleInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

