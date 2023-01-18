// ScriptStruct /Script/Niagara.NiagaraDataInterfaceSplineLUT
// Size: 0x40
struct FNiagaraDataInterfaceSplineLUT
{
	struct TArray<struct FVector> Positions; // 0x0 (0x10)
	struct TArray<struct FVector> Scales; // 0x10 (0x10)
	struct TArray<struct FQuat> Rotations; // 0x20 (0x10)
	float SplineLength; // 0x30 (0x4)
	float SplineDistanceStep; // 0x34 (0x4)
	float InvSplineDistanceStep; // 0x38 (0x4)
	int MaxIndex; // 0x3c (0x4)
};

