// ScriptStruct /Script/FortniteGame.FortWindResponderMaterialVariablePairData
// Size: 0x1c
struct FFortWindResponderMaterialVariablePairData
{
	float PreviousSpeed; // 0x0 (0x4)
	float PreviousOffset; // 0x4 (0x4)
	float MaterialsPreviousTime; // 0x8 (0x4)
	float DeltaTimeModifiedByMaterialSpeed; // 0xc (0x4)
	int MaterialVariableIndex; // 0x10 (0x4)
	struct FName SpeedVariableName; // 0x14 (0x4)
	struct FName TimeOffsetVariableName; // 0x18 (0x4)
};

