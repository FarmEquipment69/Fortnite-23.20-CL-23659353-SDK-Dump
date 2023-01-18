// ScriptStruct /Script/FortniteGame.FortAnimInput_TurnInPlace
// Size: 0x78
struct FFortAnimInput_TurnInPlace
{
	struct FCachedAnimStateArray TurnInitiatingStates; // 0x0 (0x18)
	struct FCachedAnimStateArray TurnTransitionStates; // 0x18 (0x18)
	struct FName TurnRotationAmountCurveName; // 0x30 (0x4)
	struct FName AllowTurnInPlaceCurveName; // 0x34 (0x4)
	struct FVector2D EmoteYawOffsetSofteningInputRange; // 0x38 (0x10)
	struct FVector2D EmoteYawOffsetSofteningOutputRange; // 0x48 (0x10)
	float TurnThreshold90; // 0x58 (0x4)
	float InitialTurnCurveValue; // 0x5c (0x4)
	float MaxAllowedRootYawOffset; // 0x60 (0x4)
	float RootYawOffset; // 0x64 (0x4)
	float RootYawOffsetAlpha; // 0x68 (0x4)
	unsigned char bWantsToTurn; // 0x6c (0x1)
	unsigned char bWantsToTurnInVehicle; // 0x6c (0x1)
	unsigned char bWantsToTurnAgain; // 0x6c (0x1)
	unsigned char bTurningLeft; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	float LastTurnRotationAmount; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

