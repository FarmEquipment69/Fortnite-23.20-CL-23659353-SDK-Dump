// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_LandVehicleTrick
// Size: 0x198
struct FFortObjectiveFilter_LandVehicleTrick : FObjectiveFilter
{
	enum EFortTrickIncrementType IncrementBy; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x7]; // 0xd9 (0x7) 
	struct FObjectiveSubjectTags VehicleInfo; // 0xe0 (0x68)
	struct FInt32Range TrickPoints; // 0x148 (0x10)
	struct FInt32Range TrickCount; // 0x158 (0x10)
	struct FFloatRange AirDistance; // 0x168 (0x10)
	struct FFloatRange AirHeight; // 0x178 (0x10)
	struct FFloatRange AirTime; // 0x188 (0x10)
};

