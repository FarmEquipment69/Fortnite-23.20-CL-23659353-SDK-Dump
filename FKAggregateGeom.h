// ScriptStruct /Script/Engine.KAggregateGeom
// Size: 0x68
struct FKAggregateGeom
{
	struct TArray<struct FKSphereElem> SphereElems; // 0x0 (0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10 (0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20 (0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30 (0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40 (0x10)
	struct TArray<struct FKLevelSetElem> LevelSetElems; // 0x50 (0x10)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

