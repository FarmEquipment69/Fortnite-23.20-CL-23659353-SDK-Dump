// ScriptStruct /Script/FortniteAI.AIRuntimeParametersSmartObjectActivity
// Size: 0xb0
struct FAIRuntimeParametersSmartObjectActivity
{
	struct FAIRuntimeParametersSmartObjectActivityCondition SmartObjectActivityCondition; // 0x0 (0x48)
	struct FAIRuntimeParametersSmartObjectActivityConfig SmartObjectActivityConfig; // 0x48 (0x58)
	unsigned char bEnabled; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	int ActivityId; // 0xa4 (0x4)
	float LastUseTimestamp; // 0xa8 (0x4)
	float Cooldown; // 0xac (0x4)
};

