// ScriptStruct /Script/ControlRig.RigUnit_EndProfilingTimer
// Size: 0x58
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{
	int NumberOfMeasurements; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FString Prefix; // 0x40 (0x10)
	float AccumulatedTime; // 0x50 (0x4)
	int MeasurementsLeft; // 0x54 (0x4)
};

