// ScriptStruct /Script/FortniteGame.FortAnimNode_TransformRollerTreads
// Size: 0x150
struct FFortAnimNode_TransformRollerTreads : FAnimNode_SkeletalControlBase
{
	class AFortTreadVehicle* OwnerTreadVehicle; // 0xc8 (0x8)
	struct TMap<struct FName, struct FRollerAnimState> RollerAnimStates; // 0xd0 (0x50)
	struct FString RotationBoneName; // 0x120 (0x10)
	unsigned char bRequiresMovementComponentToEvaluateAsValid; // 0x130 (0x1)
	unsigned char unreflected_131[0x17]; // 0x131 (0x17) 
	bool bHasBeenInitialized; // 0x148 (0x1)
	unsigned char padding_149[0x7]; // 0x149 (0x7)
};

