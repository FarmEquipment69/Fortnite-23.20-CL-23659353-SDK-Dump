// ScriptStruct /Script/MotorcycleRuntime.MotorcycleWheel
// Size: 0x3c
struct FMotorcycleWheel
{
	struct FName WheelSocket; // 0x0 (0x4)
	float Radius; // 0x4 (0x4)
	float TireWidth; // 0x8 (0x4)
	float SpringLength; // 0xc (0x4)
	float WheelieMinSpringLength; // 0x10 (0x4)
	float SpringStiff; // 0x14 (0x4)
	float SpringDamp; // 0x18 (0x4)
	float PoppedTireSpringLength; // 0x1c (0x4)
	float PoppedTireSpringStiff; // 0x20 (0x4)
	float PoppedTireSpringDamp; // 0x24 (0x4)
	float PowerslideSpringStiff; // 0x28 (0x4)
	float PowerslideSpringDamp; // 0x2c (0x4)
	float WheelieSpringStiff; // 0x30 (0x4)
	float WheelieSpringDamp; // 0x34 (0x4)
	enum EFortMotorcycleWheelTraceMode WheelTraceMode; // 0x38 (0x1)
	unsigned char padding_39[0x3]; // 0x39 (0x3)
};

