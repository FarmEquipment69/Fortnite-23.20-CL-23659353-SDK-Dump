// ScriptStruct /Script/AugmentedReality.ARTraceResult
// Size: 0x90
struct FARTraceResult
{
	float DistanceFromCamera; // 0x0 (0x4)
	enum EARLineTraceChannels TraceChannel; // 0x4 (0x1)
	unsigned char unreflected_5[0xb]; // 0x5 (0xb) 
	struct FTransform LocalTransform; // 0x10 (0x60)
	class UARTrackedGeometry* TrackedGeometry; // 0x70 (0x8)
	unsigned char padding_78[0x18]; // 0x78 (0x18)
};

